/* 
// �������ͣ�����������ʽ:

// 1.���������г����ͱ����������� �����������ͣ�ʵ�ͣ��ַ��ͣ��ַ����� 

// 2.�����   ���������ע�����1 ����������������ȡ�̵��������� ����5/4=1 
//                                2 �����ģ����Ҫ��������Ϊ���ͺ��ַ��ͣ��������ķ����뱻������ͬ 
//                                3  + - * / �����У�ֻҪ��һ�����������ʵ�����ݣ����ҲΪʵ�����ݣ� 
//            �Լ���ֵ���������ϵ���߼���������ָ�룬�±�������ȵȣ�����Ҳ����Ҫ 
// exp2-1 ��Բ�������������
# include"stdio.h"
# define PI 3.14159  // û�еȺ� 
int main()
{
	float r, area, volume;
	r = 2.5;
	area = PI * r * r;
	volume = 4.0/3 * PI * r * r * r;
	printf("area = %f, volume = %f\n", area, volume);
	return 0;
}

// exp2-2 ת���ַ����Ƹ�ʽ
# include "stdio.h"
int main()
{
	printf(" ab c\tde\t\"\\f\tg\n");
	printf("book\tR\bS\n");       // ע��\b���˸񣬻����һ������Ϣ������ 
	return 0;
 } 
 
// exp2-3 ���ͱ����Ķ�����ʹ��
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
 
 // exp2-4 �������ݵ���� 
# include "stdio.h"
int main()
{
	int x, y;
	x = 2147483647;
	y = x + 1;
	printf("y = %d",y);
	return 0;
	
 } 

// exp2-5 ʵ�ͱ����Ķ�����ʹ��
# include"stdio.h"
int main()
{	float x;     // float �ǵ����ȣ�����λ��Ч���� 
	double y,z,m;
	x = 12.35;
	y = -24.2;
	z = x + y;
	m = x * y;
	printf("x + y = %f, x * y = %f\n",z,m);
	return 0;   
	 
 } 
 
 // exp2-6 ʵ�����ݵľ���
 # include"stdio.h"
 int main()
 {	
 	float x;
 	double y;
 	x = 123456789.123;
 	y = 123456789123456789.123;
 	printf("x = %f,y = %f",x,y);  //ǰ�漸λ��ȷ�����漸λ�Ͷ�ʧ�ˣ���������� 
 	return 0;
  } 
 
// exp2-7 ʵ�����ݵ�������x,y����Ϊ�������ͱ���)
# include"stdio.h"
int main()
{
	float x,y;
	x = 123456789.123e3;
	y = x + 10;
	printf("y = %f\n",y);   //���ǰ��λ�Ǿ�ȷ�ģ�����ͱ����������� 
	return 0;
 } 

// exp2-8 ʵ�����ݵ�������x,y����Ϊ˫�����ͱ�����
# include"stdio.h"
int main()
{
	double x, y;
	x = 123456789.123e3;
	y = x + 10;
	printf("y = %f",y);
	return 0;
 } 

 // exp2-9 �ַ������Ķ�����ʹ��
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
 
 // exp2-10 �ַ����ݺ��������ݵ�ͨ����   ������ʾ�ַ���ASCII�� 
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

 // exp2-11 ��ĸ�Ĵ�Сдת��
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

//  exp2-11-1  ע������Ľ����ʾ������������С�� 
# include"stdio.h"
int main()
{
	float x, y;
	x = 2.3/1.2;
	y = 3/2;
	printf("%f  %f",x,y);
	return 0;
 } 

// exp2-12 �����Լ��Ĳ���(ע��i��ֵ�� -i++ �ȼ���-(i++) 
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

//exp2-13   ���ű��ʽ��Ӧ�þ��� 
#include"stdio.h"
int main()
{
	int m, n, k, x, y;
	m = 3;
	n = 2;
	k = 6;
	x = ((y = m -n), (m * k));    //���ʽ 2 ��ֵ��Ϊ�������ű��ʽ��ֵ 
	printf("y = %d, x = %d\n",y,x);
	return 0; 
}

// exp2-14   ���ʽ�в�ͬ��������֮���ת�� 
#include"stdio.h"
int main()
{
	int x = 3;
	float y = 2.5;
	double z = 2.9, m;
	long n = 6;
	m = x + '*' - x/y + z * n;      //  *��ASCII��Ϊ46 
	printf("m = %f\n",m);
	return 0;
 } 

//exp 2-15   ��ֵ���ʽ�е��������͵�ת��  ע�� ������Ϊ׼
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
//exp 2-17   �������͵�ǿ��ת��
# include"stdio.h"
int main()
{
	int x, y = 3;
	float z = 17.8;
	x = (int)(z+3.4) % y;
	printf("x = %d\n",x);
	return 0;
 } 

