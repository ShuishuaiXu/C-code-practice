/*

//          ��ܣ�ϸ�ڣ�ע������

 
//     �����£�ѭ���ṹ ��   1.����ѭ���ṹ while,do-while,for
//                           2.break��continue���
//                           3.ѭ��Ƕ��
//                           4.�ۺϳ������ ��ٷ������Ʒ���Fibonacci���У������������ۼ��۳ˣ�


//             1.����ѭ���ṹ������1.for��������ѭ����while,do-while��������ѭ�� 
//                                   2.for ��� 
//                                   3.while���ж���ִ�У���do-while����ִ��һ�Σ����ж� 

//             2.break�����continue��䣺 1.break�������ǰ����ѭ������continue����ǽ�������ѭ����������ʼ��һ��ѭ�� 
//                                         2.break���ֻ����������ѭ������л�switch����� ��һ��break�����if���һ��ʹ�� 


//             3.ѭ��Ƕ�ף�   1.������ʽ3*3=9
//                            2.���ִ��һ�Σ��ڲ�ִ��һ�������Ĺ��� 
//                            3.ѭ����ֻ�ܰ��������ܽ���
//                            4.����ѭ��������ͬһ����������Ƕ�ײ��� 

//             4.         ��ٷ�����ÿ�μ�1����٣�����Ҳ����ȫ����Ҫ��٣���Χ��ѡ�� 

     
//             ע����� 1.һ��Ҫע������ĳ�ʼֵ���ر�����ѭ���ṹ�� 
//                        2.ע��for����ʡ�ԣ�������Ķ��ű��ʽ 



#include"stdio.h"
int main()
{
	printf("Hello, world!");
	return 0;
}

//exp5-1 ����������ӣ����ѭ�����Ʊ���i��ֵ
#include"stdio.h"
int main()
{
	int i;
	i = 1;
	while(i<=10)                                         //ע������û�зֺţ�do-while�����зֺţ������������� 
	{
		printf("i=%d, ",i);                              //ע�����뷨��Ӣ�Ļ������� 
		i++;
	}
	return 0;
} 

//exp5-2   ��s = 1+2+3+...+100 ��ֵ����whileʵ�֣�
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

//exp5-3 �Ӽ�������������������������Щ���ĺͼ�ƽ����
#include"stdio.h"                                        //���ȷ�����Ҫ���弸���������ܺͣ���ֵ������ĸ����������ֵ 
int main()                                               // ����ʵ�ʸ��ʺ���do-while��䣬��Ϊ��Ҫ��ִ��һ�Σ����ж� 
{                                                        // һ��Ҫע�� ��������ĳ�ʼֵ 
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

//exp5-4  ��s=1+2+3+...+100��ֵ����do-while���ʵ�֣�
#include"stdio.h"
int main()
{
	int i = 0,s = 0;
	do
	{
		i++;
		s = s + i;
	}while(i<100);                                   // ע��do-while����������зֺţ����������� 
	printf("i = %d,s = %d",i,s);
	return 0;
 } 

//exp5-5-1    while��do-while���ѭ���ıȽ�
#include"stdio.h"
int main()
{
	int i = 6;
	while(i<=5)
		i = i + 2;                    //���������Բ���{}�����Ǿ��������ǵ�����仹������嶼���ϣ����������׶� 
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

// exp5-6 ��s=1+2+...+100��ֵ����forѭ����
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
	printf("i = %d,s = %f",i,s);                        //ע������������ʽ 
	return 0;
 } 

//exp5-7 �����Ǹ�����������ż���ĺ�
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

//exp5-8 ����һ���ַ����ֱ�ͳ�ƴ�д��ĸ��Сд��ĸ���֣��������ַ��ĸ���
#include"stdio.h"
int main()
{
	int i,j,k,m;
	char c;
	i = j = k = m = 0;
	printf("Please input a string of characters: ");
	while((c=getchar()) != '\n')                     // ���ж������ܺ� 
	{                                                // ע�ⵥ����ĸһ��Ҫ�õ����ţ�������������
		if(c>='A' && c<='Z')
			i++;
		else if(c>='a' && c<='z')
			j++;
		else if(c>='0' && c<='9')
			k++;
		else 
		 	m++;
	}
	printf("��д��ĸ��%d��\n",i);
	printf("Сд��ĸ��%d��\n",j);
	printf("������%d��\n",k);
	printf("�����ַ���%d��\n",m);
	return 0; 
 } 

//exp5-9     ������һ���ܱ��������ľ�����ѭ�� 
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

//exp5-10 ����1-7֮�䲻�ܱ�3����������
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

//exp5-12 ��ӡ�žų˷���
#include"stdio.h"
int main()
{
	int i,j;
	for(i=1; i<=9; i++)
	{
		for(j=1; j<=i; j++)
			printf("%d*%d=%2d  ",i,j,i*j);               //%2d�õĺã�������׶��� 
		printf("\n");
	}
	return 0;
 } 

//exp5-13 ���һ���������ж����Ƿ�Ϊ����
#include"stdio.h"
#include"math.h"
int main()
{
	int i,m,n;
	printf("Please input an integer: ");
	scanf("%d",&m);
	n = (int)sqrt(m);                          //����ע��nҪ�����㣬������forѭ������ÿһ��ѭ����Ҫ����һ��                          
	for(i=2; i<=n; i++)
	{
		if(m%i == 0)
			{
				break;
			}
	}
	if(i>n)                                   //����Ƚ�i>n�뷨�ܺã������������������� 
		printf("This is a prime number.");
	else
		printf("This is not a prime number.");
	return 0;
 } 

//exp5-14 ��100-200֮�������ĸ�������ͳ�������ĸ���
#include"stdio.h"
#include"math.h"
int main()
{
	int i,j,k=0,n;
	for(i=101;i<=200;i=i+2)               // ż��һ�����ǣ����Կ�������д���Ч�ʣ����������������� 
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
	printf("\n����������%d",k);
	return 0;
 } 
 
//exp5-14-2  ���ñ�־����������break�����˳� 
#include"stdio.h"
#include"math.h"
int main()
{
	int i,j,k=0,n,flag;
	for(i=101;i<=200;i=i+2)               // ż��һ�����ǣ����Կ�������д���Ч�ʣ����������������� 
	{
		n = (int)sqrt(i);
		flag = 0;
		j = 2;
		while(j<=n && !flag)              // for��while���������for�Ǽ���ѭ����while���ж�ѭ�� 
		{
			if(i%j == 0)
				flag = 1;                 //��־����flag������ɷǳ��ã��������� 
			j++;
		}
		if(flag == 0)
		{
			printf("%5d",i);
			k++;
		}	
	}
	printf("\n����������%d",k);
	return 0;
 } 

//exp5-5 ��Ǯ����������
#include"stdio.h"
int main()
{
	int x,y,z;
	for(x=0;x<=20;x++)
	{
			for(z=0;z<=99;z=z+3)
			{
				y = 100 - x - z;                         //��һ��������ѭ�� 
				if(5*x+3*y+z/3 == 100 && y>=0)           // ע��y����0 
					printf("���̣�%2d,��ĸ��%2d,������%2d \n",x,y,z);
			}
	}
	return 0;
 } 

//exp5-16 ��fibonacci���е�ǰ40���� 
#include<stdio.h>
int main()
{
	long int f1=1,f2=1;                      //ע����long int ,��Ϊ���������ܴ� 
	int i;
	for(i=1;i<=20;i=i+1)                      //���40����������ÿ��������������Կ�����i<=20  
	{
		printf("%-10d%-10d",f1,f2);           //��������� ��ÿ��������������Ч�� 
		if(i%2 == 0) printf("\n");           //ע�⻻�У�Ҫ����ʾ�Ľ������� 
		f1 = f1 + f2;
		f2 = f2 + f1;
	}
	return 0;
 } 

//exp5-17 ���ӳ�����
#include"stdio.h"
int main()
{
	int y=1,i;
	for(i=1;i<=9;i++)
	{
		y = 2*y + 2;                            // �����ǵ����� 
	}
	printf("��һ�칲ժ�ˣ�%d",y);
	return 0;
 } 
 
//exp5-18 ���۳˻��ĺ�(s=1!+2!+...+n!)                 // �����ס   
#include"stdio.h"
int main()
{
	int i,n;
	float s = 0.0,t = 1.0;                  //ע�ⶨ���ֵ������Ҫ�����������������ͬ������������ 
	printf("n = ");                         
	scanf("%d",&n);                      
	 
	for(i=1;i<=n;i++)
	{
		t = t * i;                        // ע�ⲻ������ѭ����һ���Ϳ��ԣ�Ҫ���� ���������������� 
		s = s + t;                        // Ҫѧ��������һ������Ľ�� 
	}
	printf("�۳˻��ĺ�Ϊ��%lf",s);           //       ���������ע��  ,Ҫע�������� 
	return 0;
}

//exp5-18-2 ���ķ�����û��Ч�ʵķ���
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


//exp5-19 ���� pi/4 = 1 - 1/3 + 1/5 - 1/7 + ...     ����pi��ֵ 
#include"stdio.h"
int main()
{
	int n,i;
	float s=0.0,t = -1.0 ;           //����tҪΪfloat����������t/i��ԶΪ0�� 
	printf("n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		t = -t;
		s = s + t/i;
	}
	s = s*4;                                //����pi��ֵ 
	printf("s = %f",s); 
	return 0;
}

//exp5-19-3 ��pi��ֵ
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
	printf("\nѭ���Ĵ���%d",i/2);
	return 0; 
 } 

*/
//exp5-20 �˿�����������
#include"stdio.h"
int main()
{
	int i;
	float x,r;                             //ע����������� 
	x = 14.0;
	r = 0.0002;
	for(i=1;i<=10;i++)
	{
		x = (1 + r) * x;
	}
	printf("ʮ����˿�Ϊ��%f",x);
	return 0;
 } 






 







