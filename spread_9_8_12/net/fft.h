#ifndef FFT_H
#define FFT_H

#include <math.h>
#include<stdio.h>
#include<stdlib.h>
                                                 //定义福利叶变换的点数
#define PI 3.1415926535897932384626433832795028841971               //定义圆周率值

struct compx {float real,imag;};                                    //定义一个复数结构

extern void create_sin_tab(float *sin_t,int PointNum);
extern void FFT(struct compx *xin, int);

#endif // FFT_H
