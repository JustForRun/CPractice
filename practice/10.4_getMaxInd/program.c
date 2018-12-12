#include<stdio.h>
#define ARRAYLENGTH 5
int get_max_ind(int* source,int N);
int main(void)
{
	int source[ARRAYLENGTH];
	int i;
	for(i=0;i<ARRAYLENGTH;i++)
	{
		scanf("%d",source+i);
	}
	printf("%d\n",get_max_ind(source,ARRAYLENGTH));
}
int get_max_ind(int* source,int N)
{
	if(N<=0)
	{
		return -1;
	}
	int i,maxInd = 0,max = source[0];
	for(i=1;i<N;i++)
	{
		if(source[i]>max)
		{
			maxInd = i;
			max = source[i];
		}
	}
	return maxInd;
}
