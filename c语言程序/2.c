/* 
// 数据类型，运算符，表达式:

// 1.数据类型有常量和变量两种类型 命名规则，整型，实型，字符型，字符串型 

// 2.运算符   算数运算符注意事项：1 两个整数相除，结果取商的整数部分 比如5/4=1 
//                                2 求余和模运算要求参与对象为整型和字符型，运算结果的符号与被除数相同 
//                                3  + - * / 运算中，只要有一个运算对象是实型数据，结果也为实型数据， 
//            以及赋值运算符，关系，逻辑，条件，指针，下标运算符等等，其他也很重要 
// exp2-1 求圆的面积和球的体积
# include"stdio.h"
# define PI 3.14159  // 没有等号 
int main()
{
	float r, area, volume;
	r = 2.5;
	area = PI * r * r;
	volume = 4.0/3 * PI * r * r * r;
	printf("area = %f, volume = %f\n", area, volume);
	return 0;
}

// exp2-2 转义字符控制格式
# include "stdio.h"
int main()
{
	printf(" ab c\tde\t\"\\f\tg\n");
	printf("book\tR\bS\n");       // 注意\b是退格，会把上一个的信息消除掉 
	return 0;
 } 
 
// exp2-3 整型变量的定义与使用
# include"stdio.h"
int main()
{
	int x, y, z, m;
	unsigned u;
	x = 12;
	y = -24;
	u = 10;
	z = x + y;
	m = y * u;
	printf("x + u = %d, y * u = %d\n",z ,m );
	return 0;
 } 
 
 // exp2-4 整型数据的溢出 
# include "stdio.h"
int main()
{
	int x, y;
	x = 2147483647;
	y = x + 1;
	printf("y = %d",y);
	return 0;
	
 } 

// exp2-5 实型变量的定义与使用
# include"stdio.h"
int main()
{	float x;     // float 是单精度，有七位有效数字 
	double y,z,m;
	x = 12.35;
	y = -24.2;
	z = x + y;
	m = x * y;
	printf("x + y = %f, x * y = %f\n",z,m);
	return 0;   
	 
 } 
 
 // exp2-6 实型数据的精度
 # include"stdio.h"
 int main()
 {	
 	float x;
 	double y;
 	x = 123456789.123;
 	y = 123456789123456789.123;
 	printf("x = %f,y = %f",x,y);  //前面几位精确，后面几位就丢失了，或随机产生 
 	return 0;
  } 
 
// exp2-7 实型数据的舍入误差（x,y定义为单精度型变量)
# include"stdio.h"
int main()
{
	float x,y;
	x = 123456789.123e3;
	y = x + 10;
	printf("y = %f\n",y);   //输出前七位是精确的，后面就变成随机产生的 
	return 0;
 } 

// exp2-8 实型数据的舍入误差（x,y定义为双精度型变量）
# include"stdio.h"
int main()
{
	double x, y;
	x = 123456789.123e3;
	y = x + 10;
	printf("y = %f",y);
	return 0;
 } 

 // exp2-9 字符变量的定义与使用
 # include"stdio.h"
 int main()
 {
 	char x, y, z;
 	x = 'b';
 	y = 'o';
 	z = 'y';
 	printf("%c%c%c",x,y,z);
 	return 0;
  } 
 
 // exp2-10 字符数据和整型数据的通用性   可以显示字符的ASCII码 
 #include"stdio.h"
 int main()
 {
 	char x;
 	int y;
 	x = 98;
 	y = 'd';
 	printf("%c, %c\n",x,y);
 	printf("%d, %d\n",x,y);
 	return 0;
  } 

 // exp2-11 字母的大小写转换
 #include"stdio.h"
 int main()
 {
 	char c1,c2;
 	c1 = 'A';
 	c2 = c1 + 1;
 	printf("%c,  %c\n", c1, c2);
 	c1 = c1 + 32;
 	c2 = c2 + 32;
 	printf("%c,  %c", c1, c2);
	return 0 ; 
  } 

//  exp2-11-1  注意除法的结果显示，整除还是有小数 
# include"stdio.h"
int main()
{
	float x, y;
	x = 2.3/1.2;
	y = 3/2;
	printf("%f  %f",x,y);
	return 0;
 } 

// exp2-12 自增自减的操作(注意i的值） -i++ 等价与-(i++) 
# include"stdio.h"
int main()
{
	int i, j, k;
	i = 3;
	j = i++;
	k = ++i;
	printf("i = %d, j = %d, k = %d\n", i,j,k);
	return 0;
 } 

//exp2-13   逗号表达式的应用举例 
#include"stdio.h"
int main()
{
	int m, n, k, x, y;
	m = 3;
	n = 2;
	k = 6;
	x = ((y = m -n), (m * k));    //表达式 2 的值作为整个逗号表达式的值 
	printf("y = %d, x = %d\n",y,x);
	return 0; 
}

// exp2-14   表达式中不同类型数据之间的转换 
#include"stdio.h"
int main()
{
	int x = 3;
	float y = 2.5;
	double z = 2.9, m;
	long n = 6;
	m = x + '*' - x/y + z * n;      //  *的ASCII码为46 
	printf("m = %f\n",m);
	return 0;
 } 

//exp 2-15   赋值表达式中的数据类型的转换  注意 是以左为准
# include"stdio.h"
int main()
{
	int x;
	float y;
	x = 9.5;
	y = 6;
	printf("x = %d, y = %f\n",x,y);
	return 0;
 } 
*/
//exp 2-17   数据类型的强制转换
# include"stdio.h"
int main()
{
	int x, y = 3;
	float z = 17.8;
	x = (int)(z+3.4) % y;
	printf("x = %d\n",x);
	return 0;
 } 

