/*

//          框架，细节，注意事项

 
//     第五章：循环结构 ：   1.三种循环结构 while,do-while,for
//                           2.break和continue语句
//                           3.循环嵌套
//                           4.综合程序设计 穷举法，递推法（Fibonacci数列），迭代法（累加累乘）


//             1.三种循环结构的区别：1.for用来计数循环，while,do-while用来条件循环 
//                                   2.for 最常用 
//                                   3.while先判断在执行，而do-while是先执行一次，再判断 

//             2.break语句与continue语句： 1.break语句是提前结束循环，而continue语句是结束本次循环，继续开始下一轮循环 
//                                         2.break语句只能用在三种循环语句中或switch语句中 ，一般break语句与if语句一块使用 


//             3.循环嵌套：   1.常见形式3*3=9
//                            2.外层执行一次，内层执行一个完整的过程 
//                            3.循环体只能包含，不能交叉
//                            4.并列循环可以用同一个变量，而嵌套不行 

//             4.         穷举法不是每次加1的穷举，而且也不是全部都要穷举（范围可选） 

     
//             注意事项： 1.一定要注意变量的初始值，特别是在循环结构中 
//                        2.注意for语句的省略，和里面的逗号表达式 



#include"stdio.h"
int main()
{
	printf("Hello, world!");
	return 0;
}

//exp5-1 分析下面句子，输出循环控制变量i的值
#include"stdio.h"
int main()
{
	int i;
	i = 1;
	while(i<=10)                                         //注意这里没有分号，do-while那里有分号！！！！！！！ 
	{
		printf("i=%d, ",i);                              //注意输入法是英文还是中文 
		i++;
	}
	return 0;
} 

//exp5-2   求s = 1+2+3+...+100 的值（用while实现）
#include"stdio.h"
int main()
{
	int i = 1, s = 0;
	while(i<=100)
	{
		s = s + i;
		i++;
	}
	printf("s = %d",s);
	return 0 ;
 } 

//exp5-3 从键盘中输入若干正整数，求这些数的和及平均数
#include"stdio.h"                                        //首先分析需要定义几个变量：总和，均值，输入的个数，输入的值 
int main()                                               // 此题实际更适合用do-while语句，因为需要先执行一次，再判断 
{                                                        // 一定要注意 定义变量的初始值 
	int i=0 , x;
	float sum = 0, ave;
	printf("Please input number: ");
	scanf("%d",&x);
	while(x!=0)
	{
		sum = sum + x;
		i++;
		scanf("%d",&x); 
	}
	printf("sum = %f, ave = %f", sum, sum/i);
	return 0; 
 } 

//exp5-4  求s=1+2+3+...+100的值（用do-while语句实现）
#include"stdio.h"
int main()
{
	int i = 0,s = 0;
	do
	{
		i++;
		s = s + i;
	}while(i<100);                                   // 注意do-while语句中这里有分号！！！！！！ 
	printf("i = %d,s = %d",i,s);
	return 0;
 } 

//exp5-5-1    while和do-while语句循环的比较
#include"stdio.h"
int main()
{
	int i = 6;
	while(i<=5)
		i = i + 2;                    //单个语句可以不加{}，但是尽量不管是单个语句还是语句族都加上，这样程序易读 
	printf("i = %d",i);
	return 0;
 } 
//exp5-5-2 
#include<stdio.h>
int main()
{
	int i = 6;
	do
	{
		i = i + 2;
	}while(i<=5);
	printf("i = %d",i);
	return 0;
 } 

// exp5-6 求s=1+2+...+100的值（用for循环）
#include"stdio.h"
int main()
{
	int i;
	float s;
	s = 0.0;
	for(i=1;i<=100;i++)
	{
		s = s+i;
	}
	printf("i = %d,s = %f",i,s);                        //注意变量的输出格式 
	return 0;
 } 

//exp5-7 输入是个数，求其中偶数的和
#include<stdio.h>
int main()
{
	int i,k;
	long int sum = 0;
	printf("Please input the number: ");
	
	for(k=1;k<=3;k++)
	{
		scanf("%d",&i);
		if(i%2 == 0)
			sum = sum + i;
	}
	
	printf("sum = %ld",sum);
	return 0;
 } 

//exp5-8 输入一串字符，分别统计大写字母，小写字母数字，和其它字符的个数
#include"stdio.h"
int main()
{
	int i,j,k,m;
	char c;
	i = j = k = m = 0;
	printf("Please input a string of characters: ");
	while((c=getchar()) != '\n')                     // 此判断条件很好 
	{                                                // 注意单个字母一定要用单引号！！！！！！！
		if(c>='A' && c<='Z')
			i++;
		else if(c>='a' && c<='z')
			j++;
		else if(c>='0' && c<='9')
			k++;
		else 
		 	m++;
	}
	printf("大写字母有%d个\n",i);
	printf("小写字母有%d个\n",j);
	printf("数字有%d个\n",k);
	printf("其他字符有%d个\n",m);
	return 0; 
 } 

//exp5-9     遇到第一个能被三整除的就跳出循环 
#include"stdio.h"
int main()
{
	int i;
	for(i = 1;i<=20;i++)
	{
		if(i%3 == 0)
			break;
		printf("i = %d\n",i);
	}
	return 0;
 } 

//exp5-10 输入1-7之间不能被3整除的整数
#include"stdio.h"
int main()
{
	int i;
	for(i=1; i<=7; i++)
	{
		if(i%3 == 0)
			continue;
		printf("%5d",i);
	}
	return 0;
 } 

//exp5-11 
#include"stdio.h"
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
 } 

//exp5-12 打印九九乘法表
#include"stdio.h"
int main()
{
	int i,j;
	for(i=1; i<=9; i++)
	{
		for(j=1; j<=i; j++)
			printf("%d*%d=%2d  ",i,j,i*j);               //%2d用的好，输出容易对齐 
		printf("\n");
	}
	return 0;
 } 

//exp5-13 输出一个整数，判断它是否为素数
#include"stdio.h"
#include"math.h"
int main()
{
	int i,m,n;
	printf("Please input an integer: ");
	scanf("%d",&m);
	n = (int)sqrt(m);                          //这里注意n要单独算，否则在for循环里面每一次循环都要计算一次                          
	for(i=2; i<=n; i++)
	{
		if(m%i == 0)
			{
				break;
			}
	}
	if(i>n)                                   //这里比较i>n想法很好！！！！！！！！！！ 
		printf("This is a prime number.");
	else
		printf("This is not a prime number.");
	return 0;
 } 

//exp5-14 求100-200之间素数的个数，并统计素数的个数
#include"stdio.h"
#include"math.h"
int main()
{
	int i,j,k=0,n;
	for(i=101;i<=200;i=i+2)               // 偶数一定不是，所以可以这样写提高效率！！！！！！！！！ 
	{
		n = (int)sqrt(i);
		for(j = 2;j<=n;j++)
		{
			if(i%j == 0)
				break;		
		}
		if(j>n)
		{
			printf("%5d",i);
			k++;
		}	
	}
	printf("\n素数个数共%d",k);
	return 0;
 } 
 
//exp5-14-2  设置标志变量，代替break正常退出 
#include"stdio.h"
#include"math.h"
int main()
{
	int i,j,k=0,n,flag;
	for(i=101;i<=200;i=i+2)               // 偶数一定不是，所以可以这样写提高效率！！！！！！！！！ 
	{
		n = (int)sqrt(i);
		flag = 0;
		j = 2;
		while(j<=n && !flag)              // for与while的区别就是for是计数循环，while是判断循环 
		{
			if(i%j == 0)
				flag = 1;                 //标志变量flag这个技巧非常好！！！！！ 
			j++;
		}
		if(flag == 0)
		{
			printf("%5d",i);
			k++;
		}	
	}
	printf("\n素数个数共%d",k);
	return 0;
 } 

//exp5-5 百钱买百猪的问题
#include"stdio.h"
int main()
{
	int x,y,z;
	for(x=0;x<=20;x++)
	{
			for(z=0;z<=99;z=z+3)
			{
				y = 100 - x - z;                         //不一定用三个循环 
				if(5*x+3*y+z/3 == 100 && y>=0)           // 注意y大于0 
					printf("鸡翁：%2d,鸡母：%2d,雏鸡：%2d \n",x,y,z);
			}
	}
	return 0;
 } 

//exp5-16 求fibonacci数列的前40项数 
#include<stdio.h>
int main()
{
	long int f1=1,f2=1;                      //注意是long int ,因为这两个数很大 
	int i;
	for(i=1;i<=20;i=i+1)                      //输出40个数，但是每次输出两个，所以可以用i<=20  
	{
		printf("%-10d%-10d",f1,f2);           //可以左对齐 ，每次输出两个提高了效率 
		if(i%2 == 0) printf("\n");           //注意换行，要不显示的结果会很乱 
		f1 = f1 + f2;
		f2 = f2 + f1;
	}
	return 0;
 } 

//exp5-17 猴子吃桃子
#include"stdio.h"
int main()
{
	int y=1,i;
	for(i=1;i<=9;i++)
	{
		y = 2*y + 2;                            // 好像是迭代法 
	}
	printf("第一天共摘了：%d",y);
	return 0;
 } 
 
//exp5-18 求累乘积的和(s=1!+2!+...+n!)                 // 此题记住   
#include"stdio.h"
int main()
{
	int i,n;
	float s = 0.0,t = 1.0;                  //注意定义的值的类型要与输入输出的类型相同！！！！！！ 
	printf("n = ");                         
	scanf("%d",&n);                      
	 
	for(i=1;i<=n;i++)
	{
		t = t * i;                        // 注意不是两个循环，一个就可以，要迭代 ，而且是两个迭代 
		s = s + t;                        // 要学会利用上一步计算的结果 
	}
	printf("累乘积的和为：%lf",s);           //       输出的类型注意  ,要注意分析结果 
	return 0;
}

//exp5-18-2 笨的方法，没有效率的方法
#include"stdio.h"
int main()
{
	int i,k,n;
	float s=0,t;
	printf("n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t = 1;
		for(k=1;k<=i;k++)
		{
			t = t * k;
		}
		s = s + t;
	}
	printf("s = %f,t = %f",s,t);
	return 0;
 } 


//exp5-19 求级数 pi/4 = 1 - 1/3 + 1/5 - 1/7 + ...     计算pi的值 
#include"stdio.h"
int main()
{
	int n,i;
	float s=0.0,t = -1.0 ;           //这里t要为float，否则下面t/i永远为0； 
	printf("n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		t = -t;
		s = s + t/i;
	}
	s = s*4;                                //计算pi的值 
	printf("s = %f",s); 
	return 0;
}

//exp5-19-3 求pi的值
#include"stdio.h"
#include"math.h"
int main()
{
	int i=1;
	float sum=0, t=-1.0, eps;
	printf("eps =  ");
	scanf("%f",&eps);
	do
	{
		t = -t;
		sum = sum + t*(1.0/i);
		i = i + 2;	
	}while(fabs(1.0/i)>=eps);
	printf("pi = %f",sum*4);
	printf("\n循环的次数%d",i/2);
	return 0; 
 } 

*/
//exp5-20 人口增长的问题
#include"stdio.h"
int main()
{
	int i;
	float x,r;                             //注意变量的类型 
	x = 14.0;
	r = 0.0002;
	for(i=1;i<=10;i++)
	{
		x = (1 + r) * x;
	}
	printf("十年后人口为：%f",x);
	return 0;
 } 






 







