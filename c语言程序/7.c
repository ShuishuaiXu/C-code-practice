/*
*   第七章：函数与预处理命令： 1. 函数重要性和三个基本元素
*                              2. 函数的调用
*                              3. 数组作为函数参数
*                              4. 变量的分类
*                              5. 多文件程序
*                              6. 编译预处理
*                              7. 小结

*        1.  函数的重要性：模块化；多次使用，减少源程序长度；易于定位和调试          
*            三个基本元素：定义函数，函数的声明和调用
*                                      声明的三种形式：1有形参 2无形参  3 在主调函数前不用声明 

*        2.  函数的调用： 1.简单调用：4种形式：无参无返回值；无参有返回值；有参无返回值；有参有返回值； void,return 
*                         2.嵌套调用: 其实和主函数的调用没有区别 。调用别人叫嵌套，自己调自己叫递归 
*                         3.递归调用：1.函数对自身直接或间接的调用为递归调用 
*                                     2.递归的两个条件： 1 递归的结束条件：递归要有最简单的结束条件，符合这个条件程序结束递归调用
*                                                        2.递归的规律： 把问题不断转化成简单的相同的问题 ，这种转化要接近递归的结束 
*                                     3.递归效率比较低，中间会产生传递变量，返回值，初始化等，所以能用循环尽量不用递归 

*        3.数组作为函数参数： 1.数组元素作为函数参数，与普通变量相同 ；传递的是值，所以实参和形参用两个不同的内存单元 
*                             2.数组名作为函数参数: 1.整个数组作为函数参数 
*                                                   2.传递的的是首地址，所以形参和实参共用一个内存单元 
*                                                   3.最好在主调函数之前

*        4.变量的分类：   1.按作用域分类：指变量在程序中的有效范围。分为局部变量和全局变量 
*                                                                    1.局部变量为函数体内或者复合句内
*                                                                    2.注意全局变量的两种定义（有没有extern),作用域是从定义的位置开始到程序的结束 
*                         2.按存储类别分类：自动（auto），静态（static),外部（extern），寄存器（register） 
*                                          1.auto，register只能局部（一个在内存，一个在cpu)，static既可以局部也可以全局，extern只能全局
*                                          2.静态分为静态局部变量和静态全局变量。静态全局变量只能作用于定义的文件中，而全局变量可以在其他文件中被引用 
*                                          3.寄存器存储类别一般只能声明整型和字符型变量，多用于循环控制变量，以提高程序运行速度。 
*                                          4.注意静止变量的值，执行过程中保持上一次的值 

*        5.多文件程序： 1.头文件里面放着的是所有外部变量和外部函数的声明。
*                       2.类似于python中的from * import * 

*        6.编译预处理： 1.在编译之前，处理类似#的命令，是一些基本的，共用的的一些命令。主要有1宏定义（define）2文件包含（include）3条件编译
*                       2.宏定义（define）：   1.分类：  1不带参数的宏，2带参数的宏，3嵌套的宏 
*                                              2.所谓的宏就是预先定义一个用来替换的东西
*                                              3.注意带参数的宏与函数的区别 ,注意带参数的宏替换后的优先级问题 ,尽量加上括号 
*                                              4.嵌套的宏指的是宏定义中引用已定义的宏 
*                       3.文件包含：1.双引号现在当前源文件目录查找，找不到才会去系统提供的目录找；而尖括号直接去系统提供的目录找 
*                                   2.文件包含用来把多个源文件连接成一个源文件来进行编译，生成一个目标文件 
*                       5. 注意#后面没有分号，因为编译预处理不是程序中的语句 
 
*        小结：1.函数就是去完成一个特定的功能的模块，这个功能不一定是指计算，还可以是输出图形呀等等，都可以。思想不要被局限


*        注意：1.引用的函数和全局变量最好写在最前面 
*              2.全局变量可加强函数模块之间的数据联系，但同时会降低函数的独立性，从模块化的程序设计观点来看是不利的，因此尽量少用全局变量 
*              3.

*/
/* exp7-1-1 输入两个整数，计算它们的和，差 */
/*
#include"stdio.h"
int main()
{
	int x,y;
	int sum,dif;
	printf("Please input two numbers: ");
	scanf("%d%d",&x,&y);
	sum = x + y;
	dif = x - y;
	printf("sum = %d,dif = %d",sum,dif);
	printf("\n");
	return 0;
 } 
*/
/* exp7-1-2 用函数解决此问题 */
/* 
#include"stdio.h"
int main()                              //main函数只是搭了一个框架，具体细节交给其他函数块执行 
{
	int x,y;
	int sum,dif;
	int fsum(int,int);                  //声明函数 
	int fdif(int,int);
	printf("Please input two integers: ");
	scanf("%d%d",&x,&y);
	
	sum = fsum(x,y);                    //调用函数 
	dif = fdif(x,y);
	
	printf("sum = %d,dif = %d",sum,dif);           
	return 0;
}

int fsum(int a,int b)                   //定义函数 
{
	int t;
	t = a + b;
	return(t);
}
int fdif(int a,int b)
{
	int t;
	t = a - b;
	return(t); 
}
*/
 
/* exp7-2-1 求组和数m!/(n! * (m-n)!) 的值 */
/*
#include"stdio.h"
int main()
{
	int m,n,i,cnm;
	int facm,facn,facnm;
	facm = facn = facnm = 1;
	printf("Please input m and n : ");
	scanf("%d%d",&m,&n);
	
	for(i=1;i<=m;i++)
		facm = facm * i;
	for(i=1;i<=n;i++)
		facn = facn * i;
	for(i=1;i<=(m-n);i++)
		facnm = facnm * i;
	cnm = facm/(facn*facnm);
	
	printf("\n组合数的值为： %d",cnm);
	return 0;
 } 
*/
/* exp7-2-2 用函数求组和数 */
/*
#include"stdio.h"
int main()
{
	int m,n;
	int facm,facn,facmn;
	int cmn;
	int factorial(int);
	printf("Please input m and n: ");
	scanf("%d%d",&m,&n);
	
	facm = factorial(m);               //这里一定要注意整型的溢出，整型特别容易溢出 
	facn = factorial(n);
	facmn = factorial(m-n);
	cmn = facm/(facn*facmn);
	
	printf("facm = %d\n",facm);        //比如这里m=18,结果就溢出了  
	printf("组合数为：%d",cmn);
	return 0;	
 } 
int factorial(int num)
{
	int i,factorial=1;
	for(i=1;i<=num;i++)
		factorial = factorial * i;
	return (factorial);
}
*/
/* exp7-3-1 输出由大写字母H组成的4*20方阵 */
/*
#include"stdio.h"
int main()
{
	printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHH\n");
	printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHH\n");
	printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHH\n");
	printf("HHHHHHHHHHHHHHHHHHHHHHHHHHHH\n");
	return 0;
}
*/
/* exp7-3-2 用函数表达 没有参数没有返回值*/
/*
#include"stdio.h"
int main()
{
	void graph();
	int i;
	for(i=1;i<=4;i++)
		graph();
	return;
 } 
void graph()
{
	printf("HHHHHHHHHHHHHHHHHHHHHHHHHHH\n"); 	
} 
*/
/* exp7-3-3 有参数没有返回值 */
/* 
#include"stdio.h"
int main()
{
	int line=4,i;
	char c;
	void graph(char);                      //函数一定要先声明 
	printf("please input a character: ");
	scanf("%c",&c);
	for(i=1;i<=line;i++)
		graph(c);
	return 0;
 } 
 void graph(char c)
 {
 	int i;
 	int num = 20;
 	for(i=1;i<=num;i++)
 		printf("%c",c);
 	printf("\n");
 }
*/
/* exp7-4 求fibonacci数列的前n项和 */
/* 
#include"stdio.h"
int main ()
{
	void fibonacci(int);
	int n,sum;
	printf("Please input a number : ");
	scanf("%d",&n);
	
	fibonacci(n);
	
	return 0;
 } 
void fibonacci(int n)
{
	int f1,f2,t,i;
	f1=1;f2=1;
	printf("\n%-10d%-10d",f1,f2);      //循环之前先输出前两项 
	for(i=3;i<=n;i++)
	{
		t = f1 + f2;
		f1 = f2;
		f2 = t;
		printf("%-10d",t);
		if(i%4==0)
			printf("\n");
	}
}
*/

/* exp7-5 编写输入函数，输入一个字符 */
/*
#include"stdio.h"
int main()
{
	char in();
	char m;
	m = in();                              //无参有返回值 
	printf("m = %c\n",m);
	return 0;
 } 
char in()
{
	char n;
	printf("Please input a character: \n");
	scanf("%c",&n);
	return (n);
 } 
*/
/* exp7-6 输入两个数，输出最大的数  */
/*
#include"stdio.h"
int main()
{
	int a,b,m;
	int max(int,int);
	printf("Please input two numbers: ");
	scanf("%d%d",&a,&b);
	m = max(a,b);
	printf("The max = %d\n",m);
	return 0;
}
int max(int x,int y)
{
	int t;
	t = x>y ? x : y;
	return(t);
}
*/
/* exp7-7 统计区间[a,b]的素数个数   函数的嵌套调用*/
/* 
#include"stdio.h"
#include"math.h"
int main()
{
	int a,b,num;
	int primecount(int,int);
	printf("Please input the range[a,b]\n");
	scanf("%d%d",&a,&b);
	num = primecount(a,b);
	printf("The number of prime is %d\n",num);
	return 0;
 } 
int primecount(int m,int n)           // 定义素数计数函数 
{
	int i,k = 0;
	int prime(int);                     //声明判断素数函数 
	for(i=m;i<=n;i++)
	{
		if(prime(i) == 1)              //调用判断素数函数 
				k = k + 1;
	}
	return k;                            //注意函数返回值！！！！！！！！！！！ 
}
int prime(int x)                       //定义判断素数函数 
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
			return 0;                //这个点用的很好 
	}
	return 1;
 } 
*/
/*  exp7-8 计算s = a的平方的阶乘 + b的平方的阶乘 */
/*
#include"stdio.h"
int main()
{
	int i,s=0,num;
	int a,b;
	int squ(int);
	printf("Please input two numbers: ");
	scanf("%d%d",&a,&b);
	s = squ(a) + squ(b);
	printf("s = %d",s);
	return 0;
 } 
int squ(int x)
{
	int i,t,k;
	int fac(int);
	k = x*x;
	t = fac(k);
	return t;
}
int fac(int y)
{
	int i,s=1;
	for(i=1;i<=y;i++)
		s = s*i;
	return s;	
}
*/
/*exp7-9 用递归法计算n! */
/* 
#include"stdio.h"
int main()
{
	int n,s;
	int fac(int);
	printf("Please input a number: ");
	scanf("%d",&n);
	s = fac(n);
	if(s<0)
		printf("n<0,input error\n");
	else 
		printf("%d! = %d",n,s);
	return 0;
} 
int fac(int n)
{	
	int f;
	if(n<0)                         //处理无效数据 
		f = -1;
	else
	{
		if(n==0||n==1)              //处理特殊数据 
			f=1;
		else
		f = fac(n-1)*n;            //直接递归调用   
	}
	return f; 
 } 
*/
/* exp7-10 汉诺塔问题，输出下图所示的三角形 */
/* 
#include"stdio.h"
int main()
{
	int i,j;
	int c(int,int);
	int n;
	printf("Please input n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");
		for(j=1;j<=i;j++)
			printf("%4d",c(i,j));
		printf("\n");
	}
	return 0;
 } 
int c(int x,int y)
{
	int z;
	if(y==1||y==x)
		return 1;
	else
	{
		z = c(x-1,y-1) + c(x-1,y);
		return z;
	}
}
*/
/*exp7-11 判断一个整型数组中指定元素的值，若大于0则输出1，若小于等于0，则输出0 */
/*
#include"stdio.h"
int main()
{
	int a[5];
	int i,k,result;
	int judge(int);
	printf("Please input five numbers: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	} 
	printf("Please input the position: \n");
	scanf("%d",&k);
	result = judge(a[k]);
	printf("result = %d",result);
 } 
int judge(int x)
{
	if(x>0)
		return 1;
	else
		return 0;
 }
*/
/* exp7-12 在十个数的数组中，取最大值得元素与第一个交换，取最小值的元素与最后一个交换 */
/* 
#include"stdio.h"

void inpu(int a[])
{
	int i;
	printf("Please input 10 numbers: \n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]); 
}
void max_min(int array[])
{
	int max,min,i,t;
	max = min = 0;
	for(i=0;i<10;i++)
	{
		if(array[max]<array[i])
			max = i;
		if(array[min]>array[i])
			min = i;		
	}
	t = array[0];array[0] = array[max]; array[max] = t;
	t = array[9];array[9] = array[min]; array[min] = t;
 } 
void outpu(int array[])
{
	int i;
	printf("\nafter exchange: ");
	for(i=0;i<10;i++)
		printf("%d  ",array[i]);
}


int main()
{
	int number[10];
	inpu(number);                         //只写数组名，表示带入的整个数组
	max_min(number);
	outpu(number);	
} 
*/
/* exp7-13 局部变量举例  */
/*
#include"stdio.h"
void fun(int a,int b)
{
	int m,n;
	m = a*b;
	n = a/b;
	printf("fm = %d,fn = %d",m,n);
}

int main()
{
	int m,n;
	m = 8;
	n = 4;
	fun(8,4);
	printf("\nm = %d,n = %d",m,n);
	return 0;
 } 
*/
/* exp7-14 在复合语句中声明变量 */
/* 
#include"stdio.h"
int main()
{
	int k=8;
	{
		int k = 1;                     //注意此处的局部变量k的作用域为符合语句内 
		printf("k = %d",k);
	}
	printf("\nk = %d",k);
	return 0;
 } 
*/
/*exp7-15 全局变量的应用：输入长方体的长宽高，求它的体积和三个面的面积 */
/* 
#include"stdio.h"
float s1,s2,s3;                                             //全局变量要提前定义 
int main()
{
	float v,length,wide,height;
	float vs(float,float,float);
	printf("Please input length,width,height: ");
	scanf("%f,%f,%f",&length,&wide,&height);
	v = vs(length,wide,height);
	printf("\nv=%f,s1=%f,s2=%f,s3=%f\n",v,s1,s2,s3);        
	return 0;
 } 

float vs(float a,float b,float c)
{
	float v;
	v = a*b*c;
	s1 = a*b;
	s2 = a*c;
	s3 = b*c;
	return v;
}
*/
/*exp7-16 全局变量与局部变量同名    则在局部变量的作用域内，同名的全局变量不起作用 */
/*
#include"stdio.h"
int a=3,b=5;
int main()
{
	int max(int a,int b);
	int a =19;                      //a此时为局部变量，有效范围为main函数
	printf("max = %d\n",max(a,b));
	printf("b = %d; main:a = %d",b,a);
	return 0; 
 } 
int max(int a, int b)
{
	int c;
	if(a>b)
		c = a;
	else
		c = b;
	printf("b = %d, max: a = %d\n",b,a);
	return c;
}
*/
/*exp7-17 静态局部变量和自动变量的比较  */
/* 
#include"stdio.h"
int main()
{
	int x = 20,i;
	for(i=0;i<3;i++)
	{
		printf("i=%d,sum=%d\n",i,f(x));
	}
	return 0;
} 
int f(int a)
{
	auto int b = 0;
	static int c = 0;                        //注意静态局部变量的值，每次循环不会重新赋值，而是保持上一次执行的值 
	b = b + 1;
	c = c + 1;
	printf("f:a=%d,b=%d,c=%d\n",a,b,c);
	return(a+b+c); 
}
*/
/* exp7-18 计算正整数n的所有因子（1和n除外）之和 */
/*
#include"stdio.h"
void main()
{
	int x;
	int fun(int);
	printf("Please input a number: ");
	scanf("%d",&x);
	printf("The sum is %d\n",fun(x));
 } 

int fun(int n)
{
	register int i,s = 0;           // 寄存器变量   
	for(i=2;i<n;i++)
	{
		if(n%i == 0 )
			s = s + i;
	 } 
	return s;
}
*/
/*exp7-19 用extern声明外部变量，扩展程序文件中的作用域 */
/* 
#include"stdio.h"
int main()
{
	extern int a,b;                         //外部存储变量在下面定义，所以这里要用必须先要声明 
	int max(int, int);
	printf("max = %d\n",max(a,b));
	
	printf("max = %d\n",max(a,b));         //注意：这里extern变量a的值不会变，但如果是static变量就会有变化！！！！！！！！！！ 
	return 0; 
 } 
int a = 3,b = 5;
int max(int a, int b)
{
	int c;
	if(a>b)
		c = a;
	else
		c = b;
	a += 1;
	printf("max:a = %d,b = %d\n",a,b);
	return c; 
}
*/
/* exp7-21 计算圆的周长，面积，球的体积   用不带参数的宏定义常量 */
/*
#include"stdio.h"
#define PI 3.14             //不加分号，以为不是语句  
int main()
{
	float r,c,s,v;
	printf("Please input a radius: ");
	scanf("%f",&r);
	c = 2 * PI * r;
	s = PI * r * r;
	v = PI * r * r * r * 4 /3.0;
	printf("PI = %f\nc = %f\ns = %f\nv = %f\n",PI,c,s,v);
	return 0;
 } 
*/
/* exp7-22 计算长方形的面积 用表达式做宏定义*/
/* 
#include"stdio.h"
#define LENGTH (9.45-2.6)
#define HIGH (6.9+7.4)
int main()
{
	float s;
	s = LENGTH * HIGH;         // 注意这个表达式，如果没有括号的话会按照优先级先做乘法 
	printf("area = %f\n",s);       
	return 0;
 } 
*/
/* exp7-23 宏定义中的字符串部分为格式串，可以减少书写麻烦 */
/*
#include"stdio.h"
#define P printf
#define F "%7.1f\n"
int main()
{
	float f1 = 3.813,f2 = 9.7,f3 = 21.08;
	P(F,f1);
	P(F,f2);
	P(F,f3);
	return 0;
	
} 
*/
/*exp7-24 输出两个数中的较大者   带参数的宏定义 */
/* 
#include"stdio.h"
#define MAX(a,b) (a>b)?a:b        //带参数的宏定义 ,注意宏名和形参表之间不能有空格 
int main()
{
	int num1,num2,max;
	printf("Please input two numbers: ");
	scanf("%d%d",&num1,&num2);      // 注意不要漏掉地址符 ！！！！！ 
	max = MAX(num1,num2);                  // 宏的调用 
	printf("max = %d\n",max);
	return 0; 
 } 
*/
/* exp7-25  */
/* 
#include"stdio.h"
#define SQ(y) (y) * (y)           //这里如果没有括号，下面计算的事 a + 1 * a + 1!!!!!!!!!!! 
int main()
{
	float a,s;
	printf("Please input length:\n");
	scanf("%f",&a);
	s = SQ(a+1);
	printf("area = %f",s);
	return 0;
 } 
*/
/* exp7-26 不带参数的嵌套的宏 */
/*
#include"stdio.h"
#define R 3.0
#define PI 3.14159
#define S PI * R *R
int main()
{
	printf("S = %f",S);
 } 
*/
/*  exp7-27 带参数嵌套的宏，计算a+1的立方 */
/*
#include"stdio.h"
#define SQ(y) ((y) * (y))
#define CUBE(x) (SQ(x) * (x))          //注意加括号，否则会按优先级计算结果可能有错 
int main()
{
	float a,v;
	printf("Please input a number:");
	scanf("%f",&a);
	v = CUBE(a+1);
	printf("v=%f",v);
	return 0;
 } 
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 







