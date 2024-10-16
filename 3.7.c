#include <stdio.h>
#define pei  3.14
int main()
{
    float r ,h ;
    scanf("%f %f", &r, &h);
    float c = 2.0*r*pei;
    float s = r*r*pei;
    float v = s*h;
    float ball_s = 4.0/3.0*pei*r*r*r;
    float ball_v= 4.0/3.0*pei*r*r*r;
    float cylinder = c*h;
    printf("圆的周长是：%.2f\n圆的面积是：%.2f\n圆的体积是：%.2f\n球的表面积是：%.2f\n球的体积是：%.2f\n圆柱的体积是：%.2f\n",c,s,v,ball_s,ball_v,cylinder);
    return 0;
}