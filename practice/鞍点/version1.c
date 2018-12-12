#include<stdio.h>
int main()
{
	int maxNum = 0;
	scanf("%d",&maxNum);
	int source[100][100];
	int i=0;
	int j=0;
	//接受输入
	for(i=0;i<maxNum;i++)
	{
		for(j=0;j<maxNum;j++)
		{
			scanf("%d",&source[i][j]);
		}
	}
	
	int maxValueInRow=0;
	int maxIndexInRow=0;
	//开始计算
	for(i=0;i<maxNum;i++)
	{
		maxValueInRow = source[i][0];
		maxIndexInRow = 0;
		//获取行中的最大值
		for(j=1;j<maxNum;j++)
		{
			if(source[i][j]>maxValueInRow)
			{
				maxValueInRow = source[i][j];
				maxIndexInRow = j;
			}
		}

		for(j=0;j<maxNum;j++)
		{
			if(source[j][maxIndexInRow]<maxValueInRow)
			{
				break;
			}
		}

		if(j==maxNum)
		{
			printf("%d %d\n",i,maxIndexInRow);
			return 0;
		}
	
	}
	printf("NO\n");
	return 0;
}
