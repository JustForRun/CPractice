#include<stdio.h>
int main()
{
	int newNum1=0;
	int newNum2=0;
	int flag = 0;
	int result[101]={0};
	while(flag<2)
	{
		scanf("%d %d",&newNum1,&newNum2);
		if(newNum1==0)
		{
			flag+=1;
		}
		result[newNum1]+=newNum2;
	}
	int i=100;
	int isFirst = 1;
	for(i=100;i>1;i--)
	{
		if(result[i]!=0)
		{
			if(isFirst)
			{
				if(result[i]>1)
               			{
                		        printf("%d",result[i]);
		                }

				printf("x%d",i);
				isFirst = 0;
			}
			else
			{
				printf("+");
				if(result[i]>1)
                                {
                                        printf("%d",result[i]);
                                }
				
			 	printf("x%d",i);
			}
		}
	}
	if(result[1]!=0)
	{
		if(!isFirst)
		{
			printf("+");
			isFirst = 0;
		}
		if(result[1]>1)
		{
			printf("%d",result[1]);
		}
		printf("x");
	}
	if(result[0]!=0)
	{
		if(!isFirst)
		{
			printf("+");
			isFirst = 0;
		}
		printf("%d",result[0]);
	}
	if(isFirst)
	{
		printf("0");
	}
	printf("\n");
        return 0;
}
