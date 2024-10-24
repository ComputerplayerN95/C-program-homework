#include<stdio.h>
int main()
{
    int h = 100;
    int count = 0;
    for(int i = 1;i<11;i++)
    {
        count += h;
        h /= 2;
        printf("第%d次落地时共经过%d米\n",i,count);
        count += h;
        printf("第%d次反弹%d米\n",i,h);
    }
    return 0;
}