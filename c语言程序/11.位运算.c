/*
*  ��ʮһ�£�λ���㣺    1.λ���������
*                        2.λ���㸳ֵ�����
*                        3.λ��
*                        4.�ܽ� 

*            1.λ����������� ��(&)����(|)�����(^)����(~)����λ(<<) (>>) ����
*                           1.�루&��������ĳЩλ������ 
*                           2.��λ���㣺����ʱ����λ��������λ��0������ʱ������λ��ͬ�ƶ���
*                                      ��Ϊ����ʱ�����λ��0����Ϊ����ʱ�����Ϊ��0����1ȡ���ڱ���ϵͳ��
 
*            2.λ���㸳ֵ�����: λ������븳ֵ����������������������������븳ֵ��������һ�� 

*            3.λ��λ�Σ��� 
*                           1.λ��Ķ����λ�������˵��
*                                      1.λ�����Ͼ���һ�ֽṹ���ͣ��������Ա���ǰ������Ʒ����
*                                      2.һ��λ�����洢��ͬһ���ֽ��� 
*                           2.λ���ʹ�� 
*                                      1.��ֵ���ܳ�����λ������ķ�Χ 

*   
*            4.�ܽ᣺1.λ����ֱ�Ӷ��ڴ��ж�����Ϊ���в���������Ҫת����ʮ����������˴����ٶȷǳ��� 
*                    2.λ���㾭���������������ʹ�ã���Ҫʵ�����㣬��λ��ȡ����λ����ת�ȶ��ֲ���
*                    3.�������е�ĳ����ĳ����������λ���в�����ʵ�����ݵĲ�ֺ���� 
*/ 

/* exp11-1 ��̼�������������Ľ�� */
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
/* exp11-2 ���������㣬����һ���������ݵĵ���λ������λ���� */
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

/* exp11-3 ������ */
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
/*exp11-4 ������ */ 
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
/* exp11-5 ������� */
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
/* exp11-6 ��ʹ����ʱ����ʵ�����������ı任 */
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
/* exp11-7 �����ݽ��а�λȡ�� */
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
/* exp11-8 ��λ����  */
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
/* exp11-10 λ��ʹ��ʾ�� */
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

/* exp11-11 λ��ʹ��ʾ��  */
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
/* exp11-12 ��ʮ�����������Զ����Ƶ���ʽ��� */
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
/* exp11-13 ��תһ�����ݵ�ָ������λ���絹��5��6��7��8λ */

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
































 
