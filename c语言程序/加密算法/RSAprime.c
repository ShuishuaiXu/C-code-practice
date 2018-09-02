/********************************************************************************************
*  Copyright(c) tcpipstack
*	File Name				:	RSA.c 
*	Abstract Description	:	RSA�ӽ����㷨�ļ���ʾ	
*	Create Date				:	2010/08/17
*	Author					:	tcpipstack
*-------------------------Revision History--------------------------------------------------
*	No	Version		Date		Revised By			Item			Description
*	 1		1.0		10/08/17
*
********************************************************************************************/

#include <stdio.h>
#include <math.h>

/* RSA�㷨�м��ܷ���������Կ��N��E�����ܷ�ʹ��N��D���� */
#define P	5	/* P��Q����Ϊ��������ʵ��������ͨ��Ϊ�ܴ���� */
#define	Q	7

#define N	(P*Q)	/* add the (), or will cause the mistake */
#define Z	((P - 1)*(Q - 1))

#define E	5		/* ���ܷ�ѡ��E��E�����Zֻ��һ����Լ�� */
#define D	5		/* (E * D - 1)�����ܹ���Z���� */
/* ����long int�޷���ʾ��������֣�����Dȡ5 */ 


int main(void)
{
	int i;
	int TrsMsg[4] = {12, 15, 22, 5};
	long en[4], de[4];
	int SecCode[4], DeMsg[4];

	printf("������һ��RSA�ӽ����㷨�ļ���ʾ:\n");
	printf("\t Copyright(C) Long.Luo.\n\n");
	printf("����\t����\t   ���ܺ�����\n");

	for (i=0; i<4; i++)
	{
		/* s = m(E) mod N */
		en[i] = (int)pow(TrsMsg[i], E);
		SecCode[i] = en[i] % N;

		printf("%d\t%d\t\t%d\n", TrsMsg[i], en[i], SecCode[i]);
	}

	printf("\nԭʼ����\t����\t����\t\t���ܱ���\n");
	for (i=0; i<4; i++)
	{
		/* d = s(D) mod N */
		de[i] = pow(SecCode[i], D);
		DeMsg[i] = de[i] % N;

		printf("%d\t\t%d\t%d\t\t%d\n", TrsMsg[i], SecCode[i], de[i], DeMsg[i]);
	}

	getchar();
  
  return 0;
}

