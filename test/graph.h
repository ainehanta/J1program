/* �θ����ؤǻȤ�����ե��å��饤�֥�� graph.c �Τ������� */

#ifndef GRAPH_H_INCLUDED

#define	GRAPH_H_INCLUDED	1

#include	<X11/Xlib.h>
#include	<unistd.h>

/* ����̾�� */
#define		BLACK			0
#define		BLUE			1
#define		BROWN			2
#define		GOLD			3
#define		GRAY			4
#define		GREEN			5
#define		LIGHTBLUE		6
#define		LIGHTGRAY		7
#define		LIGHTGREEN		8
#define		PINK			9
#define		PURPLE			10
#define		RED				11
#define		VIOLET			12
#define		WHITE			13
#define		YELLOW			14

/* ���Υ⥸�塼���������륰���Х�ʴؿ� */

/* �ץ����κǽ�˰��٤����¹Ԥ��롤���ޤ��ʤ� */
extern	void
initGraph(void);

/* �ץ����κǸ�˰��٤����¹Ԥ��롤���ޤ��ʤ� */
extern	void
closeGraph(void);

/* �ܥ��󤬲������Τ��Ԥ� */
extern	void
waitButtonPress(void);

/* �ܥ��󤬲������Τ��Ԥäƺ�ɸ���֤� */
extern	void
getClickPoint(int *x,int *y);

/* ��ɸ (x,y) �� �� c �������Ǥ� */
extern	void
drawPoint(int x,int y,int c);

/* �濴 (x,y)��Ⱦ�� r���� c �αߤ����� */
extern	void
drawCircle(int x,int y,int r,int c);

/* �濴 (x,y)��Ⱦ�� r �αߤ������� c ���ɤ�Ĥ֤� */
extern	void
fillCircle(int x,int y,int r,int c);

/* �濴 (x,y)��x �����η� rx��y �����η� ry���� c ���ʱߤ����� */
extern	void
drawEllipse(int x,int y,int rx,int ry,int c);

/* �濴 (x,y)��x �����η� rx��y �����η� ry ���ʱߤ������� c ���ɤ�Ĥ֤� */
extern	void
fillEllipse(int x,int y,int rx,int ry,int c);

/* (x1,y1),(x2,y2),(x3,y3) ��ĺ���Ȥ��롤�� c �λ��ѷ������� */
extern	void
drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c);

/* (x1,y1),(x2,y2),(x3,y3) ��ĺ���Ȥ��뻰�ѷ��������� c ���ɤ�Ĥ֤� */
extern	void
fillTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c);

/* (x1,y1),(x2,y2) ��ĺ���Ȥ��롤�� c ��Ĺ���������� */
extern	void
drawRectangle(int x1,int y1,int x2,int y2,unsigned int c);

/* (x1,y1),(x2,y2) ��ĺ���Ȥ���Ĺ������������ c ���ɤ�Ĥ֤� */
extern	void
fillRectangle(int x1,int y1,int x2,int y2,unsigned int c);

/* (x1,y1),(x2,y2) ���֡��� c ����ʬ������ */
extern	void
drawLine(int x1,int y1,int x2,int y2,unsigned int c);

/* draw???? �������������������ꤹ���l >= 0�� */
extern	void
setLineWidth(int l);

/* ��(x,y) ��ޤࡤ�� border �ǰϤޤ줿�ΰ�򡤿� fill ���ɤ�Ĥ֤� */
extern	void
floodFill(int x,int y,int border,int fill);

/* (x,y) �ΰ��֤�ʸ���� str �� c ������ */
extern	void
drawString(int x,int y,char *str,int c);

/* ���ޥ�ɥ��塼��ե�å��夷�Ʋ��̤򹹿����� */
extern	void
flush(void);

#endif /* GRAPH_H_INCLUDED */
