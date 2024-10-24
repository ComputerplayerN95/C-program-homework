#include<stdio.h>
int main()
{
    float sum = 0;
    for(float i = 1;i<=100;i++)
    {
        sum += i+i*i+1/i;
    }
    printf("%f",sum);
    return 0;


}
