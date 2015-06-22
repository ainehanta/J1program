/* 体験入学で使うグラフィックライブラリ graph.c のための定義 */

#ifndef GRAPH_H_INCLUDED

#define	GRAPH_H_INCLUDED	1

#include	<X11/Xlib.h>
#include	<unistd.h>

/* 色の名前 */
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

/* このモジュールで定義するグローバルな関数 */

/* プログラムの最初に一度だけ実行する，おまじない */
extern	void
initGraph(void);

/* プログラムの最後に一度だけ実行する，おまじない */
extern	void
closeGraph(void);

/* ボタンが押されるのを待つ */
extern	void
waitButtonPress(void);

/* ボタンが押されるのを待って座標を返す */
extern	void
getClickPoint(int *x,int *y);

/* 座標 (x,y) に 色 c の点を打つ */
extern	void
drawPoint(int x,int y,int c);

/* 中心 (x,y)，半径 r，色 c の円を描く */
extern	void
drawCircle(int x,int y,int r,int c);

/* 中心 (x,y)，半径 r の円の内部を色 c で塗りつぶす */
extern	void
fillCircle(int x,int y,int r,int c);

/* 中心 (x,y)，x 方向の径 rx，y 方向の径 ry，色 c の楕円を描く */
extern	void
drawEllipse(int x,int y,int rx,int ry,int c);

/* 中心 (x,y)，x 方向の径 rx，y 方向の径 ry の楕円の内部を色 c で塗りつぶす */
extern	void
fillEllipse(int x,int y,int rx,int ry,int c);

/* (x1,y1),(x2,y2),(x3,y3) を頂点とする，色 c の三角形を描く */
extern	void
drawTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c);

/* (x1,y1),(x2,y2),(x3,y3) を頂点とする三角形の内部を色 c で塗りつぶす */
extern	void
fillTriangle(int x1,int y1,int x2,int y2,int x3,int y3,int c);

/* (x1,y1),(x2,y2) を頂点とする，色 c の長方形を描く */
extern	void
drawRectangle(int x1,int y1,int x2,int y2,unsigned int c);

/* (x1,y1),(x2,y2) を頂点とする長方形の内部を色 c で塗りつぶす */
extern	void
fillRectangle(int x1,int y1,int x2,int y2,unsigned int c);

/* (x1,y1),(x2,y2) を結ぶ，色 c の線分を描く */
extern	void
drawLine(int x1,int y1,int x2,int y2,unsigned int c);

/* draw???? で描く線の太さを設定する（l >= 0） */
extern	void
setLineWidth(int l);

/* 点(x,y) を含む，色 border で囲まれた領域を，色 fill で塗りつぶす */
extern	void
floodFill(int x,int y,int border,int fill);

/* (x,y) の位置に文字列 str を色 c で描く */
extern	void
drawString(int x,int y,char *str,int c);

/* コマンドキューをフラッシュして画面を更新する */
extern	void
flush(void);

#endif /* GRAPH_H_INCLUDED */
