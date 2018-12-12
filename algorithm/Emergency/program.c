#include<stdio.h>
#define MAXNUM 500
int 
int main(void)
{
	int peopleNum[MAXNUM] = {0};
	int length[MAXNUM][MAXNUM] = {-1};
	int cityNum,roadNum,startCity,endCity,tempStartCity,tempEndCity,i,j;
	//获取输入
	scanf("%d%d%d%d",&cityNum,&roadNum,&startCity,&endCity);
	for(i=0;i<cityNum;i++)
	{
		scanf("%d",&peopleNum[i];
	}
	for(i=0;i<roadNum;i++)
	{
		scanf("%d%d",&tempStartCity,&tempEndCity);
		scanf("%d",&length[tempStartCity],&length[tempEndCity]);
		length[tempEndCity][tempStartCity] = length[tempStartCity][tempEndCity];
	}
	//开始计算结果
	

	
}
