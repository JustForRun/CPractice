#include<stdio.h>
void main()
{
	char inputChar;
	int num = 0;
	int isFirst = 1;
	while((inputChar = getchar())!='.' )
	{
		if(inputChar == ' ')
		{
			if(num)
			{
				if(!isFirst)
				{
					printf(" ");
				}
				else
					isFirst = 0;
				printf("%d",num);
			}
			num = 0;
			continue;
		}

		num+=1;
	}
	if(num)
	{
		if(!isFirst)
		{
			printf(" ");	
		}
		printf("%d",num);
	}
	printf("\n");
	return;
	
}
