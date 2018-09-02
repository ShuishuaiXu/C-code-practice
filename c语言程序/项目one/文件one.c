/* exp7-20-1.c нд╪Ч1  */
#include"stdio.h"
extern int a,b;
int Max();
int main()
{
	int c;
	printf("Please input a number: ");
	scanf("%d,%d",&a,&b);
	c = Max();
	printf("c = %d\n",c);
	return 0;
 } 
