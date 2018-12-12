#include<stdio.h>
#define MONTHS 12
#define YEARS 5
void PrintRowSum(float (*source)[MONTHS],int rowNum);
void PrintColAve(float [][MONTHS],int);
int main(void)
{
        float rain[YEARS][MONTHS] = {
                {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
                {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
                {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
                {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
                {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
        };
        printf("YEAR PAINFALL(inches)\n");
        PrintRowSum(rain,YEARS);
	PrintColAve(rain,YEARS);
}
void PrintRowSum(float (* source)[MONTHS],int rowNum)
{
        int i,j;
        float total,yearsTotal;
        for(i=0;i<rowNum;i++)
        {
                total = 0;
                for(j=0;j<MONTHS;j++)
                {
                        total += source[i][j];
                }
		yearsTotal += total;
                printf("%5d %15.1f\n",2010+i,total);
        }
	printf("\nThe yearly average is %4.1f inches.\n",yearsTotal/rowNum);
}
void PrintColAve(float (*source)[MONTHS],int rowNum)
{
	int i,j;
	float total;
	printf("\n\n");
	for(i=0;i<MONTHS;i++)
	{
		total = 0;
		for(j=0;j<rowNum;j++)
		{
			total+=source[j][i];
		}
		printf("%4.1f",total/rowNum);
	}
	printf("\n");
}

