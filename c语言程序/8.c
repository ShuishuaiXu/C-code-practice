/*
*  第八章 典型算法和综合程序设计  1.数值计算方法
*                                 2.实用工具的设计
*                                 3.游戏类的设计

*         1.数值计算方法：  1.大数阶乘计算 
*                           2.一元n次方程根的数值计算    没跑出来！！！
*                           3.定积分的计算 

*         2.实用工具的设计：  1.计算器
*                             2.万年历 



*         4.注意事项

*         5.小结  

*/   

/*exp8-1 输入不超过1000的正整数，输出 n!=1*2*3*...*n 的精确结果 ，1000！约等于4*10e2567 */  
/* 
#include"stdio.h"
#include"string.h"
#define MAXN 3000
int f[MAXN] ;
int main()
{
	int i,j;
	int n; 
	printf("Please input a number(1~1000): ");
	scanf("%d",&n);
	memset(f,0,sizeof(f));                // 利用memset函数对数组f清零 
	f[0] = 1; 
	
	for(i=2;i<=n;i++)
	{
		int c = 0;             //c变量用来存放累乘的进位，注意c是局部变量，作用域为复合语句内
		for(j=0;j<MAXN;j++)
		{
			int s;
			s = f[j] * i + c;              // 累乘过程 ！！！！！！ 
			f[j] = s % 10;                 // 应该有更效率的方法，因为有很多步骤是不用计算的 
			c = s / 10 ;
		 } 
	}
	
	for(j = MAXN-1;j>=0;j--)                  //忽略前面的零，找到最高位在数组位置 
	{
		if(f[j]!=0)
		{	printf("%d! is a %d-digit number.\n",n,j+1);      //此时最高位在数组的f[j]，所以共有 j+1 
	 		break;
	    }
	}
	
	printf("%d! = ",n);                   //准备输出，输出要通俗易懂 
	for(i=j;i>=0;i--)                     // 注意i=j 
		printf("%d",f[i]);
	
	printf("\n");
	return 0; 
}      
*/
/*exp8-2 用 二分法 求方程x^3 - 6*x - 1 = 0在区间[1，5]的根。 */
/*
#include"stdio.h"
#include"math.h"
float boot(float x1,float x2)
{	
	float x;
	float f,f1,f2;
	f1 = pow(x1,3) - 6*x1 - 1;
	f2 = pow(x2,3) - 6*x2 - 1;         //这里要求f1*f2<0!!!!!!!       
	do
	{
		x = (x1 + x2)/2;
		f = pow(x,3) - 6*x -1;
		if(f1*f > 0)                  //当f1,f符号相同时 
		{
			f1 = f;
			x1 = x;
		}
		else if(f2*f > 0)             //当f2,f符号相同时 
		{
			f2 = f;
			x2 = x;
		}
	}while(fabs(f) > 1e-6 );          //这个条件注意，f的值电脑上接近零 
	return x; 
}
int main()
{
	float x1,x2;
	printf("Please input the range: x1,x2 :  ");
	scanf("%f,%f",&x1,&x2);
	printf("The boot = %f\n",boot(x1,x2));
	return 0;
 } 
*/
/* exp8-3 定积分的计算，用梯形法求定积分sinx(0~pi)的值   */ 
/* 
#include"stdio.h"
#include"math.h" 
#define PI 3.1415926
#define N 10000            //精度 
double integral(double a,double b)
{
	double h,fx;
	int i;
	double s = 0;
	h = fabs(b-a)/N;
	for(i=0;i<N;i++)
	{
		fx = sin(a + i*h + h/2);            //梯形法 
		s = s + fx;
	}
	return s*h;            // 注意这里不要忘记乘以h 
}

int main()
{
	double a = 0 ;
	double b = PI;
	double fx;
	fx = integral(a,b);
	printf("the definite integral = %f\n",fx);
	return 0;
}
*/
/* exp8-4  计算器 */
/*
#include"stdio.h"
void add(float x, float y)
{
	printf("%f + %f = %f",x,y,x+y);
}
void sub(float x, float y)
{
	printf("%f - %f = %f",x,y,x-y);
}
void mul(float x, float y)
{
	printf("%f * %f = %f",x,y,x*y);
}
void div(float x, float y)
{
	printf("%f / %f = %f",x,y,x/y);
}
int main()
{
	float a,b;
	char c;
	printf("Please input a formula like 2*3 : ");
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
	{
		case '+': add(a,b);break;
		case '-': sub(a,b);break;
		case '*': mul(a,b);break;
		case '/': div(a,b);break;
		default : printf("error!");
	}
	return 5;
 } 
*/
/* exp8-5 万年历 */
/* 已知2000年的1月1日是星期六，从键盘输入一个年份，分屏显示该年份的全年日历 */
/* 
#include"stdio.h"
#include"conio.h"
int yearday(int year)
{
	int s; 
	if(year%400 == 0 || year%4 == 0 && year%100 != 0) // 四年一闰；百年不闰，四百年再闰
		s = 366;
	else 
		s = 365;
	return s;
 } 
int monthday(int year,int month)
{
	int s;
	switch(month)
	{
		case 2:
		{
			if(year%400 == 0 || year%4 == 0 && year%100 != 0)
				s = 29;
			else
				s = 28;
		};break;
		case 4:
		case 6:
		case 9:
		case 11: s = 30;break;
		default: s = 31;
	}
	return s;
}
 void display(int year, int month, int week)
 {
 	int i,count,days;
	printf("%10d month\n",month);             
 	printf(" SUN MON TUE WES THR FRI SAT\n");
	for(i=1;i<=week;i++)
		printf("    ");      //输出每个月的前面几天的空格
	days = monthday(year,month);       // 知道这个月有多少天 
	count = week;
	for(i=1;i<=days;i++)                    
	{
		printf("%4d",i);
		count++;
		if(count%7==0)
			printf("\n");
	}
	printf("\n");
	if(month%3 == 0)
	{
		printf("press any key to continue... \n");
		getch();
	}
	
 }


int main()
{
	int year,month,week,i,sum;
	printf("Please input a year : ");
	scanf("%d",&year);
	printf("%13d year\n",year);              //要注意输出的10d，有利于整齐 
	for(month = 1;month<=12;month++)      // 循环输出每月的日历 
	{
		sum = 0;
		for(i=2000;i<year;i++)     //计算2000~year-1的天数 
		{
			sum = sum + yearday(i);        
		}
		for(i=1;i<=month-1;i++)
		{
		sum += monthday(year,i);    //截止到i月之前的天数 
		}
		week = (sum + 6) % 7;       // 计算year年i月的第一天的星期  这个为什么要加6看日历，注意日历第一个显示的是Sunday 
		display(year,month,week);
	}
	return 0;
 } 
*/ 
/* exp 8-6 猜拳*/

#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"stdlib.h"                    // 头文件包含srand函数和rand函数 !!!!!
#include"time.h"                     // 头文件包含时间time函数 
void xing()
{
	printf("************************************\n");
}
int main()
{
	int n1,n2;                            //玩家的输入 1，2，3  number
	int t1,t2;                            //记录玩家赢的次数 time
	char p1[20],p2[20] = "computer";    //玩家的名字player
	char m1[10],m2[10];                 // 用来放玩家的手势mode：rock,paper,scissors 
	int i0,i1,i2;                        //平局，各自赢得次数 
	int j1,j2;                           //用户积分情况 
	i0 = i1 = i2 = j1 = j2 = 0 ;	
	char e ;                                // 判断结束的条件 
	int flag ;
	time_t h1; 
	
	xing();
	printf("*** welcome to enter the match! ****\n");
	xing();
	printf("press any key to continue...");
	getch();
	printf("\n\n");

	xing();
	printf("Please  your name : ");
	gets(p1);                                                 // 输入玩家名字并存到p1[]数组中
	printf("This inputmatch is %s --pk-- %s.\n",p1,p2);        //输入带空格的名字试试，如shuishuai xu 
	do
	{	
		time(&h1);                              //返回一个时间的大整数其值表示从1970年1月1日零时到现在的时间 
		srand(h1);                             //随机数发生器的初始化函数 ，为rand函数提供初始化随机数 
		flag = 1;
		printf("\n");
		xing();                          //玩家出拳
		printf("Please input your gesture(1--Rock,2--Scissors,3--Paper): ");
		scanf("%d",&n1);               
		switch(n1)
		{
			case 1 : strcpy(m1,"Rock"); break;
			case 2 : strcpy(m1,"Scissors"); break;
			case 3 : strcpy(m1,"Paper"); break;
			default : {
						printf("This is an illegal character!!!");         //如何在输入不合法的时候直接退出 
						flag = 0;
					}
		} 
		n2 = 1 + rand()%3 ;             // rand产生随机数 计算机随机出拳 
		switch(n2)
		{
			case 1 : strcpy(m2,"Rock"); break;
			case 2 : strcpy(m2,"Scissors"); break;
			case 3 : strcpy(m2,"Paper"); break;
			default : {
						printf("This is an illegal character!!!");
						flag = 0;
					}
		} 
		 
		if(flag)
		{	
			printf("%s's gesture is %s\n",p1,m1);
			printf("%s's gesture is %s\n\n",p2,m2);
			xing();
		
			if(n1==n2)                        //判断输赢 
			{
				printf("A draw!Neither you nor computer win this time . \n");
				i0++;
			 } 
			else if((n1==1 && n2 == 2) || (n1==2 && n2 == 3) || (n1==3 && n2 ==1))        //不管优先级，尽量加上括号 
			{
				printf("%s wins this timme .\n",p1);
				i1++;
				j1++;
			 } 
			else
			{
				printf("%s wins this timme .\n",p2);
				i2++;
				j2++;	
			}
		}
		
		printf("\n\n");
		xing();
		printf("Do you want the next time? \nPlease input Y or N : ");
		//getch();
		getchar(); 
		e = getchar();
		
	}while(e != 'n');                // 这里要注意，不能直接用 getchar（）来比较，必须先赋值给c,并且是&&不是|| 
	
	printf("\n");
	printf("********** the total score *********\n");
	printf("name\t\t\t\t\tscore\n");

	printf("%-20s\t%20d\n", p1,j1);
	printf("%-20s\t%20d\n", p2,j2);
	printf("\n");
	xing();
	printf("draw %d times\n%s wins %d times\n%s wins %d times\n",i0,p1,j1,p2,j2);
	printf("************ Bye bye ! *************\n");
	return 0;
	
}

/*
#include"stdio.h"
int main()
{
	int i;
	printf("Please input a number: ");
	scanf("%d",&i);
	printf("i = %d",i);
	return 0;
}
*/
/*
#include "stdio.h"
int main(void)
{
    char c,d,e,f;
    printf("please input two characters:\n");
    c=getchar();
    putchar(c);
    putchar('\n');
    d=getchar();
    putchar(d);
    putchar('\n');
    e=getchar();
    putchar(e);
    putchar('\n');
    f=getchar();
    putchar(f);
    putchar('\n');
    printf("c= %c\n",c);
    printf("d= %c\n",d);
    printf("e= %c\n",e);
    printf("f= %c\n",f);
    return 0;
}
*/














 










