#include<stdio.h>
int main()
{
    char car;
    int n;
    int space = 0;
    int num = 0;
    int other = 0;
    int alpha = 0;
    printf("请输入一组字符:\n");


    car = getchar();
    n = sizeof(car);
    while(car!= '\n')
    {
        if(car == ' ')
        {
            space++;
        }
        else if(car>= '0' && car <= '9')num++;

        else if((car >= 'a' && car<= 'z') || (car >= 'A' && car <= 'Z'))
        {
            alpha++;
        }
        else
        {
            other++;
        }
        car = getchar();

    }
    
    printf("space = %d,num = %d,alpha = %d,other = %d",space,num,alpha,other);
    return 0;
}