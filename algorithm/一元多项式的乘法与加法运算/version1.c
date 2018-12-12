#include<stdio.h>
#include<stdlib.h>
struct PolyNode{
	int expo;//指数
	int coef;//系数
  	struct PolyNode *next;//下一个
};
int main()
{
	/*设计函数分别求两个一元多项式的乘积与和。*/
	struct PolyNode poly1 = (struct PolyNode)malloc(sizeof(struct PolyNode));
	struct PolyNode poly2 = (struct PolyNode)malloc(sizeof(struct PolyNode));
	
	return 0;
}
