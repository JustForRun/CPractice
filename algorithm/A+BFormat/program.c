#include<stdio.h>
#define SPLITNUM 1000
void printNum(int i)
{
	if(i/SPLITNUM>0)
	{
		printNum(i/SPLITNUM);
		printf(",");
		printf("%03d",i%SPLITNUM);
	}
	else
	{
		printf("%d",i);
	}
}
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	int result = a+b;
	if(result < 0)
	{
		printf("-");
		result = -result;
	}
	printNum(result);
	printf("\n");

	return 0;
}
