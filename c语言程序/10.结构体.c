/*
*   第十章：结构体和共用体： 1.结构体的引入
*                            2.结构体变量的使用
*                            3.结构体数组

*                            4.结构体变量作为函数的参数和返回值
*                            5.结构体与指针

*                            6.动态内存分配与链表

*                            7.共用体类型
*                            8.枚举类型
*                            9.自定义类型

*                           10.注意事项 
*                           11.小结 


*      1.结构体的引入：把不同数据类型，相互关联的一组数据合成一个整体使用，比如一个学生的各种信息，就像excel表的一行

*      2.结构体变量的使用： 1.结构体变量的定义：结构体变量定义的三种方法 ！！！！！ 
*                           2.结构体变量的引用两种方法：1.变量名直接引用，用于交换，就像整型变量一样
*                                                       2.成员的使用，可以单独使用，与整型变量一样，但必须按照：结构体变量名.成员名 
*                           3.结构体变量的初始化 与普通变量一样：1.定义时初始化
*                                                                2.定义之后，通过赋值语句或输入函数语句 
*                           4.结构体变量的使用：通过成员实现 

*      3.结构体数组： 数组里面是多个同类型的结构体 

*      4.结构体变量作为函数的参数和返回值 :
*                           1.结构体变量作为函数参数时，与普通变量一样  各用  内存；
*                           2.而结构体数组作为函数参数时，与数组一样  共用  内存 ，所以一般没有返回值 
*                           3.那是不是说如果函数参数传入的时地址，则共用内存，像指针，数组等；而如果传入的是变量值，则各自用内存 

*      5.结构体与指针： 主要讲指向结构体变量或数组的指针，以及他们作为函数参数和返回值 
*                      1.指向结构体变量的指针: 结构体变量成员的三种表示方法：结构体变量(.)，指针的两种（(*指针名).  ->) 
*                      2.指向结构体数组的指针: 指针的赋值要注意 
*                      3.指向结构体变量的指针作为函数参数    
*                      4.指向结构体变量的指针作为函数返回值 

*      6.动态内存分配与链表：
*                      1.动态内存分配：4个内存空间，三个内存空间分配函数
*                      2.用指针处理链表 
*                      3.链表的定义：数据域（data)和指针域（next） 
*                      4.链表的基本操作：创建，查找，插入，删除  优点：内存利用率高，缺点是必须从“头指针”开始 

*      7.共用体类型： 把不同的变量存放在同一段内存单元中，主要为了节省内存 
*                     1.三种定义方式 （与结构体相同）
*                     2.共用体变量的引用：1.只能引用成员，
*                                         2.并且如果赋多个值，只能使用最后的值，因为之前的都被覆盖了 
*                                         3.共用体不能被初始化，还是内存惹得祸
*                                         4.共用体变量不能作为函数的参数和返回值，但可以使用指向共用体变脸的指针
*										  5.主要应用： 作为结构体的成员 

*      8.枚举类型 : 1.定义，赋值，应用：1.三种定义方式，与结构体，共用体一样
*                           			2.枚举常量不是字符串，系统自动赋值0，1，2.。。用户也可以自己赋值
*                           			3.枚举元素是常量而不是变量，不能在程序中用赋值语句再赋值
*                                       4.枚举变量只能去枚举常量的其中之一 
*                          			    4.枚举变量不能直接取一个整数值，要进行强制转换 

*      9.自定义类型 ： 新类型名一般大写
*                      应该主要是为了简写 

*     10.注意事项： 1.注意共用体和结构体使用的注意事项 



*     11.小结    1.结构体就是把不同的数据类型，相互关联的一组数据组合到一起，所以是衍生出来的，基本类型就是整型，实型，字符型， 
*                2.结构体变量的使用与普通变量（整型）完全相同。程序中定义，赋初值，运算，输出等都是通过结构体变量的成员实现的 
*                3.结构体变量就是普通变量，结构体数组就是数组。用指针表示结构体变量和数组时与普通的变量和数组一样，前面加&，后面不加
 
*                1.结构体就相当于excel表的行，而结构体数组就相当于表 

*                本章主要是讲了 结构体，链表， 共用体 
*                 
*                         
*/ 

/* exp10-1  输入30个学生C语言课程的成绩，包括学号，姓名，成绩 ，并按由高到低的顺序输出  */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	int i,j,k,t1,t2;
	int num[3];                   //定义学号一维数组 
	char name[3][20];             // 定义姓名二维数组 
	char t3[20];                    //定义姓名字符串指针作为交换 
	float score[3];               //定义成绩一维数组 
	printf("please input 30 student's data(num,name,score):\n")  ;
	for(i=0;i<3;i++)
	{
		scanf("%d%s%f",&num[i],name[i],&score[i]);       //输入相关信息 
	} 
	for(i=0;i<2;i++)
	{
		k = i;
		for(j=i+1;j<3;j++)
		{
			if(score[k]<score[j])
				k = j;	
		}	 
		if(k!=i)
		{
			t1=score[i];score[i]=score[k];score[k]=t1;
			t2=num[i];num[i]=num[k];num[k]=t2;                // 字符串访问的两种方法 
			strcpy(t3,name[i]);strcpy(name[i],name[k]);strcpy(name[k],t3);
		}
	} 
	printf("排序后的成绩:  \n");
	printf("number\t\tname\t\tscore\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%6.2f\n",num[i],name[i],score[i]);	
	 } 
	return 0;
 } 
*/

/* exp10-2-1 定义结构体变量，初始化，并输出其数据  */
/*
#include"stdio.h"
int main()
{
	struct stuscore
	{
		int num;
		char name[20];
		float score;
	} ss1 = {1001,"ZhangSan",89};
	printf("Num = %d\nName = %s\nScore = %f\n",ss1.num,ss1.name,ss1.score);
	return 0;
 } 
*/
/* exp10-2-2 */
/*
#include"stdio.h"
int main()
{
	struct stuscore
	{
		int num;
		char name[20];
		float score;
	};
	struct stuscore ss1 = {1001,"Lisi",90};
	printf("Num = %d\nName = %s\nScore = %f\n",ss1.num,ss1.name,ss1.score);
	return 0;
}
*/
/* exp10-3 */
/* 
#include"stdio.h"
int main()
{
	struct stuscore
	{
		int num;
		char *name;   //
		float score;
	} ss1,ss2;
	ss1.num = 1001;
	ss1.name = "Lisa";               //这里因为额外赋值，所以必须是字符串指针，而字符串数组不能额外赋值 
	printf("please input score: ");
	scanf("%f",&ss1.score);
	ss2 = ss1;
	printf("Num = %d\nName = %s\nScore = %f\n",ss2.num,ss2.name,ss2.score);
	return 0;
}
*/
/* exp10-4 结构体变量的使用 */
/*
#include"stdio.h"
int main()
{
	struct stuscore
	{
		int num;
		char name[20];
		float score;
	} s1,s2,s3,temp;
	printf("Please input three student's num,name,score:\n");
	scanf("%d%s%f",&s1.num,s1.name,&s1.score);   //输入函数最重要的是变量的地址，所以要加&，而name不加是因为他本身就是地址
	scanf("%d%s%f",&s2.num,s2.name,&s2.score);
	scanf("%d%s%f",&s3.num,s3.name,&s3.score);
	if(s1.score<s2.score)
	{
		temp = s1; s1 = s2; s2 = temp;
	}
	if(s1.score<s3.score)
	{
		temp = s1; s1 = s3; s3 = temp;
	}
	if(s2.score<s3.score)
	{
		temp = s2; s2 = s3; s3 = temp;
	}
	printf("Num = %d\tName = %s\tScore = %f\n",s1.num,s1.name,s1.score);
	printf("Num = %d\tName = %s\tScore = %f\n",s2.num,s2.name,s2.score);
	printf("Num = %d\tName = %s\tScore = %f\n",s3.num,s3.name,s3.score);
 } 
*/
/* exp10-5 结构体数组   输入三十个同学的信息(学号，名字，成绩),并按照成绩的由高到低输出 */
/*
#include"stdio.h"
int main()
{
	struct stuscore{
		int num;
		char name[20];
		float score;
	};
	struct stuscore stu[3];
	struct stuscore t;
	int i,j;
	printf("Please input the three students' information:\n");
	for(i=0;i<3;i++)
		scanf("%d%s%f",&stu[i].num,stu[i].name,&stu[i].score);
	
	//使用冒泡算法对输入的30个学生的信息按成绩从高到底排列
	for(i=0;i<2;i++)
	{
		for(j=0;j<3-i-1;j++)
		{
			if(stu[j].score>stu[j+1].score)
			{
				t = stu[j];stu[j] = stu[j+1];stu[j+1] = t;	
			}	
		}	
	} 
	
	// 输出排序后的信息 
	printf("\n学号\t姓名\t\t平均成绩\n");
	for(i=0;i<3;i++)
	{
		printf("%-5d\t%-20s\t%-10.1f\n",stu[i].num,stu[i].name,stu[i].score);
	 } 
 } 
*/

/* exp10-6 用结构体数组实现 学生成绩的录入，显示，排序，增加，删除信息 */
/* 
#include"stdio.h"
// 都是外部声明 
struct stuscore{
	int num;
	char name[20];
	float score;
};
struct stuscore stu[30];
struct stuscore input();                         //声明输入学生成绩函数，返回值是一个结构体变量
void  display(struct stuscore stud[],int n);     //声明显示函数，参数是结构体变量
void sort(struct stuscore stud[],int n);         //声明排序函数
void insert(struct stuscore stud[],int n);       //声明增加函数
void del(struct stuscore stud[],int n);          //声明删除函数

int main()
{
	int i, count;
	char ch;
	printf("Please input the number of students: ");
	scanf("%d",&count);
	printf("Please input the information(number,name,score):\n");
	for(i=0;i<count;i++)
		stu[i] = input();                        //调用输入函数
	printf("\n成绩排序前的学生信息如下：\n");
	display(stu, count);                     		 //调用显示函数
	sort(stu,count);                                  //调用排序函数 
	printf("\n成绩排序后的学生信息如下：\n");
	display(stu,count);
	
	printf("\n\n 是否要插入新学生的信息？（y or n):  ");
	getchar();                                        //消除空格 
	scanf("%c",&ch);
	if(ch == 'Y'||ch == 'y')
	{
		insert(stu,count);
		count++;
		printf("\n插入后学生信息如下：\n");
		display(stu,count); 
	}
	
	printf("\n\n是否要删除某个学生的信息？(y or n):  ");
	getchar();                                        //消除空格 
	scanf("%c",&ch);
	if(ch == 'y'||ch == 'Y')
	{
		del(stu,count);
		count--;
		printf("\n删除后学生信息如下：\n");
		display(stu,count);
	}
	return 0;		
 }
 
void del(struct stuscore stud[],int n)
{
	int i,j,snum;
	printf("\n请输入要删除的学生信息的学号：\n");
	scanf("%d",&snum);
	for(i=0;i<n;i++)
	{
		if(stud[i].num == snum)
			break;
	}
	for(j=i;j<n-1;j++)
		stud[j] = stud[j+1];
}
void insert(struct stuscore stud[],int n)
{
	// 插入一个学生的信息，要求插入后信息依然有序
	struct stuscore t; 
	int i,j;
	printf("\n请输入插入的学生的信息：\n");
	t = input();
	for(i=0;i<n;i++)
	{
		if(t.score>stud[i].score)
			break;
	}
	for(j=n-1;j>=i;j--)
		stud[j+1] = stud[j];
	stud[i] = t; 
 } 
   
struct stuscore input()
{
	struct stuscore stu;
	scanf("%d%s%f",&stu.num,stu.name,&stu.score);
	return stu;                                // 就像返回一个常数一样返回结构体 
}

void display(struct stuscore stud[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%-03d\t\t%-15s\t%-10.1f\n",stud[i].num,stu[i].name,stu[i].score); 
}
void sort(struct stuscore stud[],int n)
{
	int i,j,t;
	struct stuscore temp;
	for(i=0;i<n-1;i++)
	{
		t = i;
		for(j=i+1;j<n;j++)
		{
			if(stud[t].score<stud[j].score)
				t = j;
		}
		if(t!=i)
		{
			temp = stud[t]; stud[t] = stud[i];stud[i] = temp;
		}
	}
 } 
*/
/* exp10-7 通过结构体指针变量输出结构体变量 */
/* 
#include"stdio.h"
struct stuscore
{
	int num;
	char *name;
	float score;
}ss1 = {1001,"xushuishuai",100},*stup;
int main()
{
	stup = &ss1;                 //将指向 
	printf("直接输出结构体变量的成员：\n");
	printf("num = %d,name = %s,score = %f\n",ss1.num,ss1.name,ss1.score);
	printf("用结构体指针的第一种写法输出结构体变量的成员：\n");
	printf("num = %d,name = %s,score = %f\n",(*stup).num,(*stup).name,(*stup).score);
	printf("用结构体指针的第二种写法输出结构体变量的成员：\n");
	printf("num = %d,name = %s,score = %f\n",stup->num,stup->name,stup->score);
	return 0;
 } 
*/
/* exp10-8 用指针变量输出结构体数组 */
/* 
#include"stdio.h"
struct stuscore
{
	int num;
	char *name;
	float score;	
} stus[5] = {
			{1001,"Zhangsan",85},
			{1002,"Lisi",62.6},
			{1003,"LiuFang",92.5},
			{1004,"ChenLin",87},
			{1005,"Wanming",58}
			};                              //;不要少
int main() 
{
	struct stuscore *ps;
	printf("Num\tName\tScore\n");
	for(ps=stus;ps<stus+5;ps++)                        //这里不用加&，因为数组名就是地址 
	{
		printf("%d\t%s\t%f\n",p->num,ps->name,ps->score);
	}
	return 0;
}
*/
/* exp10-9  计算学生的平均成绩，要求使用结构体指针变量作为函数参数 */
/* 
#include"stdio.h"
struct stuscore
{
	int num;
	char *name;
	float score;
} stus[5] = {
				{1001,"ZhangSan",85},
				{1002,"Lisi",62.5}, 
				{1003,"LiuFang",92.5},
				{1004,"ChenLin",87},
				{1005,"Wanming",58}
		    };
int main()
{
	struct stuscore *ps;
	void ave(struct stuscore *ps);
	ps = stus;
	ave(ps);
	return 0;
}
void ave(struct stuscore *ps)
{
	int i;
	float average,s=0;
	for(i=0;i<5;i++)
		s+=(ps++)->score;                          //注意这个运算 
	average = s/5;
	printf("s = %f,average = %f",s,average);
}
*/
/* exp10-10 函数返回值为指向结构体变量的指针 */
/* 编写程序，输入学生信息(学号姓名，电话),保存在通讯录里(类型为结构体),然后输入学生姓名，输出其学号，姓名，联系方式。 */
/* 
#include"stdio.h"
struct student
{
	int num;
	char name[20];
	char phone[20];
};
int main()
{
	struct student stu[3];
	struct student *ppstu;
	struct student *search(char *sname,struct student * pstu);
	int i;
	char sname[20];
	printf("please input the information(number,name,phonenumber):\n");
	for(i=0;i<3;i++)
	{	
		scanf("%d%s%s",&stu[i].num,stu[i].name,stu[i].phone);
	}
	printf("Please input the name:");
	getchar();
	gets(sname);
	ppstu = search(sname,stu);                    //参数是字符串指针，结构体数组指针，因为字符数组，结构体数组的数组名就是地址
	if(ppstu!=NULL)								  //所以可以直接传，不用加* 
		printf("student Num:%d, name:%s, phonenumber:%s",ppstu->num,ppstu->name,ppstu->phone);
	else
		printf("Not found");	
	return 0;
}
struct student *search(char *sname, struct student *pstu)
{
	struct student *pstul;                //这里要不定义一个结构体指针变量，要不定义i 来循环
	for(pstul = pstu;pstul<pstu+3;pstul++)
	{
		if(strcmp(sname,pstul->name)==0)
			return pstul;
	}
	return NULL;
}
*/
 /* exp10-11 分配一段内存空间，保存一个学生的信息 */
 /* 
 #include"stdlib.h"          //包含mallocde的头文件 
 #include"stdio.h"
 int main()
 {
 	struct stuscore
	{
		int num;
		char *name;
		float score;
	} *ps;
	ps = (struct stuscore *)malloc(sizeof(struct stuscore));             // 前面加()是强制转换，malloc函数的运用，sizeof函数用得好 
	ps -> num = 1001;
	ps -> name = "ZhangSan";
	ps -> score = 62.5;
	printf("num = %d,name = %s, score = %f",ps->num,ps->name,ps->score);
	return 0;
}
*/
/* exp10-12 创建一个单项链表，并对其进行查找，插入，删除操作 */
/* 
//每个函数首先要查看是否有这个链
//每次都是先循环到需要的点（查找，添加，删除），然后在分情况讨论
//每个函数里都要有个指针变量来先指代head，然后继续向下走 

//注意判断是否相等的符号是 == 而不是一个等号 
#include"stdio.h"
#include"string.h" 
#include"stdlib.h"               //包含malloc的头文件 
#define LEN sizeof(struct stuscore)
struct stuscore
{
	int num;
	char name[20];
	float score;                        //定义链表结构数据域  
	struct stuscore *next;              //定义链表结构指针域 
};

int main()
{
	struct stuscore * creat(struct stuscore *head);       //创建链表函数
	void search(struct stuscore *head);                 //查找链表函数
	struct stuscore * insert(struct stuscore *head);      //插入链表函数
	struct stuscore * del(struct stuscore *head);         //删除链表函数
	void  output(struct stuscore *head);                  //输出链表函数
	struct stuscore * head;                               //head 为链表的头指针
	int c,flag =1;
	head = NULL;              //指针的初值 有意思 
	while(flag)
	{	
		//在屏幕上画一个主菜单
		printf("\n\n************链表的基本操作*************\n\n");
		printf("  1. creat\n\n");
		printf("  2. search\n\n");
		printf("  3. insert\n\n");
		printf("  4. delete\n\n");
		printf("  5. output\n\n");
		printf("  0. exit\n\n");
		printf("****************************************\n\n");
		printf("please select: ");
		scanf("%d",&c);                       //输入选项
		switch(c)
		{
			case 1: head = creat(head=NULL); break;               //要注意这里每次创建head都必须赋初值NULL，否则再创建的时候有冲突 
			case 2: search(head); break;
			case 3: head = insert(head); break;
			case 4: head = del(head); break;
			case 5: output(head); break;
			default: flag = 0;                               //改变标志变量的值，推出循环 
		}
	}
	return 0;
}

//书中给的创建函数有点麻烦，记住，只要有重复的都要想办法减少重复 
struct stuscore *creat(struct stuscore *head)
{
	struct stuscore *p1,*p2;
	char c = 'y';
//	p1 = p2 = (struct stuscore *)malloc(LEN);                 //申请新节点
//	printf("Please input num: ");
//	scanf("%d",&p1->num);
//	printf("Please input name: ");
//	getchar();
//	gets(p1->name);
//	printf("Please input score: ");
//	scanf("%f",&(*p1).score);
//	p1->next = NULL;                                           //将新节点的指针域设置为空!!!!!
//
	while(c=='y'|| c=='Y')
	{

		p1 = (struct stuscore *)malloc(LEN);                   //申请下一个节点
		printf("Please input num: ");
		scanf("%d",&p1->num);
		printf("Please input name: ");
		getchar();
		gets(p1->name);
		printf("Please input score: ");
		scanf("%f",&p1->score);
		p1->next = NULL;
		if(head == NULL)
			p2 = head = p1;                                        //空表接入表头 
		else
		{	
			p2->next = p1;                                     //非空表接入表尾
			p2 = p1;                                             

	    }
		printf("continue or not (y or n): ");
		getchar();
		c=getchar(); 
	}
	return head;
}
		
void search(struct stuscore *head)
{
	struct stuscore *p;
	int x;
	printf("Please input search num: ");
	scanf("%d",&x);
	p = head;
	while(p!=NULL && p->num != x)
	{
		p = p->next;
	}
	if(p == NULL)
		printf("Not Found\n");
	else
		printf("num = %d,name = %s,score = %f\n",p->num,p->name,p->score);

}

struct stuscore *insert(struct stuscore *head)
{
	struct stuscore *p,*p1,*q;                //输入的节点，当前的节点，上一个节点 
	int x;
	q = (struct stuscore *)malloc(LEN);          //创建新节点
	printf("Please input num: ");
	scanf("%d",&q->num);
	printf("Please input name: ");
	getchar();
	gets((*q).name);
	printf("Please input score: ");
	scanf("%f",&q->score);
	x = q->num;
	if(head == NULL)                             //若为空列表，插在链表头 
	{
		head = q;
		head->next = NULL;
	}
	else
	{
		p = head;
		while (p->num < x && p->next != NULL)     //查找位置
		{
			p1 = p;
			p = p->next;
		}
		if(p->num >= x)
		{ 
			if(p == head)                    //新节点插在链表头 
			{
				head = q;
				q->next = p;
			}
			else                              //插在链表中 
			{
				p1->next = q;
				q->next = p;
			}
		}
		else                                  //插在表尾 
		{
			p->next = q;
			q->next = NULL;
		}
	}
	return head;
}

struct stuscore *del(struct stuscore *head)
{
	struct stuscore *p,*p1;                     //当前的节点，上一个节点 
	int x;
	p = head;
	if(head == NULL)                             //每个函数都要考虑存不存在节点   
		printf("\nList is null! \n");
	else
	{
		printf("Please input number: ");            //输入待删除学生的学号
		scanf("%d",&x);
		while(p->num != x && p->next != NULL)          
		{
			p1 = p;
			p = p->next;
		}
		if(p->num ==x)
		{
			if(p == head)
			{
				head = head->next;
				free(p);                           //释放内存 
			}
			else
			{
				p1->next = p->next;
				free(p);
			} 
		}
		else
			printf("\nNo find student! \n");
	}
	return head;
}

void output(struct stuscore *head)
{
	struct stuscore *p;
	printf("Num\t\tName\t\tScore\n");
	p = head;
	while(p!=NULL)
	{
		printf("%d\t\t%s\t\t%f\n",p->num,p->name,p->score);
		p = p->next;
	}
}
*/ 

/* exp10-13 在计算机等级考试中，有姓名，年龄，类别，证件号码等，如果是军人，则证件号码输入的是军官证号，否则是身份证号*/
/* 
#include"stdio.h"
#include"stdlib.h"
struct exam
{
	char name[20];
	int age;
	char class1;
	union{
		char idcard[18];
		char armycard[8];
	}cate;
}exams[3];

int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("please enter name: ");
		gets(exams[i].name);
		printf("please enter age: ");
		scanf("%d",&exams[i].age);
		printf("Is an armyman? Please enter (y/n): ");
		getchar();
		scanf("%c",&exams[i].class1);                              //主要是判断不同的类型 
		getchar();
		if(exams[i].class1 == 'y' || exams[i].class1 == 'Y')         
		{
			printf("please input armyman card: ");
			gets(exams[i].cate.armycard);
		}
		else
		{
			printf("please enter idcard: ");
			gets(exams[i].cate.idcard);
		}
	}
	
	for(i=0;i<2;i++)
	{
		printf("%10s\t%4d\t",exams[i].name, exams[i].age);
		if(exams[i].class1 == 'y' || exams[i].class1 == 'Y')
			printf("%s\n",exams[i].cate.armycard);
		else
			printf("%s\n",exams[i].cate.idcard);
	}
	return 0;
}
*/
/* exp10-14  定义枚举变量，赋值并输出其值 */
/*
#include"stdio.h"
int main()
{
	enum weekday{ sun,mon,tue,wed,thu,fri,sat } a,b,c;
	a = sun;
	b = mon;
	c = tue;
	printf("a = %d,b = %d,c = %d",a,b,c); 
	return 0;
}
*/
/* exp10-15 由键盘输入任意一个1~7的数，输出其对应的星期 */

#include"stdio.h"
int main()
{
	enum weekday {sun,mon,tue,wed,thu,fri,sat} week;
	int x;
	printf("Please input data: ");
	scanf("%d",&x);
	week = (enum weekday)x;                        //将输入的整型强制转化成枚举类型
	switch(week)
	{
		case mon: printf("Today is Monday\n");break; 
		case tue: printf("Today is Tuesday\n");break; 
		case wed: printf("Today is Wednesday\n");break; 
		case thu: printf("Today is Thursday\n");break; 
		case fri: printf("Today is Friday\n");break; 
		case sat: printf("Today is Saturday\n");break; 
		case sun: printf("Today is Sunday\n");break; 
		default : printf("input data error \n");
	}
	return 0;
}











































 
