/*
*  第十二章： 文件 ：  1.文件概述
*                      2.文件指针的定义
*                      3.文件的基本操作
*                      4.综合程序设计
*                      5.总结

*         1.文件概述：程序是在内存中运行的，一旦程序结束，数据也就不存在了。
*                     而数据是保存在外存（磁盘，U盘）上的，在使用时再调入到内存，这就需要使用磁盘文件来实现 
*                     1.文件分为ASCII文件和二进制文件

*         2.文件指针的定义 ： 是一个结构体类型，已经定义好了，存在stdio.h头文件里 

*         3.文件的基本操作：1.文件打开，关闭，检测，定位函数；  fp=fopen(filename,"r,w,a"),fclose(filename),rewind(fp)
*                           2.字符fgetc(fp),fputc(ch,fp1)，字符串fgets，格式化fscanf，数据块读写函数 

*         4.总结： 主要讲了文件的打开，关闭，检测，定位函数
*                          以及字符（单个字符输入输出的），字符串，
*                          格式化(格式较清楚的），数据块(数组，结构体）读写函数 


*/ 
/* exp12-1 打开文件, 并将其内容在屏幕上输出 */
/* 
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp;
	char ch;
	if((fp = fopen("E:\\c语言程序\\原1.c","r")) == NULL)
	{
		printf("Cannot open file!");
		getch();                                   //任意输入字符 
		return 1;
	}
	printf("文件内容：\n");
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
/* exp12-2  打开一个文件，将其内容加密（原文件中的每个字符加1）后写入另外一个文件 */
/* 
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp, *fp1;
	char ch;
	if((fp = fopen("E:\\c语言程序\\原.c   ","r")) == NULL)
	{
		printf("Cannot open this file!");
		return 1;
	}
	if((fp1 = fopen("E:\\c语言程序\\原1.c   ","w+")) == NULL)
	{
		printf("Cannot create that file !");
		return 1;
	}
	printf("Old file content: \n");
	ch = fgetc(fp);
	while(ch != EOF)
	{
		putchar(ch);
		fputc(ch+1,fp1);                       //将字符加1存放到新文件中 
		ch = fgetc(fp);
	}
	printf("\n\n New file content: \n");
	rewind(fp1);                               //把文件指针移到文件首部
	ch = fgetc(fp1);
	while(ch != EOF)
	{
		putchar(ch);                            //显示字符 
		ch = fgetc(fp1);                       //得到字符 
	}
	printf("\n");
	fclose(fp);
	fclose(fp1);
	return 0;
}
*/ 
/* exp12-3 从键盘输入一些字符，逐个写入磁盘文件，如果输入#，则结束 */
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
/* exp12-4 通过命令行参数，实现文件的复制功能 */
/* 
#include"stdio.h"
int main(int argc, char *argv[])               // 这里的主函数有参数，需要用命令行来输入 
{
	FILE *fp1,*fp2;
	char ch;
	if(argc != 3)
	{
		printf("Please input two file name!");
		getch();                                        // 比getchar()函数好一点，输入任意字符都不显示，而且直接跳到下一段 
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
/* exp12-5 从文件中读出一个含10个字符的字符串 */
/*
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp;
	int i;
	char strs[11];
	if((fp = fopen("E:\\c语言程序\\8.c","r")) == NULL)
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
/* exp12-6 在文件中追加一个字符串 */
/*
#include"stdio.h"
#include"conio.h"
int main()
{
	FILE *fp;
	char ch,strs[11];
	if((fp=fopen("E:\\c语言程序\\text.c","a+")) == NULL)
	{
		printf("Cannot open the file!");
		getch();
		return 1;
	}
	printf("Please input a string : ");
	//scanf("%s",strs);
	gets(strs);
	fputs(strs,fp);
	rewind(fp);                                //把文件指针移动到文件首 
	ch = fgetc(fp);
	while(ch!=EOF)                             //判断是否到文件尾 
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
*/
/* exp12-7 从键盘输入两个学生的成绩信息，用fscanf和fprintf函数实现将这些数据写入文件中，再从文件独处显示在屏幕上 */
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
	if((fp = fopen("E:\\c语言程序\\text.c","a+")) == NULL)
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
		fprintf(fp,"%d\t%s\t%f\n", p1->num,p1->name,p1->score);              //写入文件 ,可以改变格式 
	rewind(fp);
	for(i=0;i<2;i++,p2++)
		fscanf(fp,"%d\t%s\t%f\n", &p2->num,p2->name,&p2->score);                   //从文件导出 
	printf("\n\nnum\tname\tscore\n");
	p2 = stus2;
	for(i=0;i<2;i++,p2++)
		printf("%d\t%s\t%f\n",p2->num,p2->name,p2->score);
	fclose(fp);
	return 0;
}
*/
/* exp12-8 从键盘输入两个学生的成绩信息，写入一个文件中，再从文件读出这两个学生的数据显示在屏幕上 */

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












 
