/*
*   ��ʮ�£��ṹ��͹����壺 1.�ṹ�������
*                            2.�ṹ�������ʹ��
*                            3.�ṹ������

*                            4.�ṹ�������Ϊ�����Ĳ����ͷ���ֵ
*                            5.�ṹ����ָ��

*                            6.��̬�ڴ����������

*                            7.����������
*                            8.ö������
*                            9.�Զ�������

*                           10.ע������ 
*                           11.С�� 


*      1.�ṹ������룺�Ѳ�ͬ�������ͣ��໥������һ�����ݺϳ�һ������ʹ�ã�����һ��ѧ���ĸ�����Ϣ������excel���һ��

*      2.�ṹ�������ʹ�ã� 1.�ṹ������Ķ��壺�ṹ�������������ַ��� ���������� 
*                           2.�ṹ��������������ַ�����1.������ֱ�����ã����ڽ������������ͱ���һ��
*                                                       2.��Ա��ʹ�ã����Ե���ʹ�ã������ͱ���һ���������밴�գ��ṹ�������.��Ա�� 
*                           3.�ṹ������ĳ�ʼ�� ����ͨ����һ����1.����ʱ��ʼ��
*                                                                2.����֮��ͨ����ֵ�������뺯����� 
*                           4.�ṹ�������ʹ�ã�ͨ����Աʵ�� 

*      3.�ṹ�����飺 ���������Ƕ��ͬ���͵Ľṹ�� 

*      4.�ṹ�������Ϊ�����Ĳ����ͷ���ֵ :
*                           1.�ṹ�������Ϊ��������ʱ������ͨ����һ��  ����  �ڴ棻
*                           2.���ṹ��������Ϊ��������ʱ��������һ��  ����  �ڴ� ������һ��û�з���ֵ 
*                           3.���ǲ���˵����������������ʱ��ַ�������ڴ棬��ָ�룬����ȣ������������Ǳ���ֵ����������ڴ� 

*      5.�ṹ����ָ�룺 ��Ҫ��ָ��ṹ������������ָ�룬�Լ�������Ϊ���������ͷ���ֵ 
*                      1.ָ��ṹ�������ָ��: �ṹ�������Ա�����ֱ�ʾ�������ṹ�����(.)��ָ������֣�(*ָ����).  ->) 
*                      2.ָ��ṹ�������ָ��: ָ��ĸ�ֵҪע�� 
*                      3.ָ��ṹ�������ָ����Ϊ��������    
*                      4.ָ��ṹ�������ָ����Ϊ��������ֵ 

*      6.��̬�ڴ����������
*                      1.��̬�ڴ���䣺4���ڴ�ռ䣬�����ڴ�ռ���亯��
*                      2.��ָ�봦������ 
*                      3.����Ķ��壺������data)��ָ����next�� 
*                      4.����Ļ������������������ң����룬ɾ��  �ŵ㣺�ڴ������ʸߣ�ȱ���Ǳ���ӡ�ͷָ�롱��ʼ 

*      7.���������ͣ� �Ѳ�ͬ�ı��������ͬһ���ڴ浥Ԫ�У���ҪΪ�˽�ʡ�ڴ� 
*                     1.���ֶ��巽ʽ ����ṹ����ͬ��
*                     2.��������������ã�1.ֻ�����ó�Ա��
*                                         2.������������ֵ��ֻ��ʹ������ֵ����Ϊ֮ǰ�Ķ��������� 
*                                         3.�����岻�ܱ���ʼ���������ڴ��ǵû�
*                                         4.���������������Ϊ�����Ĳ����ͷ���ֵ��������ʹ��ָ�����������ָ��
*										  5.��ҪӦ�ã� ��Ϊ�ṹ��ĳ�Ա 

*      8.ö������ : 1.���壬��ֵ��Ӧ�ã�1.���ֶ��巽ʽ����ṹ�壬������һ��
*                           			2.ö�ٳ��������ַ�����ϵͳ�Զ���ֵ0��1��2.�����û�Ҳ�����Լ���ֵ
*                           			3.ö��Ԫ���ǳ��������Ǳ����������ڳ������ø�ֵ����ٸ�ֵ
*                                       4.ö�ٱ���ֻ��ȥö�ٳ���������֮һ 
*                          			    4.ö�ٱ�������ֱ��ȡһ������ֵ��Ҫ����ǿ��ת�� 

*      9.�Զ������� �� ��������һ���д
*                      Ӧ����Ҫ��Ϊ�˼�д 

*     10.ע����� 1.ע�⹲����ͽṹ��ʹ�õ�ע������ 



*     11.С��    1.�ṹ����ǰѲ�ͬ���������ͣ��໥������һ��������ϵ�һ�����������������ģ��������;������ͣ�ʵ�ͣ��ַ��ͣ� 
*                2.�ṹ�������ʹ������ͨ���������ͣ���ȫ��ͬ�������ж��壬����ֵ�����㣬����ȶ���ͨ���ṹ������ĳ�Աʵ�ֵ� 
*                3.�ṹ�����������ͨ�������ṹ������������顣��ָ���ʾ�ṹ�����������ʱ����ͨ�ı���������һ����ǰ���&�����治��
 
*                1.�ṹ����൱��excel����У����ṹ��������൱�ڱ� 

*                ������Ҫ�ǽ��� �ṹ�壬���� ������ 
*                 
*                         
*/ 

/* exp10-1  ����30��ѧ��C���Կγ̵ĳɼ�������ѧ�ţ��������ɼ� �������ɸߵ��͵�˳�����  */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	int i,j,k,t1,t2;
	int num[3];                   //����ѧ��һά���� 
	char name[3][20];             // ����������ά���� 
	char t3[20];                    //���������ַ���ָ����Ϊ���� 
	float score[3];               //����ɼ�һά���� 
	printf("please input 30 student's data(num,name,score):\n")  ;
	for(i=0;i<3;i++)
	{
		scanf("%d%s%f",&num[i],name[i],&score[i]);       //���������Ϣ 
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
			t2=num[i];num[i]=num[k];num[k]=t2;                // �ַ������ʵ����ַ��� 
			strcpy(t3,name[i]);strcpy(name[i],name[k]);strcpy(name[k],t3);
		}
	} 
	printf("�����ĳɼ�:  \n");
	printf("number\t\tname\t\tscore\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%6.2f\n",num[i],name[i],score[i]);	
	 } 
	return 0;
 } 
*/

/* exp10-2-1 ����ṹ���������ʼ���������������  */
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
	ss1.name = "Lisa";               //������Ϊ���⸳ֵ�����Ա������ַ���ָ�룬���ַ������鲻�ܶ��⸳ֵ 
	printf("please input score: ");
	scanf("%f",&ss1.score);
	ss2 = ss1;
	printf("Num = %d\nName = %s\nScore = %f\n",ss2.num,ss2.name,ss2.score);
	return 0;
}
*/
/* exp10-4 �ṹ�������ʹ�� */
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
	scanf("%d%s%f",&s1.num,s1.name,&s1.score);   //���뺯������Ҫ���Ǳ����ĵ�ַ������Ҫ��&����name��������Ϊ��������ǵ�ַ
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
/* exp10-5 �ṹ������   ������ʮ��ͬѧ����Ϣ(ѧ�ţ����֣��ɼ�),�����ճɼ����ɸߵ������ */
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
	
	//ʹ��ð���㷨�������30��ѧ������Ϣ���ɼ��Ӹߵ�������
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
	
	// �����������Ϣ 
	printf("\nѧ��\t����\t\tƽ���ɼ�\n");
	for(i=0;i<3;i++)
	{
		printf("%-5d\t%-20s\t%-10.1f\n",stu[i].num,stu[i].name,stu[i].score);
	 } 
 } 
*/

/* exp10-6 �ýṹ������ʵ�� ѧ���ɼ���¼�룬��ʾ���������ӣ�ɾ����Ϣ */
/* 
#include"stdio.h"
// �����ⲿ���� 
struct stuscore{
	int num;
	char name[20];
	float score;
};
struct stuscore stu[30];
struct stuscore input();                         //��������ѧ���ɼ�����������ֵ��һ���ṹ�����
void  display(struct stuscore stud[],int n);     //������ʾ�����������ǽṹ�����
void sort(struct stuscore stud[],int n);         //����������
void insert(struct stuscore stud[],int n);       //�������Ӻ���
void del(struct stuscore stud[],int n);          //����ɾ������

int main()
{
	int i, count;
	char ch;
	printf("Please input the number of students: ");
	scanf("%d",&count);
	printf("Please input the information(number,name,score):\n");
	for(i=0;i<count;i++)
		stu[i] = input();                        //�������뺯��
	printf("\n�ɼ�����ǰ��ѧ����Ϣ���£�\n");
	display(stu, count);                     		 //������ʾ����
	sort(stu,count);                                  //���������� 
	printf("\n�ɼ�������ѧ����Ϣ���£�\n");
	display(stu,count);
	
	printf("\n\n �Ƿ�Ҫ������ѧ������Ϣ����y or n):  ");
	getchar();                                        //�����ո� 
	scanf("%c",&ch);
	if(ch == 'Y'||ch == 'y')
	{
		insert(stu,count);
		count++;
		printf("\n�����ѧ����Ϣ���£�\n");
		display(stu,count); 
	}
	
	printf("\n\n�Ƿ�Ҫɾ��ĳ��ѧ������Ϣ��(y or n):  ");
	getchar();                                        //�����ո� 
	scanf("%c",&ch);
	if(ch == 'y'||ch == 'Y')
	{
		del(stu,count);
		count--;
		printf("\nɾ����ѧ����Ϣ���£�\n");
		display(stu,count);
	}
	return 0;		
 }
 
void del(struct stuscore stud[],int n)
{
	int i,j,snum;
	printf("\n������Ҫɾ����ѧ����Ϣ��ѧ�ţ�\n");
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
	// ����һ��ѧ������Ϣ��Ҫ��������Ϣ��Ȼ����
	struct stuscore t; 
	int i,j;
	printf("\n����������ѧ������Ϣ��\n");
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
	return stu;                                // ���񷵻�һ������һ�����ؽṹ�� 
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
/* exp10-7 ͨ���ṹ��ָ���������ṹ����� */
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
	stup = &ss1;                 //��ָ�� 
	printf("ֱ������ṹ������ĳ�Ա��\n");
	printf("num = %d,name = %s,score = %f\n",ss1.num,ss1.name,ss1.score);
	printf("�ýṹ��ָ��ĵ�һ��д������ṹ������ĳ�Ա��\n");
	printf("num = %d,name = %s,score = %f\n",(*stup).num,(*stup).name,(*stup).score);
	printf("�ýṹ��ָ��ĵڶ���д������ṹ������ĳ�Ա��\n");
	printf("num = %d,name = %s,score = %f\n",stup->num,stup->name,stup->score);
	return 0;
 } 
*/
/* exp10-8 ��ָ���������ṹ������ */
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
			};                              //;��Ҫ��
int main() 
{
	struct stuscore *ps;
	printf("Num\tName\tScore\n");
	for(ps=stus;ps<stus+5;ps++)                        //���ﲻ�ü�&����Ϊ���������ǵ�ַ 
	{
		printf("%d\t%s\t%f\n",p->num,ps->name,ps->score);
	}
	return 0;
}
*/
/* exp10-9  ����ѧ����ƽ���ɼ���Ҫ��ʹ�ýṹ��ָ�������Ϊ�������� */
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
		s+=(ps++)->score;                          //ע��������� 
	average = s/5;
	printf("s = %f,average = %f",s,average);
}
*/
/* exp10-10 ��������ֵΪָ��ṹ�������ָ�� */
/* ��д��������ѧ����Ϣ(ѧ���������绰),������ͨѶ¼��(����Ϊ�ṹ��),Ȼ������ѧ�������������ѧ�ţ���������ϵ��ʽ�� */
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
	ppstu = search(sname,stu);                    //�������ַ���ָ�룬�ṹ������ָ�룬��Ϊ�ַ����飬�ṹ����������������ǵ�ַ
	if(ppstu!=NULL)								  //���Կ���ֱ�Ӵ������ü�* 
		printf("student Num:%d, name:%s, phonenumber:%s",ppstu->num,ppstu->name,ppstu->phone);
	else
		printf("Not found");	
	return 0;
}
struct student *search(char *sname, struct student *pstu)
{
	struct student *pstul;                //����Ҫ������һ���ṹ��ָ�������Ҫ������i ��ѭ��
	for(pstul = pstu;pstul<pstu+3;pstul++)
	{
		if(strcmp(sname,pstul->name)==0)
			return pstul;
	}
	return NULL;
}
*/
 /* exp10-11 ����һ���ڴ�ռ䣬����һ��ѧ������Ϣ */
 /* 
 #include"stdlib.h"          //����mallocde��ͷ�ļ� 
 #include"stdio.h"
 int main()
 {
 	struct stuscore
	{
		int num;
		char *name;
		float score;
	} *ps;
	ps = (struct stuscore *)malloc(sizeof(struct stuscore));             // ǰ���()��ǿ��ת����malloc���������ã�sizeof�����õú� 
	ps -> num = 1001;
	ps -> name = "ZhangSan";
	ps -> score = 62.5;
	printf("num = %d,name = %s, score = %f",ps->num,ps->name,ps->score);
	return 0;
}
*/
/* exp10-12 ����һ������������������в��ң����룬ɾ������ */
/* 
//ÿ����������Ҫ�鿴�Ƿ��������
//ÿ�ζ�����ѭ������Ҫ�ĵ㣨���ң���ӣ�ɾ������Ȼ���ڷ��������
//ÿ�������ﶼҪ�и�ָ���������ָ��head��Ȼ����������� 

//ע���ж��Ƿ���ȵķ����� == ������һ���Ⱥ� 
#include"stdio.h"
#include"string.h" 
#include"stdlib.h"               //����malloc��ͷ�ļ� 
#define LEN sizeof(struct stuscore)
struct stuscore
{
	int num;
	char name[20];
	float score;                        //��������ṹ������  
	struct stuscore *next;              //��������ṹָ���� 
};

int main()
{
	struct stuscore * creat(struct stuscore *head);       //����������
	void search(struct stuscore *head);                 //����������
	struct stuscore * insert(struct stuscore *head);      //����������
	struct stuscore * del(struct stuscore *head);         //ɾ��������
	void  output(struct stuscore *head);                  //���������
	struct stuscore * head;                               //head Ϊ�����ͷָ��
	int c,flag =1;
	head = NULL;              //ָ��ĳ�ֵ ����˼ 
	while(flag)
	{	
		//����Ļ�ϻ�һ�����˵�
		printf("\n\n************����Ļ�������*************\n\n");
		printf("  1. creat\n\n");
		printf("  2. search\n\n");
		printf("  3. insert\n\n");
		printf("  4. delete\n\n");
		printf("  5. output\n\n");
		printf("  0. exit\n\n");
		printf("****************************************\n\n");
		printf("please select: ");
		scanf("%d",&c);                       //����ѡ��
		switch(c)
		{
			case 1: head = creat(head=NULL); break;               //Ҫע������ÿ�δ���head�����븳��ֵNULL�������ٴ�����ʱ���г�ͻ 
			case 2: search(head); break;
			case 3: head = insert(head); break;
			case 4: head = del(head); break;
			case 5: output(head); break;
			default: flag = 0;                               //�ı��־������ֵ���Ƴ�ѭ�� 
		}
	}
	return 0;
}

//���и��Ĵ��������е��鷳����ס��ֻҪ���ظ��Ķ�Ҫ��취�����ظ� 
struct stuscore *creat(struct stuscore *head)
{
	struct stuscore *p1,*p2;
	char c = 'y';
//	p1 = p2 = (struct stuscore *)malloc(LEN);                 //�����½ڵ�
//	printf("Please input num: ");
//	scanf("%d",&p1->num);
//	printf("Please input name: ");
//	getchar();
//	gets(p1->name);
//	printf("Please input score: ");
//	scanf("%f",&(*p1).score);
//	p1->next = NULL;                                           //���½ڵ��ָ��������Ϊ��!!!!!
//
	while(c=='y'|| c=='Y')
	{

		p1 = (struct stuscore *)malloc(LEN);                   //������һ���ڵ�
		printf("Please input num: ");
		scanf("%d",&p1->num);
		printf("Please input name: ");
		getchar();
		gets(p1->name);
		printf("Please input score: ");
		scanf("%f",&p1->score);
		p1->next = NULL;
		if(head == NULL)
			p2 = head = p1;                                        //�ձ�����ͷ 
		else
		{	
			p2->next = p1;                                     //�ǿձ�����β
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
	struct stuscore *p,*p1,*q;                //����Ľڵ㣬��ǰ�Ľڵ㣬��һ���ڵ� 
	int x;
	q = (struct stuscore *)malloc(LEN);          //�����½ڵ�
	printf("Please input num: ");
	scanf("%d",&q->num);
	printf("Please input name: ");
	getchar();
	gets((*q).name);
	printf("Please input score: ");
	scanf("%f",&q->score);
	x = q->num;
	if(head == NULL)                             //��Ϊ���б���������ͷ 
	{
		head = q;
		head->next = NULL;
	}
	else
	{
		p = head;
		while (p->num < x && p->next != NULL)     //����λ��
		{
			p1 = p;
			p = p->next;
		}
		if(p->num >= x)
		{ 
			if(p == head)                    //�½ڵ��������ͷ 
			{
				head = q;
				q->next = p;
			}
			else                              //���������� 
			{
				p1->next = q;
				q->next = p;
			}
		}
		else                                  //���ڱ�β 
		{
			p->next = q;
			q->next = NULL;
		}
	}
	return head;
}

struct stuscore *del(struct stuscore *head)
{
	struct stuscore *p,*p1;                     //��ǰ�Ľڵ㣬��һ���ڵ� 
	int x;
	p = head;
	if(head == NULL)                             //ÿ��������Ҫ���Ǵ治���ڽڵ�   
		printf("\nList is null! \n");
	else
	{
		printf("Please input number: ");            //�����ɾ��ѧ����ѧ��
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
				free(p);                           //�ͷ��ڴ� 
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

/* exp10-13 �ڼ�����ȼ������У������������䣬���֤������ȣ�����Ǿ��ˣ���֤������������Ǿ���֤�ţ����������֤��*/
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
		scanf("%c",&exams[i].class1);                              //��Ҫ���жϲ�ͬ������ 
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
/* exp10-14  ����ö�ٱ�������ֵ�������ֵ */
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
/* exp10-15 �ɼ�����������һ��1~7������������Ӧ������ */

#include"stdio.h"
int main()
{
	enum weekday {sun,mon,tue,wed,thu,fri,sat} week;
	int x;
	printf("Please input data: ");
	scanf("%d",&x);
	week = (enum weekday)x;                        //�����������ǿ��ת����ö������
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











































 
