#include"stdio.h"
#include"conio.h"
int main()
{
	
//	char *p;
//	gets(p);
//	puts(p); 
	FILE *fp, *fp1;
	char ch;
	char filename[30];
	int a ;
	printf("\n\n");
	printf("������Щ��һֱ�����˵������������һֱû����˵��\n\n");
	printf("���������һ���ַ����Ա������һ��������\n\n");
	getch();
	printf("�����أ��Ұ�����Ҫ˵�Ļ����ܳ���һ���ļ����������������ա�\n\n");
	printf("���������һ���ַ����Ա������һ��������\n\n");
	getch();
	printf("�����أ���Ҫ���ҵ��ļ���"); 
	printf("���ԣ��������ļ�����ϸ��ַ���磺E:\\\\c���Գ���\\\\ԭ1.c�� ��   "); 
	scanf("%s",filename);
	printf("\n\n");
	printf("Ȼ����������������գ���930215��������˼�������ҵģ� ��  ");
	scanf("%d",&a); 
	if((fp = fopen(filename,"r")) == NULL)           //"E:\\c���Գ���\\ԭ.c   "
	{
		printf("Cannot open this file!");
		return 1;
	}
/*	if((fp1 = fopen("E:\\c���Գ���\\ԭ4.c   ","w+")) == NULL)
	{
		printf("Cannot create that file !");
		return 1;
	}
*/	ch = fgetc(fp);
	a &=0x01;
	while(ch != EOF)
	{
		putchar(ch-a);
	//	fputc(ch-a,fp1);                       //���ַ���1��ŵ����ļ��� 
		ch = fgetc(fp);
	}
	//rewind(fp1);                               //���ļ�ָ���Ƶ��ļ��ײ�
	//ch = fgetc(fp1);
	//while(ch != EOF)
	{
	//	ch = fgetc(fp1);                       //�õ��ַ� 
	}
	printf("\n");
	fclose(fp);
	//fclose(fp1);	
	return 0;
}
