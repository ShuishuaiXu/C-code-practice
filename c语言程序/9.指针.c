/*
*	�ھ��£�ָ��      1. ָ��ĸ���
*                     2. ������ָ�루��ַ�� �� ָ�������ָ�����  
*                     3. �����ָ�루��ַ�� �� ָ�������ָ�����  ��������ࣩ 
*                     4. �ַ�����ָ�� �� ��ָ���ַ�����ָ�����
*                     5. ������ָ�����
*                     6. ָ���ͺ���
*                     7. ָ�������ָ��ָ���ָ��
*                     8. С��
*                     9. ע������

*     1. ָ��ĸ�� 1.ָ����ʵ���ǵ�ַ����һ���������͡�
*                     2.��ָ�������Ϊָ���ǵ�ַ����˿��Ա�ʾ�������ݽṹ���ܷܺ����ʹ��������ַ�����

*     2. ������ָ���ָ�������ָ����������壬���ã�ָ�������Ϊ�������� 
*                     1. ָ������Ķ��壺 1.ע���ʼ���͸�ֵ����������  �Ӳ��� * 
*                                         2.����ʱ*��������ͨ������ָ�����������ʱ����ָ��������� 
*                                         3. ������ֱ�����ã�ͨ���������� �� ������ã�ͨ��ָ��Ҳ���ǵ�ַ�� 

*     3. �����ָ���ָ�������ָ�������
*                      1.ָ������Ԫ�ص�ָ�룺 ע������������������׵�ַ��������������һ��ָ�� 
*                      2.����Ԫ�ص����ã� 1.���ָ�����p��ָ�������е�һ��Ԫ�أ���p+1ָ����������һ��Ԫ�� 
*                                         2.����һ������Ԫ�ص����ַ������±귨a[i] �� ָ�뷨*(a+i)�� *(p+i) (����p = a) 
*                                         3.ע��ָ�������    ��p++,p-- 
*                      3.����������Ϊ���������� 
*                                         1.ʵ��������β����鹲��ͬһ���ڴ浥Ԫ 
*                                         2.��ָ���������������鶼�Ǵ���ĵ�ַ�������ǣ��������ú���ʱ����д * 
*                                         3.����������Ϊ�������������ַ�����ʵ�κ��βθ���������������ָ�������������ô����ʵ�ζ���������׵�ַ 
*                      4.��ά�����ָ���ָ���ά�����ָ����� 
*                                         1.��ά����ĵ�ַ��1��ά������Էֽ�Ϊ���һά���� 
*                                                           2.int a[3][4];��ôa+1������ǵڶ��е��׵�ַ��&a[1][0],a[1] 
*                                                           3.��ά������һά����Ĳ�ͬ���ڶ�ά������*a�ȼ���a 
*                                                           4.�ڶ�ά�����У�a[i],&a[i],*(a+i),a+i,&a[i][0] ����ʾa��i��0��Ԫ�ص��׵�ַ 
*                                         2.ָ���ά�����ָ�����  int (*p)[4]  ���Ų����٣�4ָ���Ƕ�ά������������������� 

*      4.�ַ�����ָ���ָ���ַ�����ָ�������
*                      1.�ַ������ʣ� 1.���ַ����������ַ�����1ʹ���ַ����飬2 ʹ���ַ���ָ�루�������㣩 
*                                     			  ����ַ�����1ʹ�ö�ά�ַ����� 2.ʹ��ָ������ 
*                                     2.�ַ���ָ����ַ�����һ����%s�����ʱ���ü�* ������������ 
*                      2.�ַ���ָ��������ַ�����������ַ���ָ�������ŵ����׵�ַ������'\0'���������ַ������ŵ��������ַ�����'\0' 

*      5.ָ������ָ����� ��1.���������Ǻ�����ռ�ڴ������׵�ַ   ע����ʽ��int (*p)()  ���ά�����ָ����������� 

*      6.ָ���κ���   1. ����ֵΪָ��ĺ�����ָ���ͺ��� 

*      7.ָ�������ָ��ָ���ָ�� 
*                      1.ָ�����飺 1.ָ��������Ҫ������ʾ��ά����ģ��ر��Ƕ���ַ��� �������� 
*                                   2.ָ�������ʾ���ַ��������ò��ü�* 
*                      2.ָ��ָ���ָ�룺 1.����char **p ,   �ڶ�ά������ ������a����ָ��ָ���ָ�� ������������ 
*                                         2.����ָ�������У�name+1 �� name[0+1] �ĵ�ַ 

*     9.ע����� ����ע�� ���ڱ�������������ָ��Ķ��壬���ã�����Ϊ�����Ĳ��������� 
*                  1.���ڶ��壺ָ��ĳ�ʼֵ�͸�ֵ�Ĳ�ͬҪע�� 
*                  2.�������ã�һ���Ǳ���������Ԫ�أ�ֱ�����ã�һ����ͨ��ָ�뼴�������ǵĵ�ַ�������á�
*                  3.����������Ϊ�������������ַ�����ʵ�κ��βθ���������������ָ�������������ô����ʵ�ζ���������׵�ַ 

*                  4.��ַ��һ���ֽ�һ����ţ������ָ�����ָ���Int�ͣ���ռ��4���ֽڣ����´μ�1��������ڴ�ļ�4�������������Ҫ��Ϊע�⡣ 
*                  5.����ʱ*��������ͨ������ָ�����������ʱ����ָ��������� 
*                  6.ע��ֻ��ͬΪָ�����Ͳ��ܽ������㣬������Ҳ����ָ������ 
*                  7.ע���ά������һά�����ڵ�ַ����Ĳ�ͬ ,��ά������*��Ҫ���ǵ�Ҫ��ʾ�ڼ��еڼ��е�Ԫ�� �� *(*(p+i)+j) 
*                  8.ָ�루����������Ϊ��������ʱ�����ֲ�ͬ�����Ƕ�����һ���ڴ棬���Բ��÷���ֵ 
*                  9.ָ�������δȡ��ȷ����ַǰʹ�ú������������ 

*           ���ָ��������� 
*                 10.ע���ά�����ָ�������������ָ�������ָ�뺯���Ķ�����÷������� ������������ 
*                 11.ָ����������飬��ά���飬�ַ�����������ָ���ָ�����             
*                 12.ָ�������ָ�����飬ָ���ͺ���      ���������Ҫѧ�����֣���������
*                 13.ָ��ʲô�ģ�����������һ���������Ķ����ַ�йأ��������Ƿ���ֵ�ǵ�ַ��������Ǵ洢���ǵ�ַ
*                 14.��ָ��ʲô��ָ�������˵����ָ��ָ�����ʲô�� 
*                 15.�ڶ�ά�����У�a[i],&a[i],*(a+i),a+i,&a[i][0] ����ʾa��i��0��Ԫ�ص��׵�ַ 
*                 16.ע������һά����Ͷ�ά�����ָ���ʾ�Ĳ�ͬ����Ӳ��� *��a[i]��ʾ������ѽ�ȣ�
*                 17.ע���ά����������ͻ����ַ��� �����ߵ����õ����� 
*                 18.ָ���ʾ���ַ�������* 

*/

/* exp9-1 ����ָ��������ʱ��� */
/* 
#include"stdio.h"
int main()
{
	int a = 10, *p ;                    // ���� * �ڶ���ʱʱ����ָ���������ͨ���� 
	p = &a;                            // ע�� & �ǵ�ַ���������˼�ǰ� a �ĵ�ַ�� p 
	printf("%d\n",*p);                 // ���� * ��ָ��������� *p ��˼��ָ���ַΪ p �Ķ��� 
	return 0;
 } 
*/

/* exp9-2 ����ָ������/���ʵ������  */
/* 
#include"stdio.h"
int main()
{
	float x, *px = &x;                      //������������Ϊ���� *px �������ָ�룬�ǵ�ַ 
	printf("please input a number: ");
	scanf("%f",&x);
	printf("x = %.2f\n",*px);
	return 0;
 } 
*/

/* exp9-3  ��������ָ�������ָ���ֵ */
/* 
#include"stdio.h"
int main()
{
	int x = 10, y = 20, t;
	int *px = &x, *py = &y;
	
	t = *px;                              //����ָ������������ֵ 
	*px = *py;
	*py = t;
	
	printf("*px = %d, *py = %d\n", *py, *py);  // ������Ǹ���ָ���ַ��洢��ֵ 
	printf("x = %d, y = %d\n", x, y);
	printf("%d,%d",px,py);                    // ������� x,y �ĵ�ַ 
	return 0; 
 } 
*/

/* exp9-4 ����ָ�����ʵ���������������� */
/* 
#include"stdio.h"
int main()
{
	int n1,n2;
	int *p, *n1_p = &n1,*n2_p = &n2;         
	printf("please input two numbers: ");
	scanf("%d%d",&n1,&n2);
	printf("n1 = %d,n2 = %d\n",n1,n2);
	if(*n1_p > *n2_p)
	{
		p = n1_p;                        //������ָ������ĵ�ַ 
		n1_p = n2_p;                     // p ���Զ���Ϊָ�������Ҳ��������ͨ�ı��� ,������ָ����� 
		n2_p = p;
	}
	printf("min = %d,max = %d\n", *n1_p,*n2_p);
	printf("n1 = %d,n2 = %d\n",n1,n2);
	return 0;
 } 
*/

/* exp9-5-1 ����ָ�������Ϊ����������������������ֵ����� */
/* 
#include"stdio.h"
int main()
{
	void exchange(int *p1, int *p2);
	int a,b;
	int *pa = &a, *pb = &b;
	printf("Please input two integer: ");
	scanf("%d%d",&a,&b);
	printf("Before exchange : %d  %d\n",a,b);
	exchange(pa,pb);                                 //����Ҫע��һ�£�û��* 
	printf("After exchange : %d  %d\n",a,b);
	return 0; 
 } 

void exchange(int *p1, int *p2)
{
	int n;
	n = *p1;
	*p1 = *p2;                      //�������ǵ�ַ�ڵ�ֵ��ʵ���ϵ�ͬ��a��b��ֵ���� 
	*p2 = n;
}
*/

/* exp9-5-2  */
/* 
#include"stdio.h"
int main()
{
	void exchange(int *p1, int *p2);
	int a,b;
	int *pa = &a, *pb = &b;
	printf("Please input two integer: ");
	scanf("%d%d",&a,&b);
	printf("Before exchange : %d  %d\n",a,b);
	exchange(pa,pb);                                 //����Ҫע��һ�£�û��* 
	printf("After exchange : %d  %d\n",a,b);
	return 0; 
 } 

void exchange(int *p1, int *p2)
{
	int *n;                                         // ���ｻ����ֻ��p1��p2��ָ���ĵ�ַ��pa��pb��û�л���ע�⣡���������� 
	n = p1;
	p1 = p2;
	p2 = n;
 } 
*/

/* exp9-6 ��������е�ȫ��Ԫ��  �±귨  */
/*
#include"stdio.h"
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
		a[i] = i;
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,a[i]);
	return 0; 
 } 
*/

/* exp9-7 ��������е�ȫ��Ԫ�أ�ͨ������������Ԫ�ص��׵�ַ���ҳ�Ԫ�ص�ֵ  */
/*
#include"stdio.h"
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
		*(a+i) = i;
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,*(a+i));
	return 0;
 } 
*/
/* exp9-8 ��������е�ȫ��Ԫ�� ��ָ�����ָ��ָ�� */
/*
#include"stdio.h"
int main()
{
	int a[10],i,*p;
	p = a;              // �ȼ��� p = &a[0]
	for(i=0;i<10;i++)
		*(p+i) = i;
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,*(p+i));
	return 0; 
} 
*/
/* exp9-9 ע�� *p++������  */       //Ҫע��ָ���������ָ��a[9]Ԫ�غ�����ڴ浥Ԫ��ϵͳ����Ϊ�Ƿ� 
/* 
#include"stdio.h"
int main()
{
	int  i , a[10],  *p = &a[0] ;
	for(i=0;i<10;i++)
		*p++ = i;                //�ȼ��� *p = i; p = p + 1
	//p = a;                //  ʹָ�����p����ָ������a���׵�ַ	
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,*p++);
	return 0;	
 } 
*/

/* exp9-10  ����������Ϊ����������ɼ�ƽ��ֵ  ���ﴫ������׵�ַ */
/*
#include"stdio.h"
float aver(float *pa); 
int main()
{
	float score[5],average, *sp;
	int i;
	sp = score;
	printf("Please input five scores: ");
	for(i=0;i<5;i++)
		//scanf("%f",&score[i]);
		scanf("%f",sp++);
	sp = &score[0];
	average = aver(sp);
	printf("average score is %5.2f\n",average);
	return 0;
 } 
float aver(float *pa)
{
	int i;
	float av,sum = 0;
	for(i=0;i<5;i++)
		sum = sum + *pa++;
	av = sum /5;
	return av;
}
*/
/* exp9-11 ������a�е������෴��˳��� */
/* 
#include"stdio.h"

void invert(int array[],int n)
{
	int i,j,m = (n-1)/2;                //ע�⵱ȡһ��ʱ���ж����� 
	int temp;
	for(i=0;i<=m;i++)
	{
		j = n-i-1;                      
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;                         //��Ϊʵ��������β����鹲��ͬһ���ڴ浥Ԫ�����Զ�����Ĳ�������Ҫ����ֵ 
	}
}

int main()
{
	int a[11] = {1,2,3,4,5,6,7,8,9,10,11};
	int i;
	printf("Before invert: \n");
	for(i=0;i<11;i++)
		printf("%3d",a[i]);
	printf("\n");
	invert(a,11);
	printf("After invert: \n");
	for(i=0;i<11;i++)
		printf("%3d",a[i]);
	return 0; 
 } 
*/
/* exp9-12 �������к������β���������Ϊָ����� */
/* 
#include"stdio.h"
void invert(int *x, int n)
{
	int *i,*j,*p;
	int temp;
	i = x;
	j = x + n - 1;
	p = x + (n-1)/2;              //ע��ָ��ļӼ���ָ�Ӽ���������ָ�������͵��ֽ�
	for(;i<=p;i++,j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;                //��������ָ�������һ��ָ���Ǽ� * ������ 
	 } 
	
}

int main()
{
	int a[10];
	int *p;
	int i;
	p = a; 
	for(i=0;i<10;i++)
		*p++ = i + 1;
	p = a;
	printf("Before invert : ");
	for(i=0;i<10;i++)
		printf("%3d",*p++);
	p = &a[0];
	printf("\n");
	invert(p,10);
	printf("After invert: ");
	for(i=0;i<10;i++)
		printf("%3d",a[i]);	
} 
*/
/* exp9-13 ��ʮ�������ҳ����е����ֵ����Сֵ  */
/*
#include"stdio.h"
 int max,min;

void max_min_value(int array[],int n)
{
	int *p;
	max = min = *array;             //������ָ�����׸�����Ԫ�صĵ�ַ������*array����array[0] 
	for(p=array+1;p<array+n;p++)
	{
		if(*p>max)
			max = *p;
		else if(*p<min)
			min = *p;
	}
}
int main()
{
	int a[10],i;
	printf("Please enter 10 integer numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max_min_value(a,10);
	printf("\nmax = %d,min = %d",max,min);
	return 0;
}
*/
/* exp 9-14 ʹ��ָ��������ݵ�ַ  */
/* 
#include"stdio.h"
int max,min;                // ȫ�ֱ��� 

void max_min_value(int *p,int n)
{
	int *q;
	max = min = *p;
	for(q=p+1;q<p+n;q++)
	{
		if(*q>max)
			max = *q;
		else if(*q<min)
			min = *q;
	 }
}
int main()
{
	int a[10],*p,i;
	printf("Please input 10 integer numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	p = a;            // ʹ��pָ������a
	max_min_value(p,10);
	printf("\nmax = %d,min = %d",max,min);
	return 0; 
}
*/
/*  exp9-15 ��ʵ��ָ�������д��n���������෴��˳���� */
/* 
#include"stdio.h"
void invert(int *pa,int n)
{
	int temp, m = (n-1)/2;
	int *i,*k, *p;
	i = pa; k = pa + n - 1; p = pa + m;       //���õ�һλ�����һλ���м�һλ��ע���м�һλ��ֵ��Ҫ��Ҫ��һ�� 
	for(;i<=p;i++,k--)                         //ע��ֻ��ͬΪָ����ܽ������㣬������Ҳ��ָ�� 
	{
		temp = *i; *i = *k; *k = temp;
	}
}

int main() 
{
	int i,a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p ;
	p = a; 
	printf("Before invert : ");
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
	printf("\n");
	invert(p,10);
	printf("After invert : ");
	for(p=a;p<a+10;p++)
		printf("%3d",*p);
	return 0;
 } 
*/
/* exp9-16  ��ѡ�񷨶�ʮ����������  */
/* 
#include"stdio.h"
void sort(int *pa, int n)
{
	int i,j,t;
	int temp;
	for(i=0;i<n-1;i++)
	{
		t = i;
		for(j=i+1;j<n;j++)
		{
			if(*(pa+t)>*(pa+j))
				t = j;
		}
		if(t!=i)                  //�����������һ�� 
		{
			temp = *(pa+i);
			*(pa+i) = *(pa+t);     // ע���� i �� t �ıȽϣ������� t �� j �ıȽ� 
			*(pa+t) = temp;
		}
	}
}
int main()
{
	int a[10] = {0,1,3,5,7,8,4,7,16,10};
	int *p = &a[0];
	int i;
	printf("Before sort: ");
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
	printf("\n");
	sort(p,10);
	printf("After sort: ");
	for(i=0,p=a;i<10;i++)
		printf("%3d",*p++);
	return 0;
}
*/
/* exp9-17 */
/* 
#include"stdio.h"
int main()
{
	int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	printf("%d\n",a);                  //��ά�����1�е��׵�ַ
	printf("%d\n",*a);                 
	printf("%d\n",a[0]);
	printf("%d\n",&a[0]);
	printf("%d\n\n",&a[0][0]);
	printf("%d\n",a+1);                 //��ά�����2�е��׵�ַ 
	printf("%d\n",*(a+1));
	printf("%d\n",a[1]);
	printf("%d\n",&a[1]);
	printf("%d\n\n",&a[1][0]);
	printf("%d\n",a+2);               // ��ά�����3�е��׵�ַ
	printf("%d\n",*(a+2));
	printf("%d\n",a[2]);
	printf("%d\n",&a[2]);
	printf("%d\n\n",&a[2][0]);
	printf("%d\n",a[1]+1);           //�����2�еĵ�2��Ԫ�صĵ�ַ 
	printf("%d\n",*(a+1)+1);           //�����2�еĵ�2��Ԫ�صĵ�ַ
	printf("%d,%d",*(a[1]+1),*(*(a+1)+1));    // ����������ֵ�ַָ���Ԫ�ص�ֵ 
	return 0; 
}
*/
/* exp9-18  ��ָ�������ά���� */
/*
#include"stdio.h"
int main()
{
	int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int (*p)[4];                  //ע�����ű���ӣ�����4��ʾ���Ƕ�ά������������������� 
	int i,j;
	p = a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%3d   ",*(*(p+i)+j));
		printf("\n"); 
	 } 
	return 0;
 }
*/
/* exp9-19 ���ַ�������һ���ַ�����Ȼ��������ַ��� */
/*
#include"stdio.h"
int main()
{
	char string[] = "I love China !";
	printf("%s\n",string);
	return 0;
 } 
 */
/* exp9-20 ���ַ���ָ��ָ��һ���ַ�����Ȼ��������ַ��� */
/* 
#include"stdio.h"
int main()
{
	char *string = "I love China !";
	printf("%s\n",string);               // ע��������ַ�ָ�벻һ��������û��*��������һ�� 
	return 0;
 } 
*/
/* exp9-21 ����ַ��� n ���ַ���������ַ� */
/* 
#include"stdio.h"
int main()
{
	char *ps = "I am a boy";
	int n = 7;
	ps = ps + n;
	printf("%s\n",ps);                 //    ��ʵps����һ���ַ������׵�ַ�������ʱ��ϵͳ�ж�'\0'Ϊ���������� 
	return 0; 
 } 
*/
/*9-22 ��������ַ����в��������ַ�'k'  */
/* 
#include"stdio.h"
int main()
{
	char s[20],*ps;
	int i;
	printf("Please input a string: ");
	ps = s;
	gets(s);
	for(i=0;ps[i]!='\0';i++)             //�����������ã���psָ�����һλ����ʱ��ps[i]�ʹ������� 
	{
		if(ps[i] == 'k')
		break;
	}
	if(ps[i]=='\0')
		printf("There is no 'k' in the string\n");
	else
		printf("yes!");
	return 0;
 } 
*/
/* exp9-23 ���ַ���ָ����Ϊ������������һ���ַ��������ݸ��Ƶ���һ���ַ����У�����ʹ��strcpy���� */
/* 
#include"stdio.h"
void cpystr(char *sa,char *sb)
{
	while((*sb = *sa) != '\0')         //���Ի��� {while((*sb++ = *sa++) != '\0')   ;} 
	{
		sb++;
		sa++;
	}
}
int main()
{
	int *pa = "how are you",b[1],*pb;
	pb = b;
	cpystr(pa,pb);
	printf("string a = %s   b = %s",pa,pb);
	return 0; 
 } 
*/
/* exp9-24 ��ָ����ʽʵ�ֶԺ����ĵ��÷���  */
/* 
#include"stdio.h"
int main()
{
	int max(int , int );
	int (*pmax)();               // ����ָ������Ķ��壬ע�����Ŷ����ܹ��� 
	int x,y,z;
	pmax = max;                 //�����׵�ַ���Ƹ�ָ�����
	printf("Please input two numbers: ");
	scanf("%d%d",&x,&y);
	z = (*pmax)(x,y);               // ע��ָ������Ժ��������� ���ź�*�������� 
	printf("max = %d",z);
	return 0; 
 } 
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
*/
/*exp9-25 ͨ��ָ�뺯��������һ��1~7�������������Ӧ�������� */
/* 
#include"stdio.h"
#include"stdlib.h"                //����exit(1) Ҫ�������ͷ�ļ� 
int main()
{
	int i ;
	char *day_name(int n);
	printf("input Day Number: ");
	scanf("%d",&i);
	if(i<0)
		exit(1);                                   //���������˳�������Ҫ����#include"stdlib.h" 
	printf("Day Number:%2d-->%s\n",i,
	day_name(i));   //ע����Ϊ��������ֵ��һ���ַ������׵�ַ������������ü�* 
	return 0; 
} 

char *day_name( int n)
{
	char *week[] = {                                         //ָ�����飬������ȫ�ǵ�ַ 
	"Wrong day","Monday","Tuesday","Wednesday",
	"Thursday","Friday","Saturday","Sunday"};
	return ((n<1||n>7)?week[0]:week[n]);            //��������õĺ� 
}
*/
/* exp9-26 ��һ��ָ��������ָ��һ����ά����  */
/* 
#include"stdio.h"
int main()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int *pa[3] = {a[0],a[1],a[2]};
	int *p = a[0];
	int i;
	for(i=0;i<3;i++)
		printf("%d,%d,%d\n",a[i][2-i],*a[i],*(*(a+i)+i));    //*a[i]��ʾi��0��Ԫ��ֵ�� 
	printf("\n");
	for(i=0;i<3;i++)
		printf("%d,%d,%d\n",*pa[i],p[i],*(p+i));            //p[i]�ȼ���a[i] 
	return 0;
 } 
*/
/* exp9-27 ָ��������Ϊָ���ͺ�������  */
/* 
#include"stdio.h"
#include"stdlib.h"
int main()
{
	static char * week[] = {"Illegal day","Monday",          //ָ���ַ�����ָ������ 
					"Tuesday","Wednesday","Thursday",
						"Friday","Saturday","Sunday"};
	char *ps;
	int i;
	char *day_name(char *name[],int n);
	printf("input Day number: ");
	scanf("%d",&i);
	if(i<0)
		exit(1);                     // ����ֵΪ1������0 
	ps = day_name(week,i);                      //Ҫע��Ҫ��Ҫ�� * ��[]
	printf("Day number: %2d-->%s\n",i,ps);
	return 0; 
 } 
char *day_name(char *name[],int n)
{
	char *p1,*p2;
	p1 = * name;
	p2 = * (name + n);
	return ((n<1||n>7)?p1:p2);
}
*/
/* exp 9-28 ����5������������ĸ˳�����к���� ��ָ�������ʾ���ַ���*/
/* 
#include"stdio.h"
#include"string.h"
int main()
{
	void sort(char *name[],int n);
	void print(char *name[],int n);
	static char *name[5] = {"CHINA","AMERICA","AUSTRALIA","FRANCE","GERMAN"};
	sort(name,5);
	print(name,5);
	return 0;
}
void sort(char *name[],int n)
{
	char *pt;
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k = i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[k],name[j])>0)       //strcmp�����ǰ�ASCII����Ƚ��ַ����ģ����Ҫע�� 
				k = j;
		}
		if(i!=k)
		{
			pt = name[i]; name[i] = name[k]; name[k] = pt;   //����ע�⣬���ｻ�����ǵ�ַ 
		 } 
	}
}
void print(char *name[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",name[i]);             ////��%sʱ��name[k]����ַ�������%dʱ������ĵ�ַ��ƽ�������Ҳ�ǵ�ַ  
}
*/ 
/* exp9-29 ʹ��ָ��ָ���ָ��  */

#include"stdio.h"
int main()
{
	char *name[] = {"Beijinng","Shanghai","Guangzhou","Shenzhen","Tianjin"};
	char **p;        // ָ��ָ���ָ����� 
	int i;
	for(i=0;i<5;i++)
	{
		p = name + i;
		printf("%s\n",*p);
		printf("%o\n",*p);
		printf("%d\n",*p);
	}
	return 0;
 } 






















