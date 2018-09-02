/* 

// 四：选择结构：关系，逻辑，条件运算符和表达式；
//               if语句格式和嵌套,switch语句 以及两者的比较 
//               小结 

//         关系表达式的值只有真和假两个值，即非0为真，0为假 
//         逻辑运算符：1 注意其短路特性,一旦确定表达式的值，即停止运算 a&&b&&c(遇到一个假即停止）, a||b||c（遇到一个真即停止） 
//                     2 非 算术 关系 && ||   
//         条件表达式（？：）应用：求绝对值，判断奇偶性，大小写转换等类似二选一的问题  应用有限，一般用if或switch, 
//                           注意可以嵌套，但是是自右向左结合 a>b ? a : (c>d ? c : d ) 与没有括号一样 

//         if语句： 1 如果是多个语句要加{}，如果是单个语句直接写到后面，要缩进，这样易读
//                  2 格式有：if和else；单if语句（省略else）；if语句的嵌套；嵌套的简写形式
//                  3 if-else的配对问题，else总是与之前最近的尚未配对的if配对 

//         switch语句： 1 关键字switch后面括号内是表达式，是能够计算的值，并且要取整
//                      2 case后面要有一个空格，常量的值不能相同，不能带小数
//                      3 default语句可以省略
//                      4 多个case可共用一个执行语句
//                      5 break如果省略，则每个句子都会执行

//          if与switch区别： 1 当判断值为常量或字符等固定值时，用switch；当判断条件是范围时，用if.也可以构造switch的表达式 
//                           2 分支较少时，if比switch效率高；分支较多且取值有规律时适合采用switch 
 
//exp4-1  关系表达式和逻辑表达式的应用 
#include"stdio.h"
int main()
{
	char c = 'k';
	int i = 1,j = 2,k = 3;
	float x = 30000, y = 0.85;
	printf("%d,%d\n",!x * !y, !!!x);
	printf("%d,%d\n",x || j-3,i<j && x<y);
	printf("%d,%d\n",i==5 && c && (j=8), x+y || i+k+j );
	return 0;
}

// exp4-2-1    两种方法求两个数的最大值 
#include"stdio.h"
int main()
{
	int a,b;
	printf("Please input two numbers: ");
	scanf("%d%d",&a,&b);
	(a>b) ? printf("max = %d\n",a) : printf("max = %d\n",b); // 条件表达式 本质是if语句，所以可以执行输出语句或赋值语句 
	return 0; 
 } 

// exp4-2-2  
#include"stdio.h"
int main()
{
	int a,b,max;
	printf("Please input two numbers: ");
	scanf("%d%d\n",&a,&b);
	max = a>b ? a : b;                            // 注意：条件表达式可以赋值 
	printf("max = %d", max);
	return 0;
 } 

// exp4-3 输入一个学生的成绩，输出"pass"或"fail"
#include"stdio.h"
int main()
{
	int a;
	printf("Please input the score: \n ");
	scanf("%d",&a);
	if(a<60)
	{
		printf("Fail\n");                    // 注意if括号后面没有分号 
	}
	else
	{
		printf("Pass\n");
	}
	return 0;
 } 

// exp4-4 输入3，观察结果
#include"stdio.h"
int main()
{
	int a;
	printf("Please input a number: ");
	scanf("%d",&a);
	if(a=1)                                // 表达式a=1的值永远为真  =和==的区别 
	{
		printf("***\n");
	}
	else
	{
		printf("!!!\n");
	}
	return 0;
 } 

//exp4-5 输入两个实数，按升序输出
#include"stdio.h"
int main()
{
	float a,b;
	printf("Please input two numbers: ");
	scanf("%f%f",&a,&b);
	printf("\na=%.1f, b=%.1f\n",a,b);
	if(a>b)
	{
		printf("%8.2f,%8.2f\n",b,a);
	}
	else
	{
		printf("%8.2f,%8.2f\n",a,b);
	}
	printf("End\n");
	return 0;
 } 

// exp4-6  使用单分支语句求两个数的最大值
#include"stdio.h"
int main()
{
	float a,b,max;
	printf("Please input two numbers:  ");
	scanf("%f%f", &a,&b);
	max = a;
	if(a<b)
		max = b;
	printf("\nThe big number is: ");
	printf("%f",max);
	return 0;
 } 

//exp4-7 
#include"stdio.h"
int main()
{
	int x,y = 0;                   // 注意直接给y赋初值，则后面if语句可省略else语句 
	printf("Please input an integer: ");
	scanf("%d",&x);
	if(x>=0)
	{
		y = 2 * x + 1;
	}
	printf("The number y is %d ", y);
	return 0;
}

//exp4-8 使用单分支语句按升序输出两个数
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please input two integers:");
	scanf("%d%d",&a,&b);
	printf("a = %d, b = %d\n",a,b);
	if(a>b)
	{
		c = a;                            // a 和 b 互换 ！！！！！！ 
		a = b;
		b = c;
	}
	printf("%d %d",a,b);
	return 0;
}

//exp4-9 使用单分支语句按升序输出三个数
#include"stdio.h"
int main()
{
	int a,b,c,t;
	printf("Please input three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("a = %d, b = %d, c = %d\n",a,b,c);
	if(a>b)
	{
		t = a;
		a = b;
		b = t;
	} 
	if(a>c)
	{
		t = a;
		a = c;
		c = t;
    }
    if(b>c)
    {
    	t = b;
    	b = c;
    	c = t;
	} 
	printf("%d  %d  %d",a,b,c);
	return 0;
 } 

//exp4-12-1   从键盘中输入一个字符，判断并输出是控制符，数字，大写字母，小写字母，或是其他字符
#include"stdio.h"                                 //这道题要多看！！！！！！！！！！！！！！！ 
int main()
{
	char c ;                                    // 注意是字符 
	printf("Please input a character: ");
	c = getchar();                              // 注意用getchar() 
	if(c<32)                                     // 注意用ASCII的值作为控制关系条件 
	{
		printf("This is a control character\n");
	}
	else if(c>='0'&&c<='9')                         // 这个范围条件选的好！！！！！！！！！！ 
	{
		printf("This is a digit\n");
	}
	else if(c>='A'&&c<='Z')
	{
		printf("This is a capital letter\n");
	}
	else if(c>='a'&&c<='z')
	{
		printf("This is a small letter\n");
	}
	else                                               // 最后这里要注意，没有if 
	{
		printf("This is an other character\n");
	}
	return 0;
 } 
 
// exp4-12-2 
#include"stdio.h"
int main()
{
	char c;
	printf("Please input a character:");
	c = getchar();
	if(c<32)
	{
		printf("This is a control character.\n");
	}
	else if(c>=48 && c<=57)
	{
		printf("This is a digit.\n");
	}
	else if(c>=65 && c<=90)
	{
		printf("This is a capital letter.\n");
	}
	else if(c>=97 && c<=122)
	{
		printf("This is a small letter.\n");
	}
	else 
	{
		printf("This is an other character.\n");
	}
	return 0;
}

//exp4-13 求解阶段方程
#include"stdio.h"
#include"math.h" 
int main()
{
	int x;
	float y;
	printf("Please input an integer: ");
	scanf("%d",&x);
	printf("\nx = %d",x);
	
	if(x==0) 
		y = 0;
	else if(x>0 && x<20) 
		y = x;
	else if(x>=20 && x<100) 
		y = sqrt(x);
	else if(x>=100)
		y = x*x;
	else 
		printf("\nThere is an error!");
	
	printf("\ny = %f",y);
	return 0;
 } 

//exp4-14 使用switch语句，输入一个月份，打印出该月份有多少天
#include"stdio.h"
int main()
{
	int month,day;
	printf("Please input a month: ");
	scanf("%d",&month);                            // 输入一个字母，也会为month分配一个值 
	switch(month)
	{
		case 2 : day = 29; break;               // 没有输入年，所以默认不考虑闰年 
		case 4 :
		case 6 :
		case 9 :
		case 11: day = 30; break;
		default : day = 31; break;                   // default语句要用好，用于表示剩余的情况 
	}
	printf("Month = %d, day = %d",month, day);
	return 0;
} 

// exp4-15  求一元二次方程的根
#include"stdio.h"
#include"math.h"
int main()
{
	float a,b,c,d,x1,x2;
	printf("a,b,c=?  ");
	scanf("%f%f%f",&a,&b,&c);
	printf("The equation is %fx*x + %fx + %f = 0",a,b,c);
	
	if(fabs(a) <= 1e-6)                                       // 注意实数没有绝对的0，用fabs(a) <= 1e-6  来判断实数a是否为0 
	{
		printf("\nData error!\n");
	}
	else 
	{
		d = b*b - 4*a*c;
		if(fabs(d) <= 1e-6)
		{
			printf("\none real root is %f8.4\n",-b/(2*a));
		}
		else if(d > 1e-6)
		{
			x1 = (-b - sqrt(d))/(2*a);
			x2 = (-b + sqrt(d))/(2*a);
			printf("\ntwo real roots are : %8.4f and %8.4f\n",x1,x2);
		}
		else 
			printf("\nthe equation has no real roots!");
	}
	return 0;
 } 

//exp4-16 设计计算机程序， 输入数字和运算符，输出结果
#include"stdio.h"
int main()
{
	float a,b;
	char c;
	printf("Please input expression: a+(-,*,/)b\n");
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
	{
		case '+': printf("%f + %f = %f",a,b,a+b);break;
		case '-': printf("%f - %f = %f",a,b,a-b);break;
 		case '*': printf("%f * %f = %f",a,b,a*b);break;
		case '/': printf("%f / %f = %f",a,b,a/b);break;
		default :printf("input error!"); 
	}
	return 0;
 } 
//exp4-17 使用if和switch编写，评价学生的成绩 ，根据学生的成绩给出等级
#include"stdio.h"
int main()
{
	int score;
	printf("Please input a score: ");
	scanf("%d",&score);
	if(score>=90) printf("A\n");
	else if(score>=80) printf("B\n");                   // 注意不用加上 && score<90  !!!!!! 
	else if(score>=70) printf("C\n");
	else if(score>=60) printf("D\n");
	else printf("E\n");
	return 0;
 } 

//exp4-17-2
#include"stdio.h"
int main()
{
	int score;
	printf("Please input a score: ");
	scanf("%d",&score);
	switch(score/10)
	{
		case 10:
		case  9: printf("A\n"); break;               // 不要忘记break；语句 
		case  8: printf("B\n"); break;
		case  7: printf("C\n"); break;
		case  6: printf("D\n"); break;
		default: printf("E\n");                      // default后面加冒号 
	}
	return 0;
}
*/
//exp4-18 给出一个不多于三位的正整数n，1判断几位数，2 按顺序打印每一位数字 3 按逆序打印各个数字
#include"stdio.h"
int main()
{
	int n,a,b,c;
	printf("Please input a number: ");
	scanf("%d",&n);
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	
	if(a != 0)
	{
		printf("The figures of the number are 3.\n");
		printf("the three, double, single figures are %d, %d, %d\n",a,b,c);
		printf("the single, double, three figures are %d, %d, %d\n",c,b,a);
	}
	else if(b != 0)
	{
		printf("The figures of the number are 2.\n");
		printf("the double, single figures are %d, %d\n",b,c);
		printf("the single, double figures are %d, %d\n",c,b);
	}
	else if(c != 0)
	{
		printf("The figures of the number are 1.\n");
		printf("the single figures are %d\n",c);
		printf("the single figures are %d\n",c);
	}
	else
		printf("the number is 0");
	
	return 0;
	
 } 











