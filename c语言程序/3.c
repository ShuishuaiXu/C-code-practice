/* 

//ע�⣺��������������й涨������ʱΥ���涨Ҳ�����г�������������б����������Ҫ�Խ�����з����������������� 
// ���ԭ�򣺻��������еĶ��������Ѿ�����õģ������뵽����������϶��Ѿ��н���취�ˣ���������Ҫ�����Ҵ𰸣�ѧϰ 

// 1.����������������ʽ�ͽ�һ�������ر�ע��scanf,printf��עf��format,printf�����ַ��ͺ�����ʽ��ͨ�Ķ�scanf��ͨ�ã�
//   ע��printf�������ʽ��scanf�������ʽ ��ע������� ��.  
//        scanf����Ҫע��ļ������⣺ 1 ����ʱҪ��printf���������������ʾ
//                                    2 ��Ҫ������ַ�� & 
//                                    3 %d��%f����ʱ�������ö��ţ��ո�������ַ������ǵ���������һ������
//                                    4 %c ����ʱֻ������һ���ַ������ҿո��ת���ַ�����Ϊ��Ч�ַ������ 
//                                    5 ����������ݽ�����scanf�������ַ���getchar(),�ַ�����gets() 
//   putchar(����),getchar(),puts,gets,scanf,printf 

// 2.������Ƶ�һ�㲽�裺1 ����˵��  ����֪��Щ���ݣ���Ҫ������Щ������������ʲô�� 
//                       2 ������ֵ  ȷ������ֵ�ķ����г�ʼ��������¼�룬����ͨ������õ���
//                       3 �ӹ�����  ���ȼ���ʲô�������ʲô����û�й̶��㷨��
//                       4 ������  ȷ����ʾ��Ϣ 


// exp3-1 ��������ַ�  �����ŵ�ֱ�����ַ����������ŵ��Ǳ��� 
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

 //  exp3-2 ʹ��getchar()�Ӽ�����������������뵥���ַ� 
 # include"stdio.h"
 int main()
 {
 	char c;
 	printf("please input a character:\n");
 	c = getchar();
 	putchar(c);
 	putchar('\n');                       // ���� 
 	putchar(getchar());                 // ע�⣡������ 
 	putchar('\n');
	printf("%c",getchar());             //ע�⣡������ 
 	return 0;
} 

// exp3-3 �з��ŵ�ʮ�������������ʽ printf���������ʽ
#include"stdio.h"
int main()
{
	int a = 98;
	printf("a=%d,%o,%x,%u,%c\n",a,a,a,a,a);
	return 0;
 } 

// exp3-4 �з��������Ϊ�޷�����
#include"stdio.h"
int main()
{
	int b = -2;
	printf("b=%d,%o,%x,%u\n",b,b,b,b);
	return 0 ;
 } 

// exp3-5 �ַ����ݵ����
# include"stdio.h"
int main()
{
	char a,b;
	a = 120;
	b = 121;
	printf("%c,%c\n",a,b);
	printf("%d,%d\n",a,b);
	printf("%c,%c\n",a-32,b-32);   // ע��������ĸ��Сдת���ķ��� �������������������� 
	return 0;                      // ����һ�ּ��ܷ�����һ���ַ����������������õ������ַ��������� 
 } 

//exp3-6 
#include"stdio.h"   ����ַ���ASCII 
int main()
{
	int a = 3, b = 4;
	char c = 'A';
	printf("a=%2d,b=%2d\n",a,b);
	printf("Letter %c and ASCII: %d",c,c);
	return 0;
} 

// exp3-7 ���ӷ��Ļ��ʹ��        !!!!!!!!!!!
#include"stdio.h"
int main()
{
	int a = 15;
	float b = 123.1234567;
	double c = 12345678.1234567;
	char d = 'p';
	printf("a=%d,%5d,%o,%x\n",a,a,a,a);      //���ڽ��Ƶ�ת��ֱ���������ʽ�е�һ�¾Ϳ��ԣ������������������� 
	printf("b=%f,%lf,%5.4lf,%e\n",b,b,b,b);
	printf("c=%lf,%f,%8.4lf\n",c,c,c);
	printf("d=%c,%8c\n",d,d);
	return 0;
 } 

// exp3-  ʹ��scanf����Ҫע��ļ�������
#include"stdio.h"
int main()
{
	int a,b;
	char c,d;
	scanf("%d%d",&a,&b);
	scanf("%d,%d",&a,&b);
	//scanf("a=%d",&a);
	scanf("%d\n%d",&a,&b);
	
	scanf("%c%c",&c,&d);     // ʹ��%c����  һ����ע�⣩  �ַ�ʱ���ո��ת���ַ�����Ϊ��Ч�ַ����� 
	printf("%c %c",c,d);
 } 

// exp3-9  �����������������
#include"stdio.h"
int main()
{
	int b;
	float a;
	printf("please input two numbers:\n");         // ע����������������û�������������һ����ʵ�ͣ��������ʵ�� 
	scanf("%f%d",&a,&b);
	printf("a=%f,b=%d,a/b=%f",a,b,a/b);
	return 0;
 } 

// exp3-10 �ˣ�ʮ��ʮ�����Ƶ�ת��
#include"stdio.h"
int main()
{
	int a,b,c;
	printf("please input three integers:\n");
	scanf("%d%o%x",&a,&b,&c);           // ���� 123 123 123 
	printf("%d %d %d",a,b,c);          //�����������ֱ�Ӽ�����̣��������ת������Сдת�������� 
	return 0 ;
 } 
 

//exp3-11 ��������˵�����ĳ��Ȳⶨ             sizeof()��������!!!!!!!!!
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

// exp3-12  ��������һ����λ�������������λ��ʮλ���Ͱ�λ������
#include"stdio.h"
int main()
{
	int num;
	printf("please input a three-digit integer number: \n");
	scanf("%d",&num);
	printf("%d %d %d",num/100,num/10%10,num%10);    // num/10%10��num%10 �õ��ر�� 
	return 0;                                       // ��λ��ʹ��ѡ���ѭ���ṹ 
 } 
*/ 

//exp3-14-1  printf��������ֵ˳��                ���ʽǰ����������Ҫ�ֿ��������Ҫдһ�𣡣������� 
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













 
 
 
 
 
