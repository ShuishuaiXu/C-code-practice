/*
*   �����£�������Ԥ������� 1. ������Ҫ�Ժ���������Ԫ��
*                              2. �����ĵ���
*                              3. ������Ϊ��������
*                              4. �����ķ���
*                              5. ���ļ�����
*                              6. ����Ԥ����
*                              7. С��

*        1.  ��������Ҫ�ԣ�ģ�黯�����ʹ�ã�����Դ���򳤶ȣ����ڶ�λ�͵���          
*            ��������Ԫ�أ����庯���������������͵���
*                                      ������������ʽ��1���β� 2���β�  3 ����������ǰ�������� 

*        2.  �����ĵ��ã� 1.�򵥵��ã�4����ʽ���޲��޷���ֵ���޲��з���ֵ���в��޷���ֵ���в��з���ֵ�� void,return 
*                         2.Ƕ�׵���: ��ʵ���������ĵ���û������ �����ñ��˽�Ƕ�ף��Լ����Լ��еݹ� 
*                         3.�ݹ���ã�1.����������ֱ�ӻ��ӵĵ���Ϊ�ݹ���� 
*                                     2.�ݹ������������ 1 �ݹ�Ľ����������ݹ�Ҫ����򵥵Ľ����������������������������ݹ����
*                                                        2.�ݹ�Ĺ��ɣ� �����ⲻ��ת���ɼ򵥵���ͬ������ ������ת��Ҫ�ӽ��ݹ�Ľ��� 
*                                     3.�ݹ�Ч�ʱȽϵͣ��м��������ݱ���������ֵ����ʼ���ȣ���������ѭ���������õݹ� 

*        3.������Ϊ���������� 1.����Ԫ����Ϊ��������������ͨ������ͬ �����ݵ���ֵ������ʵ�κ��β���������ͬ���ڴ浥Ԫ 
*                             2.��������Ϊ��������: 1.����������Ϊ�������� 
*                                                   2.���ݵĵ����׵�ַ�������βκ�ʵ�ι���һ���ڴ浥Ԫ 
*                                                   3.�������������֮ǰ

*        4.�����ķ��ࣺ   1.����������ָࣺ�����ڳ����е���Ч��Χ����Ϊ�ֲ�������ȫ�ֱ��� 
*                                                                    1.�ֲ�����Ϊ�������ڻ��߸��Ͼ���
*                                                                    2.ע��ȫ�ֱ��������ֶ��壨��û��extern),�������ǴӶ����λ�ÿ�ʼ������Ľ��� 
*                         2.���洢�����ࣺ�Զ���auto������̬��static),�ⲿ��extern�����Ĵ�����register�� 
*                                          1.auto��registerֻ�ֲܾ���һ�����ڴ棬һ����cpu)��static�ȿ��Ծֲ�Ҳ����ȫ�֣�externֻ��ȫ��
*                                          2.��̬��Ϊ��̬�ֲ������;�̬ȫ�ֱ�������̬ȫ�ֱ���ֻ�������ڶ�����ļ��У���ȫ�ֱ��������������ļ��б����� 
*                                          3.�Ĵ����洢���һ��ֻ���������ͺ��ַ��ͱ�����������ѭ�����Ʊ���������߳��������ٶȡ� 
*                                          4.ע�⾲ֹ������ֵ��ִ�й����б�����һ�ε�ֵ 

*        5.���ļ����� 1.ͷ�ļ�������ŵ��������ⲿ�������ⲿ������������
*                       2.������python�е�from * import * 

*        6.����Ԥ���� 1.�ڱ���֮ǰ����������#�������һЩ�����ģ����õĵ�һЩ�����Ҫ��1�궨�壨define��2�ļ�������include��3��������
*                       2.�궨�壨define����   1.���ࣺ  1���������ĺ꣬2�������ĺ꣬3Ƕ�׵ĺ� 
*                                              2.��ν�ĺ����Ԥ�ȶ���һ�������滻�Ķ���
*                                              3.ע��������ĺ��뺯�������� ,ע��������ĺ��滻������ȼ����� ,������������ 
*                                              4.Ƕ�׵ĺ�ָ���Ǻ궨���������Ѷ���ĺ� 
*                       3.�ļ�������1.˫�������ڵ�ǰԴ�ļ�Ŀ¼���ң��Ҳ����Ż�ȥϵͳ�ṩ��Ŀ¼�ң���������ֱ��ȥϵͳ�ṩ��Ŀ¼�� 
*                                   2.�ļ����������Ѷ��Դ�ļ����ӳ�һ��Դ�ļ������б��룬����һ��Ŀ���ļ� 
*                       5. ע��#����û�зֺţ���Ϊ����Ԥ�����ǳ����е���� 
 
*        С�᣺1.��������ȥ���һ���ض��Ĺ��ܵ�ģ�飬������ܲ�һ����ָ���㣬�����������ͼ��ѽ�ȵȣ������ԡ�˼�벻Ҫ������


*        ע�⣺1.���õĺ�����ȫ�ֱ������д����ǰ�� 
*              2.ȫ�ֱ����ɼ�ǿ����ģ��֮���������ϵ����ͬʱ�ή�ͺ����Ķ����ԣ���ģ�黯�ĳ�����ƹ۵������ǲ����ģ���˾�������ȫ�ֱ��� 
*              3.

*/
/* exp7-1-1 ���������������������ǵĺͣ��� */
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
/* exp7-1-2 �ú������������ */
/* 
#include"stdio.h"
int main()                              //main����ֻ�Ǵ���һ����ܣ�����ϸ�ڽ�������������ִ�� 
{
	int x,y;
	int sum,dif;
	int fsum(int,int);                  //�������� 
	int fdif(int,int);
	printf("Please input two integers: ");
	scanf("%d%d",&x,&y);
	
	sum = fsum(x,y);                    //���ú��� 
	dif = fdif(x,y);
	
	printf("sum = %d,dif = %d",sum,dif);           
	return 0;
}

int fsum(int a,int b)                   //���庯�� 
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
 
/* exp7-2-1 �������m!/(n! * (m-n)!) ��ֵ */
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
	
	printf("\n�������ֵΪ�� %d",cnm);
	return 0;
 } 
*/
/* exp7-2-2 �ú���������� */
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
	
	facm = factorial(m);               //����һ��Ҫע�����͵�����������ر�������� 
	facn = factorial(n);
	facmn = factorial(m-n);
	cmn = facm/(facn*facmn);
	
	printf("facm = %d\n",facm);        //��������m=18,����������  
	printf("�����Ϊ��%d",cmn);
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
/* exp7-3-1 ����ɴ�д��ĸH��ɵ�4*20���� */
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
/* exp7-3-2 �ú������ û�в���û�з���ֵ*/
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
/* exp7-3-3 �в���û�з���ֵ */
/* 
#include"stdio.h"
int main()
{
	int line=4,i;
	char c;
	void graph(char);                      //����һ��Ҫ������ 
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
/* exp7-4 ��fibonacci���е�ǰn��� */
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
	printf("\n%-10d%-10d",f1,f2);      //ѭ��֮ǰ�����ǰ���� 
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

/* exp7-5 ��д���뺯��������һ���ַ� */
/*
#include"stdio.h"
int main()
{
	char in();
	char m;
	m = in();                              //�޲��з���ֵ 
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
/* exp7-6 ���������������������  */
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
/* exp7-7 ͳ������[a,b]����������   ������Ƕ�׵���*/
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
int primecount(int m,int n)           // ���������������� 
{
	int i,k = 0;
	int prime(int);                     //�����ж��������� 
	for(i=m;i<=n;i++)
	{
		if(prime(i) == 1)              //�����ж��������� 
				k = k + 1;
	}
	return k;                            //ע�⺯������ֵ���������������������� 
}
int prime(int x)                       //�����ж��������� 
{
	int i;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
			return 0;                //������õĺܺ� 
	}
	return 1;
 } 
*/
/*  exp7-8 ����s = a��ƽ���Ľ׳� + b��ƽ���Ľ׳� */
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
/*exp7-9 �õݹ鷨����n! */
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
	if(n<0)                         //������Ч���� 
		f = -1;
	else
	{
		if(n==0||n==1)              //������������ 
			f=1;
		else
		f = fac(n-1)*n;            //ֱ�ӵݹ����   
	}
	return f; 
 } 
*/
/* exp7-10 ��ŵ�����⣬�����ͼ��ʾ�������� */
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
/*exp7-11 �ж�һ������������ָ��Ԫ�ص�ֵ��������0�����1����С�ڵ���0�������0 */
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
/* exp7-12 ��ʮ�����������У�ȡ���ֵ��Ԫ�����һ��������ȡ��Сֵ��Ԫ�������һ������ */
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
	inpu(number);                         //ֻд����������ʾ�������������
	max_min(number);
	outpu(number);	
} 
*/
/* exp7-13 �ֲ���������  */
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
/* exp7-14 �ڸ���������������� */
/* 
#include"stdio.h"
int main()
{
	int k=8;
	{
		int k = 1;                     //ע��˴��ľֲ�����k��������Ϊ��������� 
		printf("k = %d",k);
	}
	printf("\nk = %d",k);
	return 0;
 } 
*/
/*exp7-15 ȫ�ֱ�����Ӧ�ã����볤����ĳ���ߣ���������������������� */
/* 
#include"stdio.h"
float s1,s2,s3;                                             //ȫ�ֱ���Ҫ��ǰ���� 
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
/*exp7-16 ȫ�ֱ�����ֲ�����ͬ��    ���ھֲ��������������ڣ�ͬ����ȫ�ֱ����������� */
/*
#include"stdio.h"
int a=3,b=5;
int main()
{
	int max(int a,int b);
	int a =19;                      //a��ʱΪ�ֲ���������Ч��ΧΪmain����
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
/*exp7-17 ��̬�ֲ��������Զ������ıȽ�  */
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
	static int c = 0;                        //ע�⾲̬�ֲ�������ֵ��ÿ��ѭ���������¸�ֵ�����Ǳ�����һ��ִ�е�ֵ 
	b = b + 1;
	c = c + 1;
	printf("f:a=%d,b=%d,c=%d\n",a,b,c);
	return(a+b+c); 
}
*/
/* exp7-18 ����������n���������ӣ�1��n���⣩֮�� */
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
	register int i,s = 0;           // �Ĵ�������   
	for(i=2;i<n;i++)
	{
		if(n%i == 0 )
			s = s + i;
	 } 
	return s;
}
*/
/*exp7-19 ��extern�����ⲿ��������չ�����ļ��е������� */
/* 
#include"stdio.h"
int main()
{
	extern int a,b;                         //�ⲿ�洢���������涨�壬��������Ҫ�ñ�����Ҫ���� 
	int max(int, int);
	printf("max = %d\n",max(a,b));
	
	printf("max = %d\n",max(a,b));         //ע�⣺����extern����a��ֵ����䣬�������static�����ͻ��б仯�������������������� 
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
/* exp7-21 ����Բ���ܳ��������������   �ò��������ĺ궨�峣�� */
/*
#include"stdio.h"
#define PI 3.14             //���ӷֺţ���Ϊ�������  
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
/* exp7-22 ���㳤���ε���� �ñ��ʽ���궨��*/
/* 
#include"stdio.h"
#define LENGTH (9.45-2.6)
#define HIGH (6.9+7.4)
int main()
{
	float s;
	s = LENGTH * HIGH;         // ע��������ʽ�����û�����ŵĻ��ᰴ�����ȼ������˷� 
	printf("area = %f\n",s);       
	return 0;
 } 
*/
/* exp7-23 �궨���е��ַ�������Ϊ��ʽ�������Լ�����д�鷳 */
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
/*exp7-24 ����������еĽϴ���   �������ĺ궨�� */
/* 
#include"stdio.h"
#define MAX(a,b) (a>b)?a:b        //�������ĺ궨�� ,ע��������βα�֮�䲻���пո� 
int main()
{
	int num1,num2,max;
	printf("Please input two numbers: ");
	scanf("%d%d",&num1,&num2);      // ע�ⲻҪ©����ַ�� ���������� 
	max = MAX(num1,num2);                  // ��ĵ��� 
	printf("max = %d\n",max);
	return 0; 
 } 
*/
/* exp7-25  */
/* 
#include"stdio.h"
#define SQ(y) (y) * (y)           //�������û�����ţ����������� a + 1 * a + 1!!!!!!!!!!! 
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
/* exp7-26 ����������Ƕ�׵ĺ� */
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
/*  exp7-27 ������Ƕ�׵ĺ꣬����a+1������ */
/*
#include"stdio.h"
#define SQ(y) ((y) * (y))
#define CUBE(x) (SQ(x) * (x))          //ע������ţ�����ᰴ���ȼ������������д� 
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 







