#include<stdio.h>
#include<stdlib.h>
struct LNode
{
	int value;
	struct LNode *pre;
	struct LNode *next;
};
int main(void)
{
	int tempInt;
	struct LNode *head = (struct LNode*)malloc(sizeof(struct LNode));
	struct LNode *nowPosition = head;
	struct LNode *newNode;
	while(scanf("%d",&tempInt))
	{
		if(tempInt == -1)
		{
			break;
		}
		newNode = (struct LNode*)malloc(sizeof(struct LNode));
		newNode->value = tempInt;
		nowPosition->next = newNode;
		newNode->pre = nowPosition;
		nowPosition = nowPosition->next;
	}
	
	while(nowPosition != head)
	{
		printf("%d ",nowPosition->value);
		nowPosition = nowPosition->pre;
	}
}
