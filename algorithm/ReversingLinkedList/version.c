#include<stdio.h>
#include<stdlib.h>
struct LNode {
	int preI;
	int value;
	int nextI;
	struct LNode* next;
};
void sort(struct LNode* source)
{
	struct LNode* nowPosition = source;
	struct LNode* sortedPosition = source;
	struct LNode* prePosition;
	while (sortedPosition != NULL && sortedPosition->next != NULL)
	{
		nowPosition = sortedPosition->next;
		prePosition = sortedPosition;
		while (nowPosition != NULL && nowPosition->preI != sortedPosition->nextI)
		{
			prePosition = nowPosition;
			nowPosition = nowPosition->next;
		}
		if (nowPosition == NULL)
		{
			sortedPosition->next = NULL;
		}
		else if (nowPosition->preI == sortedPosition->nextI)
		{
			prePosition->next = nowPosition->next;
			nowPosition->next = sortedPosition->next;
			sortedPosition->next = nowPosition;
			sortedPosition = sortedPosition->next;
		}
	}
}
struct LNode* reversing(struct LNode* source,int flag)
{
	struct LNode* headNode = (struct LNode*)malloc(sizeof(struct LNode));
	headNode->nextI = source->preI;
	headNode->next = source;
        struct LNode* prePosition;
	struct LNode* tempPosition;
	prePosition=headNode;
	struct LNode* nowPosition=source;
	int count = 1;
	int i=0;
	int tempI;
	int isFirstReversing = 1;
	while(nowPosition!=NULL)
	{
		if(count%flag == 0)
		{	
			tempPosition = prePosition->next;
			for(i=0;i<flag-1;i++)
			{
				prePosition = prePosition->next;
				prePosition->next->nextI = prePosition->preI;
			}
			prePosition = prePosition->next;
			if(prePosition->next!=NULL)
			{
				tempPosition->nextI = prePosition->next->preI;
			}
			count = 0;
			if(isFirstReversing)
			{
				isFirstReversing = 0;
				headNode->nextI = prePosition->preI;
			}
		}		
		nowPosition = nowPosition->next;
		count++;
	}
	sort(headNode);
	return headNode->next;
}
void printNodes(struct LNode* source)
{
	while(source!=NULL)
	{
		printf("%05d %d %0*d\n",source->preI,source->value,source->nextI>0?5:2,source->nextI);
		source=source->next;
	}
}
int main()
{
	int startI;
	int num;
	int flag;
	int i;
	struct LNode source;
	source.preI = -1;
	source.value = -1;
	source.nextI = -1;
	source.next = NULL;
	scanf("%d %d %d", &startI, &num, &flag);
	struct LNode* nowPosition;
	nowPosition = &source;
	for (i = 0; i<num; i++)
	{
		struct LNode* tempNode = (struct LNode*)malloc(sizeof(struct LNode));
		scanf("%d %d %d", &(tempNode->preI), &(tempNode->value), &(tempNode->nextI));
		if (tempNode->preI == startI)
		{
			source.preI = tempNode->preI;
			source.value = tempNode->value;
			source.nextI = tempNode->nextI;
		}
		else
		{
			nowPosition->next = tempNode;
			nowPosition = tempNode;
			nowPosition->next = NULL;
		}
	}
	sort(&source);
	printNodes(reversing(&source,flag));
	return 0;
}

