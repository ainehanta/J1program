/* 体験入学で使うグラフィックライブラリ */

#include	<X11/Xlib.h>
#include	<unistd.h>

#include	"graph.h"

/* 使える色の数 */
#define		MAX_COLORS		(15)

/* 文字表示に使うフォント */
#define		FONT_NAME	"-sony-fixed-medium-r-normal--40-*-*-*-*-*-iso8859-1"

/* 初期のウィンドウサイズ */
#define		WIDTH		(640)
#define		HEIGHT		(480)

/* 最大のウィンドウサイズ（floodFill() にかかわる制約 */
#define		MAX_WIDTH	(1024)
#define		MAX_HEIGHT	(768)

/* いろいろなマクロ */
#define		IN(x,y,w,h)	((x) >= 0 && (x) < (w) && (y) >= 0 && (y) < (h))
#define		MIN(a,b)	((a) <= (b) ? (a) : (b))
#define		MAX(a,b)	((a) >= (b) ? (a) : (b))

/* このモジュールで定義するローカルな関数 */
static	void
allocColors(Display *d);

static void
XYToWH(int x1,int y1,int x2,int y2,int *x,int *y,int *w,int *h);

static void
paint(XImage *image,int x,int y,int width,int height,	int border,int fill);

static void
clearFlag(char flag[][MAX_HEIGHT],int width,int height);

/* グローバルな変数 */

/* ローカルな変数 */
static	Display			*d;
static	Window			w;
static	GC				gc;
static	Colormap		cmap;
static	Font			font;
static	unsigned long	color[MAX_COLORS];

/* ローカルな変数 */
static	char *
colorName[MAX_COLORS] = {
	"black",		/*  0 */
	"blue",			/*  1 */
	"brown",		/*  2 */
	"gold",			/*  3 */
	"gray",			/*  4 */
	"green",		/*  5 */
	"light blue",	/*  6 */
	"light gray",	/*  7 */
	"light green",	/*  8 */
	"pink",			/*  9 */
	"purple",		/* 10 */
	"red",			/* 11 */
	"violet",		/* 12 */
	"white",		/* 13 */
	"yellow"		/* 14 */
};

/* 本体 */
void
initGraph(void)
{
	d = XOpenDisplay(NULL);
	allocColors(d);
	w = XCreateSimpleWindow(d,RootWindow(d,0),0,0,WIDTH,HEIGHT,2,color[WHITE],color[WHITE]);
	XMapWindow(d,w);
	gc = XCreateGC(d,w,0,0);
	XSelectInput(d,w,ButtonPressMask|ButtonReleaseMask|KeyPressMask);

	font = XLoadFont(d,FONT_NAME);
	XSetFont(d,gc,font);

	setLineWidth(2);
	
	/* なんかよくわからんが，しばらく待たないとエラーが発生する？ */
	XSync(d,True);
	sleep(1);
}			

void
closeGraph(void)
{
	XFreeGC(d,gc);
	XUnloadFont(d,font);
	XCloseDisplay(d);
}

void
waitButtonPress(void)
{
	XEvent	event;

	XNextEvent(d,&event);
	while (event.type != ButtonPress){
		XNextEvent(d,&event);
	}
}

void
getClickPoint(int *x,int *y)
{
	XEvent	event;

	XNextEvent(d,&event);
	while (event.type != ButtonPress){
		XNextEvent(d,&event);
	}
	*x = event.xbutton.x;
	*y = event.xbutton.y;
}

static	void
allocColors(Display *d)
{
	XColor	c,e;
	int		i;

	cmap = DefaultColormap(d,0);
	for (i = 0;i < MAX_COLORS;i++){
		XAllocNamedColor(d,cmap,colorName[i],&c,&e);
		color[i] = e.pixel;
	}
}

void
drawPoint(int x,int y,int c)
{
	XSetForeground(d,gc,color[c]);
	XDrawPoint(d,w,gc,x,y);
	flush();
}

void
drawCircle(int x,int y,int r,int c)
{
	XSetForeground(d,gc,color[c]);
	XDrawArc(d,w,gc,x - r,y - r,r * 2,r * 2,0,360 * 64);
	flush();
}

void
fillCircle(int x,int y,int r,int c)
{
	XSetFillStyle(d,gc,FillSolid);
	XSetForeground(d,gc,color[c]);
	XFillArc(d,w,gc,x - r,y - r,r * 2,r * 2,0,360 * 64);
	flush();
}

void
drawEllipse(int x,int y,int rx,int ry,int c)
{
	XSetForeground(d,gc,color[c]);
	XDrawArc(d,w,gc,x - rx,y - ry,rx * 2,ry * 2,0,360 * 64);
	flush();
}

void
fillEllipse(int x,int y,int rx,int ry,int c)
{
	XSetFillStyle(d,gc,FillSolid);
	XSetForeground(d,gc,color[c]);
	XFillArc(d,w,gc,x - rx,y - ry,rx * 2,ry * 2,0,360 * 64);
	flush();
}

void
drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c)
{
	XSetForeground(d,gc,color[c]);
	XDrawLine(d,w,gc,x1,y1,x2,y2);
	XDrawLine(d,w,gc,x2,y2,x3,y3);
	XDrawLine(d,w,gc,x3,y3,x1,y1);
	flush();
}

void
fillTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c)
{
	XPoint	points[3];

	points[0].x = x1;
	points[0].y = y1;
	points[1].x = x2;
	points[1].y = y2;
	points[2].x = x3;
	points[2].y = y3;
	XSetForeground(d,gc,color[c]);
	XFillPolygon(d,w,gc,points,3,Nonconvex,CoordModeOrigin);
	flush();
}

void
drawRectangle(int x1,int y1,int x2,int y2,unsigned int c)
{
	int		x,y,width,height;

	XSetForeground(d,gc,color[c]);
	XYToWH(x1,y1,x2,y2,&x,&y,&width,&height);
	XDrawRectangle(d,w,gc,x,y,width,height);
	flush();
}

void
fillRectangle(int x1,int y1,int x2,int y2,unsigned int c)
{
	int		x,y,width,height;

	XSetForeground(d,gc,color[c]);
	XYToWH(x1,y1,x2,y2,&x,&y,&width,&height);
	XFillRectangle(d,w,gc,x,y,width,height);
	flush();
}

/* (x1,x2), (x2,y2) で表される四角形から，	*/
/* 左上座標 (x,y), 大きさ (w,h) を得る		*/
static void
XYToWH(int x1,int y1,int x2,int y2,int *x,int *y,int *w,int *h)
{
	if (x1 <= x2){
		*x = x1;
		*w = x2 - x1;
	}else{
		*x = x2;
		*w = x1 - x2;
	}
	if (y1 <= y2){
		*y = y1;
		*h = y2 - y1;
	}else{
		*y = y2;
		*h = y1 - y2;
	}
}

void
drawLine(int x1,int y1,int x2,int y2,unsigned int c)
{
	XSetForeground(d,gc,color[c]);
	XDrawLine(d,w,gc,x1,y1,x2,y2);
	flush();
}

void
setLineWidth(int l)
{
	XSetLineAttributes(d,gc,l,LineSolid,CapRound,JoinRound);
}

void
floodFill(int x,int y,int border,int fill)
{
	XImage	*image;
	unsigned int	width,height;

	/* 以下の変数の値は利用されない */
	Window		root;
	int		rx,ry;
	unsigned int	bwidth;
	unsigned int	depth;

	XGetGeometry(d,w,&root,&rx,&ry,&width,&height,&bwidth,&depth);
	image = XGetImage(d,w,0,0,width,height,XAllPlanes(),ZPixmap);
	paint(image,x,y,width,height,border,fill);
	XPutImage(d,w,gc,image,0,0,0,0,width,height);
	XFree(image);
	flush();
}

static void
paint(XImage *image,int x,int y,int width,int height,int border,int fill)
{
	char	flag[MAX_WIDTH][MAX_HEIGHT];		/* 処理済みの点 → TRUE		*/
	XPoint	points[MAX_WIDTH * MAX_HEIGHT];		/* 未処理点を積むスタック	*/
	int		nx,ny;								/* 次の点 */
	int		i;									/* スタックポインタ */
	int		j;
	unsigned long		b,f;

	b = color[border];
	f = color[fill];

	clearFlag(flag,width,height);
	i = 0;

	/* 開始点をスタックに積む */
	if (IN(x,y,width,height) && !flag[x][y]){
		flag[x][y] = True;
		/* 境界色以外の色のとき，スタックに積んでおく */
		if (XGetPixel(image,x,y) != b){
			points[i].x = x;
			points[i].y = y;
			i++;
		}
	}

	/* スタックに処理対象の点が残っている間，塗りつぶしを繰り返す */
	while (i > 0){
		i--;
		x = points[i].x;
		y = points[i].y;
		XPutPixel(image,x,y,f);

		/* 隣接 4 点について，再帰的に塗りつぶす */
		for (j = 0;j < 4;j++){
			switch (j){
			case 0:
				nx = x;
				ny = y + 1;
				break;
			case 1:
				nx = x;
				ny = y - 1;
				break;
			case 2:
				nx = x + 1;
				ny = y;
				break;
			case 3:
				nx = x - 1;
				ny = y;
				break;
			}

			/* 矩形内で未処理の点だけが対象 */
			if (IN(nx,ny,width,height) && !flag[nx][ny]){
				flag[nx][ny] = True;

				/* 境界色以外の色のとき，スタックに積んでおく */
				if (XGetPixel(image,nx,ny) != b){
					points[i].x = nx;
					points[i].y = ny;
					i++;
				}
			}
		}
	}
}

static void
clearFlag(char flag[][MAX_HEIGHT],int width,int height)
{
	int		i,j;

	for (i = 0;i < width;i++){
		for (j = 0;j < height;j++){
			flag[i][j] = False;
		}
	}
}

void
drawString(int x,int y,char *str,int c)
{
	XSetForeground(d,gc,color[c]);
	XDrawString(d,w,gc,x,y,str,strlen(str));
	flush();
}

void
flush(void)
{
	XFlush(d);
}

