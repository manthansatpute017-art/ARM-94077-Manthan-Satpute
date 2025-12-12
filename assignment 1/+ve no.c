#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first no:\n");
	scanf("%d",&a);
	printf("enter second no:\n");
	scanf("%d",&b);
	c=a>b?a-b:b-a;
	printf("the positive no is:%d",c);
}
