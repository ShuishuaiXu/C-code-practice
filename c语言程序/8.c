/*
*  �ڰ��� �����㷨���ۺϳ������  1.��ֵ���㷽��
*                                 2.ʵ�ù��ߵ����
*                                 3.��Ϸ������

*         1.��ֵ���㷽����  1.�����׳˼��� 
*                           2.һԪn�η��̸�����ֵ����    û�ܳ���������
*                           3.�����ֵļ��� 

*         2.ʵ�ù��ߵ���ƣ�  1.������
*                             2.������ 



*         4.ע������

*         5.С��  

*/   

/*exp8-1 ���벻����1000������������� n!=1*2*3*...*n �ľ�ȷ��� ��1000��Լ����4*10e2567 */  
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
	memset(f,0,sizeof(f));                // ����memset����������f���� 
	f[0] = 1; 
	
	for(i=2;i<=n;i++)
	{
		int c = 0;             //c������������۳˵Ľ�λ��ע��c�Ǿֲ�������������Ϊ���������
		for(j=0;j<MAXN;j++)
		{
			int s;
			s = f[j] * i + c;              // �۳˹��� ������������ 
			f[j] = s % 10;                 // Ӧ���и�Ч�ʵķ�������Ϊ�кܶಽ���ǲ��ü���� 
			c = s / 10 ;
		 } 
	}
	
	for(j = MAXN-1;j>=0;j--)                  //����ǰ����㣬�ҵ����λ������λ�� 
	{
		if(f[j]!=0)
		{	printf("%d! is a %d-digit number.\n",n,j+1);      //��ʱ���λ�������f[j]�����Թ��� j+1 
	 		break;
	    }
	}
	
	printf("%d! = ",n);                   //׼����������Ҫͨ���׶� 
	for(i=j;i>=0;i--)                     // ע��i=j 
		printf("%d",f[i]);
	
	printf("\n");
	return 0; 
}      
*/
/*exp8-2 �� ���ַ� �󷽳�x^3 - 6*x - 1 = 0������[1��5]�ĸ��� */
/*
#include"stdio.h"
#include"math.h"
float boot(float x1,float x2)
{	
	float x;
	float f,f1,f2;
	f1 = pow(x1,3) - 6*x1 - 1;
	f2 = pow(x2,3) - 6*x2 - 1;         //����Ҫ��f1*f2<0!!!!!!!       
	do
	{
		x = (x1 + x2)/2;
		f = pow(x,3) - 6*x -1;
		if(f1*f > 0)                  //��f1,f������ͬʱ 
		{
			f1 = f;
			x1 = x;
		}
		else if(f2*f > 0)             //��f2,f������ͬʱ 
		{
			f2 = f;
			x2 = x;
		}
	}while(fabs(f) > 1e-6 );          //�������ע�⣬f��ֵ�����Ͻӽ��� 
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
/* exp8-3 �����ֵļ��㣬�����η��󶨻���sinx(0~pi)��ֵ   */ 
/* 
#include"stdio.h"
#include"math.h" 
#define PI 3.1415926
#define N 10000            //���� 
double integral(double a,double b)
{
	double h,fx;
	int i;
	double s = 0;
	h = fabs(b-a)/N;
	for(i=0;i<N;i++)
	{
		fx = sin(a + i*h + h/2);            //���η� 
		s = s + fx;
	}
	return s*h;            // ע�����ﲻҪ���ǳ���h 
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
/* exp8-4  ������ */
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
/* exp8-5 ������ */
/* ��֪2000���1��1�������������Ӽ�������һ����ݣ�������ʾ����ݵ�ȫ������ */
/* 
#include"stdio.h"
#include"conio.h"
int yearday(int year)
{
	int s; 
	if(year%400 == 0 || year%4 == 0 && year%100 != 0) // ����һ�򣻰��겻���İ�������
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
		printf("    ");      //���ÿ���µ�ǰ�漸��Ŀո�
	days = monthday(year,month);       // ֪��������ж����� 
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
	printf("%13d year\n",year);              //Ҫע�������10d������������ 
	for(month = 1;month<=12;month++)      // ѭ�����ÿ�µ����� 
	{
		sum = 0;
		for(i=2000;i<year;i++)     //����2000~year-1������ 
		{
			sum = sum + yearday(i);        
		}
		for(i=1;i<=month-1;i++)
		{
		sum += monthday(year,i);    //��ֹ��i��֮ǰ������ 
		}
		week = (sum + 6) % 7;       // ����year��i�µĵ�һ�������  ���ΪʲôҪ��6��������ע��������һ����ʾ����Sunday 
		display(year,month,week);
	}
	return 0;
 } 
*/ 
/* exp 8-6 ��ȭ*/

#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"stdlib.h"                    // ͷ�ļ�����srand������rand���� !!!!!
#include"time.h"                     // ͷ�ļ�����ʱ��time���� 
void xing()
{
	printf("************************************\n");
}
int main()
{
	int n1,n2;                            //��ҵ����� 1��2��3  number
	int t1,t2;                            //��¼���Ӯ�Ĵ��� time
	char p1[20],p2[20] = "computer";    //��ҵ�����player
	char m1[10],m2[10];                 // ��������ҵ�����mode��rock,paper,scissors 
	int i0,i1,i2;                        //ƽ�֣�����Ӯ�ô��� 
	int j1,j2;                           //�û�������� 
	i0 = i1 = i2 = j1 = j2 = 0 ;	
	char e ;                                // �жϽ��������� 
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
	gets(p1);                                                 // ����������ֲ��浽p1[]������
	printf("This inputmatch is %s --pk-- %s.\n",p1,p2);        //������ո���������ԣ���shuishuai xu 
	do
	{	
		time(&h1);                              //����һ��ʱ��Ĵ�������ֵ��ʾ��1970��1��1����ʱ�����ڵ�ʱ�� 
		srand(h1);                             //������������ĳ�ʼ������ ��Ϊrand�����ṩ��ʼ������� 
		flag = 1;
		printf("\n");
		xing();                          //��ҳ�ȭ
		printf("Please input your gesture(1--Rock,2--Scissors,3--Paper): ");
		scanf("%d",&n1);               
		switch(n1)
		{
			case 1 : strcpy(m1,"Rock"); break;
			case 2 : strcpy(m1,"Scissors"); break;
			case 3 : strcpy(m1,"Paper"); break;
			default : {
						printf("This is an illegal character!!!");         //��������벻�Ϸ���ʱ��ֱ���˳� 
						flag = 0;
					}
		} 
		n2 = 1 + rand()%3 ;             // rand��������� ����������ȭ 
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
		
			if(n1==n2)                        //�ж���Ӯ 
			{
				printf("A draw!Neither you nor computer win this time . \n");
				i0++;
			 } 
			else if((n1==1 && n2 == 2) || (n1==2 && n2 == 3) || (n1==3 && n2 ==1))        //�������ȼ��������������� 
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
		
	}while(e != 'n');                // ����Ҫע�⣬����ֱ���� getchar�������Ƚϣ������ȸ�ֵ��c,������&&����|| 
	
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














 










