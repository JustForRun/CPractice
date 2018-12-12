#include<stdio.h>
#define ARRAYLENGTH 5
int get_max(int* source,int N);
int main(void)
{
	int source[ARRAYLENGTH];
	int i;
	for(i=0;i<ARRAYLENGTH;i++)
	{
		scanf("%d",source+i);
	}
	printf("%d\n",get_max(source,ARRAYLENGTH));
}
int get_max(int *source,int N)
{
	int i,max;
	if(N<=0)
	{
		return 0;	
	}
	max = source[0];
	for(i=1;i<N;i++)
	{
		if(source[i]>max)
		{
			max = source[i];
		}
	}
	return max;
}
