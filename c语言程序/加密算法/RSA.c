
#include"stdio.h"
#include"math.h"

#define p  5
#define q  7

#define n  (p*q)        /* 一定要加括号   */ 
#define phi  ((p-1)*(q-1))

#define e  5
#define d  5

int main()
{
	int i;
	int Mes[4] = {12, 15, 22, 5};
	int en[4], de[4];
	long mid1[4], mid2[4];
	printf("下面是一个RSA加解密算法的简单演示\n");
	
	for(i=0;i<4;i++)
	{
		/* c = m^e (modn) */
		mid1[i] =(int)pow(Mes[i],e) ;
		printf("%d\n",mid1[i]);
		en[i] = mid1[i] % n ;
		printf("%d\t",en[i]);
	}
	
	printf("\n");
	for(i=0;i<4;i++)
	{
		mid2[i] =(int)pow(en[i],d);
		de[i] = mid2[i] % n;
		printf("%d\t",de[i]);
	}
	
	return 0;
}















