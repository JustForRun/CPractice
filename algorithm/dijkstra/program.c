#include<stdio.h>
#define POINTNUM 10
void fun(int result[POINTNUM],int length[POINTNUM][POINTNUM],int nowPoint)
{
	int i;
	for(i=0;i<POINTNUM;i++)
	{
		if(length[nowPoint][i]!=-1 && (result[nowPoint]+length[nowPoint][i]<result[i]))
		{
			result[i] = result[nowPoint]+length[nowPoint][i];
			fun(result,length,i);
		}
	}
}
int main(void)
{
	int length[POINTNUM][POINTNUM] = {-1};
	int roadNum,i,tempP1,tempP2,startPoint;
	scanf("%d%d",&roadNum,&startPoint);
	for(i=0;i<roadNum;i++)
	{
		scanf("%d%d",&tempP1,&tempP2);
		scanf("%d",&length[tempP1][tempP2]);
		length[tempP2][tempP1] = length[tempP1][tempP2];
	}
	
	int result[POINTNUM] = {-1};
	result[startPoint] = 0;
	fun(result,length,startPoint);
	for(i=0;i<POINTNUM;i++)
	{
		printf("%d   ",result[i]);
	}
}


