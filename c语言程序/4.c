/* 

// �ģ�ѡ��ṹ����ϵ���߼�������������ͱ��ʽ��
//               if����ʽ��Ƕ��,switch��� �Լ����ߵıȽ� 
//               С�� 

//         ��ϵ���ʽ��ֵֻ����ͼ�����ֵ������0Ϊ�棬0Ϊ�� 
//         �߼��������1 ע�����·����,һ��ȷ�����ʽ��ֵ����ֹͣ���� a&&b&&c(����һ���ټ�ֹͣ��, a||b||c������һ���漴ֹͣ�� 
//                     2 �� ���� ��ϵ && ||   
//         �������ʽ��������Ӧ�ã������ֵ���ж���ż�ԣ���Сдת�������ƶ�ѡһ������  Ӧ�����ޣ�һ����if��switch, 
//                           ע�����Ƕ�ף����������������� a>b ? a : (c>d ? c : d ) ��û������һ�� 

//         if��䣺 1 ����Ƕ�����Ҫ��{}������ǵ������ֱ��д�����棬Ҫ�����������׶�
//                  2 ��ʽ�У�if��else����if��䣨ʡ��else����if����Ƕ�ף�Ƕ�׵ļ�д��ʽ
//                  3 if-else��������⣬else������֮ǰ�������δ��Ե�if��� 

//         switch��䣺 1 �ؼ���switch�����������Ǳ��ʽ�����ܹ������ֵ������Ҫȡ��
//                      2 case����Ҫ��һ���ո񣬳�����ֵ������ͬ�����ܴ�С��
//                      3 default������ʡ��
//                      4 ���case�ɹ���һ��ִ�����
//                      5 break���ʡ�ԣ���ÿ�����Ӷ���ִ��

//          if��switch���� 1 ���ж�ֵΪ�������ַ��ȹ̶�ֵʱ����switch�����ж������Ƿ�Χʱ����if.Ҳ���Թ���switch�ı��ʽ 
//                           2 ��֧����ʱ��if��switchЧ�ʸߣ���֧�϶���ȡֵ�й���ʱ�ʺϲ���switch 
 
//exp4-1  ��ϵ���ʽ���߼����ʽ��Ӧ�� 
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

// exp4-2-1    ���ַ����������������ֵ 
#include"stdio.h"
int main()
{
	int a,b;
	printf("Please input two numbers: ");
	scanf("%d%d",&a,&b);
	(a>b) ? printf("max = %d\n",a) : printf("max = %d\n",b); // �������ʽ ������if��䣬���Կ���ִ���������ֵ��� 
	return 0; 
 } 

// exp4-2-2  
#include"stdio.h"
int main()
{
	int a,b,max;
	printf("Please input two numbers: ");
	scanf("%d%d\n",&a,&b);
	max = a>b ? a : b;                            // ע�⣺�������ʽ���Ը�ֵ 
	printf("max = %d", max);
	return 0;
 } 

// exp4-3 ����һ��ѧ���ĳɼ������"pass"��"fail"
#include"stdio.h"
int main()
{
	int a;
	printf("Please input the score: \n ");
	scanf("%d",&a);
	if(a<60)
	{
		printf("Fail\n");                    // ע��if���ź���û�зֺ� 
	}
	else
	{
		printf("Pass\n");
	}
	return 0;
 } 

// exp4-4 ����3���۲���
#include"stdio.h"
int main()
{
	int a;
	printf("Please input a number: ");
	scanf("%d",&a);
	if(a=1)                                // ���ʽa=1��ֵ��ԶΪ��  =��==������ 
	{
		printf("***\n");
	}
	else
	{
		printf("!!!\n");
	}
	return 0;
 } 

//exp4-5 ��������ʵ�������������
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

// exp4-6  ʹ�õ���֧����������������ֵ
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
	int x,y = 0;                   // ע��ֱ�Ӹ�y����ֵ�������if����ʡ��else��� 
	printf("Please input an integer: ");
	scanf("%d",&x);
	if(x>=0)
	{
		y = 2 * x + 1;
	}
	printf("The number y is %d ", y);
	return 0;
}

//exp4-8 ʹ�õ���֧��䰴�������������
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please input two integers:");
	scanf("%d%d",&a,&b);
	printf("a = %d, b = %d\n",a,b);
	if(a>b)
	{
		c = a;                            // a �� b ���� ������������ 
		a = b;
		b = c;
	}
	printf("%d %d",a,b);
	return 0;
}

//exp4-9 ʹ�õ���֧��䰴�������������
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

//exp4-12-1   �Ӽ���������һ���ַ����жϲ�����ǿ��Ʒ������֣���д��ĸ��Сд��ĸ�����������ַ�
#include"stdio.h"                                 //�����Ҫ�࿴������������������������������ 
int main()
{
	char c ;                                    // ע�����ַ� 
	printf("Please input a character: ");
	c = getchar();                              // ע����getchar() 
	if(c<32)                                     // ע����ASCII��ֵ��Ϊ���ƹ�ϵ���� 
	{
		printf("This is a control character\n");
	}
	else if(c>='0'&&c<='9')                         // �����Χ����ѡ�ĺã������������������� 
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
	else                                               // �������Ҫע�⣬û��if 
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

//exp4-13 ���׶η���
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

//exp4-14 ʹ��switch��䣬����һ���·ݣ���ӡ�����·��ж�����
#include"stdio.h"
int main()
{
	int month,day;
	printf("Please input a month: ");
	scanf("%d",&month);                            // ����һ����ĸ��Ҳ��Ϊmonth����һ��ֵ 
	switch(month)
	{
		case 2 : day = 29; break;               // û�������꣬����Ĭ�ϲ��������� 
		case 4 :
		case 6 :
		case 9 :
		case 11: day = 30; break;
		default : day = 31; break;                   // default���Ҫ�úã����ڱ�ʾʣ������ 
	}
	printf("Month = %d, day = %d",month, day);
	return 0;
} 

// exp4-15  ��һԪ���η��̵ĸ�
#include"stdio.h"
#include"math.h"
int main()
{
	float a,b,c,d,x1,x2;
	printf("a,b,c=?  ");
	scanf("%f%f%f",&a,&b,&c);
	printf("The equation is %fx*x + %fx + %f = 0",a,b,c);
	
	if(fabs(a) <= 1e-6)                                       // ע��ʵ��û�о��Ե�0����fabs(a) <= 1e-6  ���ж�ʵ��a�Ƿ�Ϊ0 
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

//exp4-16 ��Ƽ�������� �������ֺ��������������
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
//exp4-17 ʹ��if��switch��д������ѧ���ĳɼ� ������ѧ���ĳɼ������ȼ�
#include"stdio.h"
int main()
{
	int score;
	printf("Please input a score: ");
	scanf("%d",&score);
	if(score>=90) printf("A\n");
	else if(score>=80) printf("B\n");                   // ע�ⲻ�ü��� && score<90  !!!!!! 
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
		case  9: printf("A\n"); break;               // ��Ҫ����break����� 
		case  8: printf("B\n"); break;
		case  7: printf("C\n"); break;
		case  6: printf("D\n"); break;
		default: printf("E\n");                      // default�����ð�� 
	}
	return 0;
}
*/
//exp4-18 ����һ����������λ��������n��1�жϼ�λ����2 ��˳���ӡÿһλ���� 3 �������ӡ��������
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











