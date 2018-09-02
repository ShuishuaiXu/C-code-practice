/*
*  第十一章：位运算：    1.位运算符概述
*                        2.位运算赋值运算符
*                        3.位域
*                        4.总结 

*            1.位运算符概述： 与(&)，或(|)，异或(^)，求反(~)，移位(<<) (>>) 运算
*                           1.与（&），用于某些位的清零 
*                           2.移位运算：左移时，高位丢弃，低位补0；右移时，符号位随同移动，
*                                      当为正数时，最高位补0，当为负数时，最高为补0还是1取决于编译系统。
 
*            2.位运算赋值运算符: 位运算符与赋值运算符结合起来，就像算数运算符与赋值运算符结合一样 

*            3.位域（位段）： 
*                           1.位域的定义和位域变量的说明
*                                      1.位域本质上就是一种结构类型，不过其成员就是按二进制分配的
*                                      2.一个位域必须存储在同一个字节中 
*                           2.位域的使用 
*                                      1.赋值不能超过该位域允许的范围 

*   
*            4.总结：1.位运算直接对内存中二进制为进行操作，不需要转化成十进制数，因此处理速度非常快 
*                    2.位运算经常与其他数据配合使用，主要实现清零，置位，取若干位，翻转等多种操作
*                    3.对数据中的某个或某几个二进制位进行操作，实现数据的拆分和组合 
*/ 

/* exp11-1 编程计算两数与运算的结果 */
/*
#include"stdio.h"
int main()
{
	int a = 9, b = 5,c;
	c = a & b;
	printf("a = %d,b = %d,c = %d",a,b,c);
	return 0;
}
*/
/* exp11-2 两数与运算，保留一个整数数据的低四位，其他位清零 */
/*
#include"stdio.h"
int main()
{
	int x,y;
	x = 12345;
	y = x & 0x0f;
	printf("x = %d,%o,%x\n",x,x,x);
	printf("y = %d,%o,%x\n",y,y,y);
	printf("0x0f: %d, %o, %x",0x0f,0x0f,0x0f);
	return 0;
}
*/

/* exp11-3 或运算 */
/*
#include"stdio.h"
int main()
{
	int a = 9,b = 5,c;
	c = a|b;
	printf("a = %d,b = %d,c = %d",a,b,c);
	return 0;
}
*/
/*exp11-4 或运算 */ 
/* 
#include"stdio.h"
int main()
{
	int x,y;
	x =12345;
	y = x | 0x0f;
	printf("x = %d,%o,%x\n",x,x,x);
	printf("y = %d,%o,%x\n",y,y,y);
	return 0;
}
/*
/* exp11-5 异或运算 */
/*
#include"stdio.h"
int main()
{
	int a = 9;
	a = a ^ 5;
	printf("a = %d",a);
	return 0;
}
*/
/* exp11-6 不使用临时变量实现两个变量的变换 */
/* 
#include"stdio.h"
int main()
{
	int x,y;
	x = 0x78;
	y = 0xab;
	x = x^y;
	y = y^x;
	x = x^y;
	printf("x = %x\n",x);
	printf("y = %x",y);
	return 0;
}
*/
/* exp11-7 对数据进行按位取反 */
/*
#include"stdio.h"
int main()
{
	int x,y;
	x = 12;
	y = -12;
	printf("x = %d,%o,%x\n",x,x,x); 
	printf("~x = %d,%o,%x\n",~x,~x,~x); 
	printf("y = %d,%o,%x\n",y,y,y); 
	printf("~y = %d,%o,%x\n",~y,~y,~y); 
	return 0;
}
*/
/* exp11-8 移位运算  */
/*
#include"stdio.h"
int main()
{
	unsigned a,b;
	printf("Please input a number:  ");
	scanf("%d",&a);
	b = a >> 5;
	b = b & 15;
	printf("a = %d\tb = %d\n",a,b);
	return 0;
}
*/
/* exp11-9 */
/*
#include"stdio.h"
int main()
{
	char a = 'a',b = 'b';
	int p,c,d;
	p = a;
	p = (p<<8) | b;
	d = p & 0xff;
	c = (p & 0xff00)>>8;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
	return 0;
}
*/
/* exp11-10 位域使用示例 */
/* 
#include"stdio.h"
int main()
{
	struct bs
	{
		unsigned a: 1;
		unsigned b: 3;
		unsigned c: 4;
	}bit,*pbit;
	bit.a = 1;
	bit.b = 7;
	bit.c = 15;
	printf("%d,%d,%d\n",bit.a,bit.b,bit.c);
	pbit = &bit;
	pbit->a = 0;
	pbit->b &= 3;
	pbit->c |= 1;
	printf("%d,%d,%d",pbit->a,pbit->b,pbit->c);
	return 0;
}
*/

/* exp11-11 位域使用示例  */
/*
#include"stdio.h"
int main()
{
	struct exam1
	{
		short int a:4;
		short int b:4;
		short int c:2;
	}x;
	x.a = 7;
	x.b = 2;
	x.c = 1;
	printf("%d,%d,%d",x.a,x.b,x.c);
	return 0;
}
*/
/* exp11-12 将十六进制数据以二进制的形式输出 */
/* 
#include"stdio.h"
int main()
{
	short i,num,bit;
	unsigned short mask;
	mask = 0x8000;
	printf("Please input: ");
	scanf("%x",&num);
	for(i=1;i<=16;i++)
	{
		bit = (mask & num)?1:0;                 
		printf("%d",bit);
		if(i%4 == 0)
			printf(" ");
		mask = mask>>1;
	}
	printf("\n");
	return 0;
}
*/
/* exp11-13 翻转一个数据的指定的四位，如倒数5，6，7，8位 */

#include"stdio.h"
int main()
{
	unsigned num1,num2;
	unsigned short mask;
	mask = 0x000000f0;
	printf("Please input : ");
	scanf("%x",&num1);
	num2 = num1^mask;
	printf("num1 = %x\n",num1);
	printf("num2 = %x\n",num2);
	return 0;
}
































 
