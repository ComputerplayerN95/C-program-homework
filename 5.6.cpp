#include<stdio.h>
int main()
{
	int num = 0;
	for (int i = 1; i <= 20; i++)
	{
		int sum = 1;
		for (int j = 1; j <= i; j++)
		{
			sum *= j;
		}
		num += sum;
	}
	printf("%d", num);
	return 0;
}