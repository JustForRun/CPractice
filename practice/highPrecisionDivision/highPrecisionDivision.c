#include<stdio.h>
int main()
{
    int divisor = 1;
    int divident = 0;
    scanf("%d/%d",&divident,&divisor);
    int i=0;
    printf("%d.",(divident/divisor));
    divident = divident%divisor;
    
    for(i=0;i<200;i++)
    {
	divident*=10;
	printf("%d",(divident/divisor));
	divident%=divisor;
	if(!divident)
	{
	    break;
	}
    }
    printf("\n");
    return 0;

}
