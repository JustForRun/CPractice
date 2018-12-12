#include<stdio.h>
int main(void)
{
	double source[5] = {1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	double target3[5];

	
	return 0;
}
void copy_arr(double *target,double *source,int N)
{
	int i;
	for(;i<N;i++)
	{
		target[i] = source[i];
	}
}
void copy_ptr(double *target,double *source,int N)
{
	int i;
	for(;i<N;i++)
	{
		*(target+i) = *(source+i);
	}
}
void copy_ptrs(double *target,double *start,double *end)
{
	while(start<=)
	{
		
	}
}
