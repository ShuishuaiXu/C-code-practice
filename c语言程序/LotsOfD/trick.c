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
	printf("宝贝有些话一直想跟你说，但憋在心里一直没机会说。\n\n");
	printf("请随便输入一个字符，以便进行下一步。。。\n\n");
	getch();
	printf("现在呢，我把我想要说的话加密成了一个文件，密码就是你的生日。\n\n");
	printf("请随便输入一个字符，以便进行下一步。。。\n\n");
	getch();
	printf("首先呢，需要先找到文件。"); 
	printf("所以，请输入文件的详细地址（如：E:\\\\c语言程序\\\\原1.c） ：   "); 
	scanf("%s",filename);
	printf("\n\n");
	printf("然后呢请输入你的生日（如930215，不好意思，这是我的） ：  ");
	scanf("%d",&a); 
	if((fp = fopen(filename,"r")) == NULL)           //"E:\\c语言程序\\原.c   "
	{
		printf("Cannot open this file!");
		return 1;
	}
/*	if((fp1 = fopen("E:\\c语言程序\\原4.c   ","w+")) == NULL)
	{
		printf("Cannot create that file !");
		return 1;
	}
*/	ch = fgetc(fp);
	a &=0x01;
	while(ch != EOF)
	{
		putchar(ch-a);
	//	fputc(ch-a,fp1);                       //将字符加1存放到新文件中 
		ch = fgetc(fp);
	}
	//rewind(fp1);                               //把文件指针移到文件首部
	//ch = fgetc(fp1);
	//while(ch != EOF)
	{
	//	ch = fgetc(fp1);                       //得到字符 
	}
	printf("\n");
	fclose(fp);
	//fclose(fp1);	
	return 0;
}
