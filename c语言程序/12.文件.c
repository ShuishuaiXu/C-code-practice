/*
*  ��ʮ���£� �ļ� ��  1.�ļ�����
*                      2.�ļ�ָ��Ķ���
*                      3.�ļ��Ļ�������
*                      4.�ۺϳ������
*                      5.�ܽ�

*         1.�ļ����������������ڴ������еģ�һ���������������Ҳ�Ͳ������ˡ�
*                     �������Ǳ�������棨���̣�U�̣��ϵģ���ʹ��ʱ�ٵ��뵽�ڴ棬�����Ҫʹ�ô����ļ���ʵ�� 
*                     1.�ļ���ΪASCII�ļ��Ͷ������ļ�

*         2.�ļ�ָ��Ķ��� �� ��һ���ṹ�����ͣ��Ѿ�������ˣ�����stdio.hͷ�ļ��� 

*         3.�ļ��Ļ���������1.�ļ��򿪣��رգ���⣬��λ������  fp=fopen(filename,"r,w,a"),fclose(filename),rewind(fp)
*                           2.�ַ�fgetc(fp),fputc(ch,fp1)���ַ���fgets����ʽ��fscanf�����ݿ��д���� 

*         4.�ܽ᣺ ��Ҫ�����ļ��Ĵ򿪣��رգ���⣬��λ����
*                          �Լ��ַ��������ַ���������ģ����ַ�����
*                          ��ʽ��(��ʽ������ģ������ݿ�(���飬�ṹ�壩��д���� 


*/ 
/* exp12-1 ���ļ�, ��������������Ļ����� */
/* 
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp;
	char ch;
	if((fp = fopen("E:\\c���Գ���\\ԭ1.c","r")) == NULL)
	{
		printf("Cannot open file!");
		getch();                                   //���������ַ� 
		return 1;
	}
	printf("�ļ����ݣ�\n");
	ch = fgetc(fp);
	while(ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	return 0;
}
*/ 
/* exp12-2  ��һ���ļ����������ݼ��ܣ�ԭ�ļ��е�ÿ���ַ���1����д������һ���ļ� */
/* 
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp, *fp1;
	char ch;
	if((fp = fopen("E:\\c���Գ���\\ԭ.c   ","r")) == NULL)
	{
		printf("Cannot open this file!");
		return 1;
	}
	if((fp1 = fopen("E:\\c���Գ���\\ԭ1.c   ","w+")) == NULL)
	{
		printf("Cannot create that file !");
		return 1;
	}
	printf("Old file content: \n");
	ch = fgetc(fp);
	while(ch != EOF)
	{
		putchar(ch);
		fputc(ch+1,fp1);                       //���ַ���1��ŵ����ļ��� 
		ch = fgetc(fp);
	}
	printf("\n\n New file content: \n");
	rewind(fp1);                               //���ļ�ָ���Ƶ��ļ��ײ�
	ch = fgetc(fp1);
	while(ch != EOF)
	{
		putchar(ch);                            //��ʾ�ַ� 
		ch = fgetc(fp1);                       //�õ��ַ� 
	}
	printf("\n");
	fclose(fp);
	fclose(fp1);
	return 0;
}
*/ 
/* exp12-3 �Ӽ�������һЩ�ַ������д������ļ����������#������� */
/*
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp;
	char ch;
	char filename[20];
	printf("Please input filename: ");
	scanf("%s",filename);
	if((fp=(fopen(filename,"w+")) == NULL))
	{
		printf("Cannot create file %s !\n",filename);
		return 1;
	}
	ch = getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	return 0;
}
*/
/* exp12-4 ͨ�������в�����ʵ���ļ��ĸ��ƹ��� */
/* 
#include"stdio.h"
int main(int argc, char *argv[])               // ������������в�������Ҫ�������������� 
{
	FILE *fp1,*fp2;
	char ch;
	if(argc != 3)
	{
		printf("Please input two file name!");
		getch();                                        // ��getchar()������һ�㣬���������ַ�������ʾ������ֱ��������һ�� 
		return 1;
	}
	if((fp1 = fopen(argv[1],"r")) == NULL)
	{
		printf("Cannot open %s !",agrv[1]);
		return 1;
	}
	if((fp2 = fopen(argv[2],"w+")) == NULL)
	{
		printf("Cannot create %s !",argv[2]);
		return 1;
	}
	while((ch = fgetc(fp1)) != EOF)
		fputc(ch,fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
*/
/* exp12-5 ���ļ��ж���һ����10���ַ����ַ��� */
/*
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp;
	int i;
	char strs[11];
	if((fp = fopen("E:\\c���Գ���\\8.c","r")) == NULL)
	{
		printf("Cannot open the file!");
		getch();
		return 1;
	}
	for(i=0;i<10;i++)
	{
		fgets(strs,11,fp);
		printf("\n%s\n",strs);
    }
	fclose(fp);
	return 0;
}
*/
/* exp12-6 ���ļ���׷��һ���ַ��� */
/*
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp;
	char ch,strs[11];
	if((fp=fopen("E:\\c���Գ���\\text.c","a+")) == NULL)
	{
		printf("Cannot open the file!");
		getch();
		return 1;
	}
	printf("Please input a string : ");
	//scanf("%s",strs);
	gets(strs);
	fputs(strs,fp);
	rewind(fp);                                //���ļ�ָ���ƶ����ļ��� 
	ch = fgetc(fp);
	while(ch!=EOF)                             //�ж��Ƿ��ļ�β 
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
*/
/* exp12-7 �Ӽ�����������ѧ���ĳɼ���Ϣ����fscanf��fprintf����ʵ�ֽ���Щ����д���ļ��У��ٴ��ļ�������ʾ����Ļ�� */
/* 
#include"stdio.h"
#include"conio.h"
struct stuscore
{
	int num;
	char name[20];
	float score;
}stus1[2],stus2[2], *p1, *p2;

int main()
{
	FILE *fp;
	int i;
	p1 = stus1;
	p2 = stus2;
	if((fp = fopen("E:\\c���Գ���\\text.c","a+")) == NULL)
	{
		printf("Cannot open file !");
		getch();
		return 1;
	}
	printf("Please input student score data \n");
	for(i=0;i<2;i++,p1++)
		scanf("%d%s%f",&p1->num,p1->name,&p1->score);
	p1 = stus1;
	for(i=0;i<2;i++,p1++)
		fprintf(fp,"%d\t%s\t%f\n", p1->num,p1->name,p1->score);              //д���ļ� ,���Ըı��ʽ 
	rewind(fp);
	for(i=0;i<2;i++,p2++)
		fscanf(fp,"%d\t%s\t%f\n", &p2->num,p2->name,&p2->score);                   //���ļ����� 
	printf("\n\nnum\tname\tscore\n");
	p2 = stus2;
	for(i=0;i<2;i++,p2++)
		printf("%d\t%s\t%f\n",p2->num,p2->name,p2->score);
	fclose(fp);
	return 0;
}
*/
/* exp12-8 �Ӽ�����������ѧ���ĳɼ���Ϣ��д��һ���ļ��У��ٴ��ļ�����������ѧ����������ʾ����Ļ�� */

#include"stdio.h"
#include"conio.h"
struct stuscore
{
	int num;
	char name[20];
	float score;
}stu1[2],stu2[2],*p1,*p2;

int main()
{
	FILE *fp;
	int i;
	if((fp = fopen("txtbit.txt","a+")) == NULL)
	{
		printf("Cannot open the file !");
		getch();
		return 1;
	}
	printf("\nPlease input student data.\n");
	p1 = stu1;
	for(i=0;i<2;i++,p1++)
		scanf("%d%s%f",&p1->num,p1->name,&p1->score);
	p1 = stu1;
	fwrite(p1,sizeof(struct stuscore),2,fp);
	rewind(fp);
	p2 = stu2;
	fread(p2,sizeof(struct stuscore),2,fp);
	printf("\n\nnumber\tname\tscore\n");
	for(i=0;i<2;i++,p2++)
		printf("%d   %s   %f\n",p2->num,p2->name,p2->score);
	fclose(fp);
	return 0;
}












 
