#include<stdio.h>
void printResult(int *result)
{
	int isFirst = 1;
	int i=100;
	for(;i>=0;i--)
	{
		if(result[i]>0)
		{
			if(!isFirst)
			{
				printf("+");	
			}
			else
			{
				isFirst = 0;
			}
			if(result[i]!=1||i==0)
			{
				printf("%d",result[i]);
			}
			if(i>1)
			{
				printf("x%d",i);
			}
			else if(i==1)
			{
				printf("x");
			}
		}
		else if(result[i]<0)
		{
			if(isFirst)
			{
				isFirst = 0;
			}
                        if(i>1)
                        {
                                printf("%dx%d",result[i],i);
                        }
                        else if(i==1)
                        {
                                printf("%dx",result[i]);
                        }
			else
			{
				printf("%d",result[i]);
			}

		}
	}
	if(isFirst)
	{
		printf("0");
	}
	printf("\n");
}
int main()
{
	int result[101]={0};
	int flag = 0;
	int newNum1,newNum2;
	while(flag<2)
	{
		scanf("%d %d",&newNum1,&newNum2);
		if(newNum1==0)
		{
			flag+=1;
		}
		result[newNum1]+=newNum2;
	}
	printResult(result);
	return 0;
}

