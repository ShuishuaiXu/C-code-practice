/* 

//注意：输入输出函数都有规定，但有时违反规定也能运行出来结果，不会有编译错误，所以要对结果进行分析。！！！！！！ 
// 大的原则：基本上所有的东西都是已经定义好的，你能想到的问题基本上都已经有解决办法了，所以最重要的是找答案，学习 

// 1.输入和输出函数的形式和进一步介绍特别注意scanf,printf（注f是format,printf函数字符型和整型式互通的而scanf不通用，
//   注意printf的输出格式和scanf的输入格式 和注意的问题 ）.  
//        scanf函数要注意的几个问题： 1 输入时要有printf函数输出的输入提示
//                                    2 不要忘掉地址符 & 
//                                    3 %d或%f输入时尽量少用逗号，空格和其他字符，就是单纯的输入一个数据
//                                    4 %c 输入时只能输入一个字符，并且空格和转移字符是作为有效字符输入的 
//                                    5 如果输入数据建议用scanf，单个字符用getchar(),字符串用gets() 
//   putchar(参数),getchar(),puts,gets,scanf,printf 

// 2.程序设计的一般步骤：1 变量说明  即已知哪些数据，需要定义那些变量，类型是什么。 
//                       2 变量赋值  确定变量值的方法有初始化，键盘录入，还是通过计算得到。
//                       3 加工数据  即先计算什么，后计算什么，有没有固定算法。
//                       4 输出结果  确定显示信息 


// exp3-1 输出单个字符  带引号的直接是字符，不带引号的是变量 
#include"stdio.h"
int main()
{
	char a = 'B', b = 'o', c = 'k', ch;
	putchar(a);
	putchar(b + 1);
	putchar('\t');
	putchar(b);
	putchar(c);
	ch = putchar(a);
	putchar('\n');
	putchar(ch);
	putchar('\n');
	return 0;
 } 

 //  exp3-2 使用getchar()从键盘输入的内容中输入单个字符 
 # include"stdio.h"
 int main()
 {
 	char c;
 	printf("please input a character:\n");
 	c = getchar();
 	putchar(c);
 	putchar('\n');                       // 换行 
 	putchar(getchar());                 // 注意！！！！ 
 	putchar('\n');
	printf("%c",getchar());             //注意！！！！ 
 	return 0;
} 

// exp3-3 有符号的十进制数的输出形式 printf语句的输出格式
#include"stdio.h"
int main()
{
	int a = 98;
	printf("a=%d,%o,%x,%u,%c\n",a,a,a,a,a);
	return 0;
 } 

// exp3-4 有符号书输出为无符号数
#include"stdio.h"
int main()
{
	int b = -2;
	printf("b=%d,%o,%x,%u\n",b,b,b,b);
	return 0 ;
 } 

// exp3-5 字符数据的输出
# include"stdio.h"
int main()
{
	char a,b;
	a = 120;
	b = 121;
	printf("%c,%c\n",a,b);
	printf("%d,%d\n",a,b);
	printf("%c,%c\n",a-32,b-32);   // 注意这是字母大小写转换的方法 ！！！！！！！！！！ 
	return 0;                      // 还是一种加密方法，一个字符变量加以整数，得到其他字符！！！！ 
 } 

//exp3-6 
#include"stdio.h"   输出字符的ASCII 
int main()
{
	int a = 3, b = 4;
	char c = 'A';
	printf("a=%2d,b=%2d\n",a,b);
	printf("Letter %c and ASCII: %d",c,c);
	return 0;
} 

// exp3-7 附加符的混合使用        !!!!!!!!!!!
#include"stdio.h"
int main()
{
	int a = 15;
	float b = 123.1234567;
	double c = 12345678.1234567;
	char d = 'p';
	printf("a=%d,%5d,%o,%x\n",a,a,a,a);      //对于进制的转换直接在输出格式中调一下就可以！！！！！！！！！！ 
	printf("b=%f,%lf,%5.4lf,%e\n",b,b,b,b);
	printf("c=%lf,%f,%8.4lf\n",c,c,c);
	printf("d=%c,%8c\n",d,d);
	return 0;
 } 

// exp3-  使用scanf函数要注意的几个问题
#include"stdio.h"
int main()
{
	int a,b;
	char c,d;
	scanf("%d%d",&a,&b);
	scanf("%d,%d",&a,&b);
	//scanf("a=%d",&a);
	scanf("%d\n%d",&a,&b);
	
	scanf("%c%c",&c,&d);     // 使用%c输入  一个（注意）  字符时，空格和转移字符都作为有效字符输入 
	printf("%c %c",c,d);
 } 

// exp3-9  求两个数相除的整数
#include"stdio.h"
int main()
{
	int b;
	float a;
	printf("please input two numbers:\n");         // 注意两个整数相除所得还是整数，若有一个是实型，结果才是实型 
	scanf("%f%d",&a,&b);
	printf("a=%f,b=%d,a/b=%f",a,b,a/b);
	return 0;
 } 

// exp3-10 八，十，十六进制的转换
#include"stdio.h"
int main()
{
	int a,b,c;
	printf("please input three integers:\n");
	scanf("%d%o%x",&a,&b,&c);           // 输入 123 123 123 
	printf("%d %d %d",a,b,c);          //输出函数可以直接计算过程，比如进制转换，大小写转换，加密 
	return 0 ;
 } 
 

//exp3-11 常用类型说明符的长度测定             sizeof()函数妙用!!!!!!!!!
#include"stdio.h"
#include"math.h"
int main()
{
	int a;
	long b;
	float c;
	double d;
	char e;
	printf("\nint: %d \nlong: %d \nfloat: %d \ndouble: %d \nchar: %d",
	             sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
	return 0;
	
} 

// exp3-12  任意输入一个三位数整数，输出个位，十位，和百位的数字
#include"stdio.h"
int main()
{
	int num;
	printf("please input a three-digit integer number: \n");
	scanf("%d",&num);
	printf("%d %d %d",num/100,num/10%10,num%10);    // num/10%10，num%10 用的特别好 
	return 0;                                       // 多位数使用选择和循环结构 
 } 
*/ 

//exp3-14-1  printf函数的求值顺序                表达式前后关联的输出要分开输出，不要写一起！！！！！ 
#include"stdio.h"
int main()
{
	int i = 8,k = 8;
	printf("%d,",++i);
	printf("%d,",--i);
	printf("%d,",i++);
	printf("%d,",i--);
	printf("%d,",-i++);
	printf("%d\n",-i--);
	printf("%d,%d,%d,%d,%d,%d",++k,--k,k++,k--,-k++,-k--);
	return 0;
 } 













 
 
 
 
 
