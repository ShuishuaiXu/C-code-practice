/*

*         �����£����飺   1.��������� 
*                          2. һά����
*                          3. ��ά����
*                          4. �ַ����� 
                
*               1.��������룺   ���� ������ ������ͬ���͵� ����

*               2.һά���飺���壬���ã��洢����ʼ��  Ӧ�ã�����ð������ѡ������ѡ������ı��Σ������ң�˳����ң��۰���ң����ұ����������ģ� 
*                        ע�⣺      1.�±�ͨ��Ϊ���ͣ���Ϊʵ�ͣ��Զ�ȡ��
*                                    2.C���Բ����±�Խ��ļ�飡������������������������
*                                    3.��������Ԫ�ؿ����໥��ֵ�������������鲻��ֱ�Ӹ�ֵ 
*                                    4.û�и�ֵ������Ԫ�أ�ϵͳĬ�ϰ�0���� 
*                                    5.��ʼ�����ڶ����ͬʱ�������Ǵ���� ���������������������� 
*                                    6.һά���鸳ֵ�����ַ�ʽ�������ʱ���ʼ����Ҫ������forѭ�� 
*                                    7.����forѭ����ֵiҪ��0��ʼ������������������������ 

*               3.��ά���飺  ע�⣺1.��ʼ������ʹ��a[3][3] = {{1,2,3},{1,2,3},{1,2,3}};��������a[3][3] = {1,2,3,1,2,3,1,2,3}; 
*                                   2.��ȫ��Ԫ�ظ�ֵʱ���ɲ�ָ����һά�Ĵ�С���г�ʼֵ��Ŀ�͵ڶ�άȷ����������ָ���ڶ�ά��С
*                                   3.ֻΪ����Ԫ�ظ���ֵ�������ô��������֣�û�г�ֵ��Ӧ�ĸ�0ֵ 

*               4.�ַ������飺  ���ֳ�ʼ�����������������%c,%s,gets()/puts()), ���õ��ַ��������� 
*                                         1.���ֳ�ʼ����char c[6] = {'C','h','i','n','a','\0'}(�����˼�'\0') ��6���Բ�д �� 
*                                                 char c[6] = {"china"}  (������ü�'\0',����Ҫע����6������5) ��6���Բ�д�� 
*                                         2.�ַ�������n���ַ�������ĳ���һ��Ϊn+1�����������һ�����'\0'. 
*                                         3.�ַ�����һ��Ҫע���Ǵ��㿪ʼ����strlen(a)����ʱ����Ҫ��һ
 
*              С�᣺������Ҫ��������ĳ�ʼ�������ã������������������������ƣ����򣬲����㷨���ַ���������������������Ķ���ʹ洢��ǰ�����ص㡣 
*/ 
/* exp6-1  �õ���ѭ������30λѧ���ĳɼ������������ƽ��ֵ��ѧ���ɼ� ,  ���������  */
/* 
#include"stdio.h"
#include"math.h"
int main()
{
	int i;
	float score,sum=0,ave;
	for(i=1;i<=3;i++)
	{
		printf("\nPlease input a score: ");
		scanf("%f",&score);
		sum = sum + score;
	}
	ave = sum / i;
	printf("ave = %f\n",ave);                       
	for(i=1;i<=3;i++)                              // �Ѿ�����������ݣ���Ҫ�� 
		{                            
			scanf("%f",&score);
			if(score>=ave)
				printf("\n%f",score);
		}
	return 0;
 } 
 
*/ 
/* exp һά����δ��������Ԫ�أ�ϵͳĬ��Ϊ��    */
/* 
#include"stdio.h"
int main()
{
	int i;
	int a[4] = {1,2};
	for(i = 0;i<4;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 
*/

/* exp6-2 ���õ���ѭ���㶨һά������������� */
/*
#include"stdio.h"
int main()
{
	int i;
	int a[10];
	
	printf("����ʮ������");
	for(i=0;i<10;i++)                     // i�Ǵ�0��ʼ��������<������<= ���������������������� 
		scanf("%d",&a[i]);
	printf("\n���ʮ������");
	for(i=0;i<10;i++)
		printf("%d ",a[i]); 
		
	return 0;
 } 
*/
/* exp6-3 ������ʵ��exp6-1 */
/*
#include"stdio.h"
int main() 
{
	int i,a[10];
	float sum=0,ave;
	printf("����ʮ���˵ĳɼ���"); 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]); 
		sum = sum + a[i];
	}
	ave = sum / (i+1);
	for(i=0;i<10;i++)
	{
		if(a[i]>=ave)
			printf("%d ",a[i]);
	}
	return 0;
}
*/
/* exp6-4 ��������fibonacciǰ20���ֵ */
/*
#include"stdio.h"
int main()
{
	int i,a[20] = {1,1};
	for(i=2;i<20;i++)
	{
		a[i] = a[i-2] + a[i-1];
	}
	for(i=0;i<20;i++)
	{
		if(i%4 == 0)                         //�����õĺã�ʹ�������������� 
			printf("\n");
		printf(" %4d ",a[i]);

	}
	return 0; 
	
 } 
*/
/* exp6-5 ����ʮ���������ҳ����ֵ����Сֵ�������Ƕ�Ӧ���±�ֵ�� ��max��min��ÿһ�����Ƚ� */
/* 
#include<stdio.h>
int main()
{
	int i,j,k,max,min,a[10];
	printf("Please input ten integers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max = min = a[0];               // max��min Ҫ����ֵ 
	j = k = 0;                      // j,kҲҪ����ֵ 
	for(i=1;i<10;i++)                        
	{
		if(a[i]>max)
		{
			max = a[i];
			j = i;
		}
		if(a[i]<min)
		{
			min = a[i];
			k = i;
		}
	}
	printf("\nThe biggest number is %d,its subscript is %d .",max,j);
	printf("\nThe smallest number a[%d] is %d .",k,min);
	return 0 ; 
 } 
*/
/* exp6-6 ��ð�ݷ���ʮ�����������������������Ƚϣ�����������ź��� */
/* 
#include"stdio.h"
int main()
{
	int a[10];
	int i,k;
	int t;
	printf("����ǰ������Ϊ��");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(k=0;k<9;k++)                       // ����Ҫ9�ֱȽ� 
	{
		for(i=0;i<(9-k);i++)              //����ע���i�ֹ���Ҫ9-i�αȽ� 
		{
			if(a[i]>a[i+1])               //   ����Ԫ�صĽ��� 
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;	
			}
		}
	}
	
	printf("\n����������Ϊ��");
	for(i=0;i<10;i++)
		printf(" %d ",a[i]);
	return 0;
 } 
*/
/* exp6-6-2 ѡ������ ÿ�ν���һλ�������Ƚϣ���С���������� */
/* 
#include"stdio.h"
int main()
{
	int i,j;
	int a[10];
	int t;
	printf("����ǰ�����飺");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<9;i++)                    //��ѭ�����ƱȽ����� 
	{
		for(j=i+1;j<10;j++)           //��ѭ������ÿ�ֱȽϴ��� 
		{
			if(a[i]>a[j])              //ע��Ƚϣ���a[i]��a[j]�� 
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			} 
		}
	}
	
	printf("\n���������飺");
	for(i=0;i<10;i++)
		printf(" %d ",a[i]);
	return 0;
 } 
*/
/* exp6-6-3 ѡ�����򷨵ı���  �м�������±껻��ÿ��ѭ������Ԫ�ؽ�����һ�� */
/*
#include"stdio.h"
int main()
{
	int i,j,k;
	int a[10];
	int t;
	printf("����ǰ�����飺");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		j = i;                     //����С����λ�� 
		for(k=i+1;k<10;k++)
		{
			if(a[j]>a[k])
				j = k;              //��������������С����λ�� 
		}
		t = a[i];
		a[i] = a[j];                //ÿ��ѭ������Ԫ�ؽ�����һ�� 
		a[j] = t; 
	}
	printf("���������飺");
	for(i=0;i<10;i++)
		printf(" %d ",a[i]);
 } 
*/
/* exp6-7  ����һ�������ж��Ƿ���һ�����������С� ���۰���ң�Ҫ���������� */
/* 
#include"stdio.h"

#define M 10
int main()
{
	int a[M] = {-12,0,6,16,23,56,80,100,110,115};            //����� ������ĳ�ʼ��ֻ���ڶ����л���forѭ�� 
	int n, low, mid, high, found;
	low = 0,high = M - 1; 
	found = 0;
	printf("Please input a number to be searched: ");
	scanf("%d",&n);
	
	while(low <= high)                  //  ע��������<=  ���������������� 
	{
		mid = (low + high)/2;
		if(n==a[mid])
		{
			found = 1;
			break;
		}
		else if(n<a[mid])
		{
			high = mid - 1;            //ע����-1������ֱ����� 
		}
		else
		{
			low = mid + 1;             //ע����+1������ֱ����� 
		}
	}
	if(found==1)
		printf("\nThe index of %d is %d \n",n,mid);
	else
		printf("\nThere is no %d\n",n);
	
	return 0; 
	
 } 
*/
/* exp6-8 �����������1��4*4����  */
/*
#include"stdio.h"
int main()
{
	int a[4][4];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i>=j)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	
	return 0;
 } 
*/
/* exp6-9 �����ж�ά����a�е����ֵ����Сֵ�������Խ���Ԫ�صĺ� */
/* 
#include"stdio.h"
int main()
{
	int a[3][3] = {4,4,34,37,3,12,5,6,5};
	int i,j;
	int max,min,sum,s;
	max = min = a[0][0];
	sum = 0,s = 0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(min>a[i][j])
				min = a[i][j];
			if(max<a[i][j])
				max = a[i][j];
			if(i==j)
				sum = sum + a[i][j];
		}
		s = s + a[i][2-i];   // ���Խ�����Ԫ�صĺ� 
	}
	printf("max = %d,min = %d,sum = %d,s = %d",max,min,sum,s);
	return 0;
 } 
*/ 
/* exp6-10 ������ת�þ���  ��������Ű���� */
/*
#include<stdio.h>
int main()
{
	int a[2][3] = {1,2,3,4,5,6};
	int b[3][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i] = a[i][j];                      //ʵ��ת�� 
		}
	}
	
	printf("array a:\n");                   
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);                  //���a���� 
		}
		printf("\n");
	}
	
	printf("array b:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%5d",b[i][j]);                  // ���b���� 
		printf("\n");
	} 
	return 0; 
} 
*/
/* exp6-10-2  �����ת�þ���  */ 
/* 
#include"stdio.h"
int main()
{
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	
	printf("array a : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);      //���a���� 
		printf("\n");
	}
	
	printf("a��ת�þ���\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[j][i]);      //���a��ת�þ��� 
		printf("\n");
	 } 
	 
	 return 0;
 } 
*/
/* exp6-11 ��ʮ(3)��ѧ����ÿ�˿�����(2)�ſΣ�ͳ��ÿ���˵��ܷ֣�����ܷ���530(170)���ϵ�ѧ���ĳɼ� */
/* ������ѭ�������� */ 
/* 
#include"stdio.h"
int main()
{
	int a[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		a[i][2] = 0;                                   //���ѧ�����ܳɼ�  Ҳ����������һ��һά���飬���洢�ܳɼ� 
		printf("\nplease input the scores: ");
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);	                   //����ɼ� 
			a[i][2] = a[i][2] + a[i][j]; 
		}
		if(a[i][2]>=170)
			printf("��%dͬѧ�ɼ�����170��%d",i+1,a[i][2]); 	
	}
	
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);                     //������� 
		printf("\n");
	}
	
	return 0;
 } 
*/ 

/* exp6-12 �� %c ������������ַ�  */
/*
#include"stdio.h"
int main()
{
	int i;
	char a[12];
	for(i=0;i<12;i++)
	{
		scanf("%c",&a[i]);            //������&��ͬʱ����ո����� ������ 
	}
	printf("\n");
	for(i=0;i<12;i++)
		printf("%c",a[i]);
	printf("\n");
	return 0;
 } 
*/
/* exp6-12-2 �� %s ����������� */
/*
#include"stdio.h"
int main()
{
	char a[12];
	printf("�������ַ�����");
	scanf("%s",a);                          // ���ﲻ�� &a[i] !!!!!!!!
	printf("\n����ַ�����");
	printf("%s",a);                          //ֻ��a 
	return 0;
 } 
*/
/*exp 6-12-3 ��gets()��puts()������� */
/*
#include"stdio.h"
int main()
{
	char a[12];
	printf("�����ַ�����");
	gets(a);                                 //ֻ��gets(a); 
	printf("����ַ�����");
	puts(a);
	return 0; 
 } 
*/
/* �����ַ������ȵĺ��� */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	char c1[10] = "abcdefg";
	char c2[10] = "123";
	printf("%s\t\t%d\n",c1,strlen(c1));    //�ַ������Ⱥ�����������'\0' 
	printf("%s\t\t%d\n",c2,strlen(c2));
	return 0;
} 
*/
/* exp6-13 Сд��ĸת����д��ĸ */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	char c[50];
	int i = 0;
	gets(c);
	puts(c);
	while(c[i]!='\0')
	{
		c[i] = c[i] - 32;             //Сд��ĸת���ɴ�д��ĸ
		i++;
	}
	printf("\n");
	puts(c);
	return 0;
 } 
*/
/* �ַ������Ӻ���  */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	char c1[12] = "abcefg";
	char c2[10] = "123";
	printf("%s\n",c1);
	strcat(c1,c2);
	printf("%s\n",c1);
	return 0;
}
*/
/* �ַ����ĸ��ƺ���  */
/* 
#include"stdio.h"
#include"string.h"
int main()
{
	int i;
	char c1[10] = "abceds";
	char c2[4] = "123";
	puts(c1);
	strcpy(c1,c2);          //ע������'\0'һ�鸴�Ƶ�c1��ǰ�棡�������� 
	puts(c1);
	for(i=0;i<10;i++)
		printf("%c",c1[i]); 
	return 0; 
 } 
*/
/* exp6-14 ����ѭ��ʵ���ַ���������� */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	char a[10];
	int i;
	gets(a);
	for(i= strlen(a)-1;i>=0;i--)          //ע��i = strlen(a)-1 
	{
		printf("%c",a[i]);
	}
	return 0;
 } 
*/
/* exp6-15 ��һ���ַ�����������а���  */
/* 
#include"stdio.h"
#include"string.h"
int main()
{
	int i,j,t;
	char a[10],m;
	gets(a);
	j = strlen(a),t = j/2;
	for(i=0;i<t;i++,j--)
	{
		m = a[i];
		a[i] = a[j-1];                  //ע����j-1 
		a[j-1] = m;
	}
	puts(a);
	return 0;
 } 
*/
/* exp6-16 ɾ��ָ�����ַ�  */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	int i,j;
	char s1[10],s2[10];
	char c;
	printf("�������ַ�����");
	gets(s1);
	printf("\n������ɾȥ���ַ���");
	scanf("%c",&c);
	j = 0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=c)
		{
			s2[j] = s1[i];
			j++;
		}
	}
	s2[j] = '\0';                //ע�����Ҫ�����ַ�'\0' 
	printf("%s\n",s2);
	return 0;
 } 
*/
/* exp6-17��������ɵ��ַ���ת����һ��ʮ������ */
/* ÿ�������ַ���'0'��ASCII��ֵ�Ĳ�ֵ����������ֵ�ֵ */ 
/* 
#include"stdio.h"
int main()
{
	int i;
	char s[5];
	long int n = 0;
	printf("Please input a number string:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
		n = n * 10 + s[i] - '0';                      //�����ַ�ת��Ϊ���� 
	printf("\n��ֵn = %ld",n);
	return 0;
 } 
*/ 
/* exp6-18 �������ѧ�������֣��ҳ�ASCII˳��������ǰ���ѧ�� */
/* 
#include"stdio.h"
#include"string.h"
int main()
{
	char names[5][20];
	int i;
	int min;
	printf("������ѧ����������\n");
	for(i=0;i<5;i++)
	{
		gets(names[i]);                         //ԭ�������ö�ά���黹������ô�� ,gets()Ҳ���������� 
	}
	min = 0;
	for(i=1;i<5;i++)
	{
		if(strcmp(names[i],names[min])<0)
			min = i;	
	} 
	printf("\n������Сֵ��ASCII˳�򣩣�");
	puts(names[min]);
	return 0; 
 } 
*/
/* ����������ְ���ASCII���� */

#include"stdio.h"
#include"string.h"
int main()
{
	char names[5][15];
	char t[15]; 
	int i,j,k;
	printf("Please input names: \n");
	for(i=0;i<5;i++)
		gets(names[i]); 
	for(i=0;i<4;i++)
	{	
		k = i;
		for(j=i+1;j<5;j++)
		{
			if(strcmp(names[k],names[j])>0)
				k = j;
		}
		strcpy(t,names[k]);
		strcpy(names[k],names[i]);
		strcpy(names[i],t);
	} 
	printf("\n����������Ϊ��\n");
	for(i=0;i<5;i++)
		puts(names[i]);
	return 0;
 } 







