#include<stdio.h>
void copy_arr(double *target,double *source,int N);
void copy_ptr(double *target,double *source,int N);
void copy_ptrs(double *target,double *start,double *end);
void print_arr(double *source,int N);
int main(void)
{
	double source[5] = {1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target3,source,&source[5]);
	print_arr(source,5);
	print_arr(target1,5);
	print_arr(target2,5);
	print_arr(target3,5);
	return 0;
}
void copy_arr(double *target,double *source,int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		target[i] = source[i];
	}
}
void copy_ptr(double *target,double *source,int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		*(target+i) = *(source+i);
	}
}
void copy_ptrs(double *target,double *start,double *end)
{
	while(start<=end)
	{
		*target = *start;
		start += 1;
		target += 1;
	}
}
void print_arr(double * source,int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%5.1f",source[i]);
	}
	printf("\n");
}
