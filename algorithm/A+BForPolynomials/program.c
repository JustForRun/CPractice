#include<stdio.h>
#include<stdlib.h>
struct LNode
{
	int ind;
	float coe;
	struct LNode* next;
};
void add(struct LNode * source,int ind,double coe)
{
	struct LNode *prePosition;
	struct LNode *nowPosition;
	prePosition = source;
	nowPosition = source->next;
	while(nowPosition != NULL && nowPosition->ind > ind)
	{
		prePosition = nowPosition;
		nowPosition = nowPosition->next;
	}
	if(nowPosition != NULL && nowPosition->ind == ind)
	{
		nowPosition->coe+=coe;
	}
	else
	{
		struct LNode *newNode = (struct LNode*)malloc(sizeof(struct LNode));
		newNode->ind = ind;
		newNode->coe = coe;
		prePosition->next = newNode;
		newNode->next = nowPosition;
		source->ind += 1;
	}
}
void getAndAddPoly(struct LNode * source)
{
	int i=0;
	int num,newInd;
	float newCoe;
	scanf("%d",&num);
	for(;i<num;i++)
	{
		scanf("%d %f",&newInd,&newCoe);	
		add(source,newInd,newCoe);
	}
	
}
int getFloatDecNum(float num)
{
	int x,y = (int)num,maxNum=0,j;
	num = num-y;
	for(j=0;j<7;j++)
	{
		if(y>0)
		{
			y/=10;	
		}
		else
		{
			maxNum++;
			num *= 10;
		}
	}
	x = (int)num;
	int i=0;
	for(;i<maxNum;i++)
	{
		if(x%10 == 0)
		{
			x/=10;
		}
		else
		{
			return maxNum-i;
		}
	}
	return 0;
}
void print(struct LNode * source)
{
	printf("%d",source->ind);
	while(source->next != NULL)
	{
		source = source->next;
		printf(" %d %.*f",source->ind,getFloatDecNum(source->coe),source->coe);
	}
}
int main(void)
{
	struct LNode result;
	result.ind=0;
	result.coe=0;
	result.next=NULL;
	getAndAddPoly(&result);
	getAndAddPoly(&result);
	print(&result);
}
