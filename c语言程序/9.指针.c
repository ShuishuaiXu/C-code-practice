/*
*	第九章：指针      1. 指针的概念
*                     2. 变量的指针（地址） 和 指向变量的指针变量  
*                     3. 数组的指针（地址） 和 指向数组的指针变量  （内容最多） 
*                     4. 字符串的指针 和 和指向字符串的指针变量
*                     5. 函数的指针变量
*                     6. 指针型函数
*                     7. 指针数组和指向指针的指针
*                     8. 小结
*                     9. 注意事项

*     1. 指针的概念： 1.指针其实就是地址，是一种数据类型。
*                     2.用指针变量因为指的是地址，因此可以表示各种数据结构，能很方便的使用数组和字符串。

*     2. 变量的指针和指向变量的指针变量：定义，引用，指针变量作为函数参数 
*                     1. 指针变量的定义： 1.注意初始化和赋值的两种区别  加不加 * 
*                                         2.定义时*是区分普通变量和指针变量，其他时候是指针运算符， 
*                                         3. 变量的直接引用（通过变量名） 和 间接引用（通过指针也就是地址） 

*     3. 数组的指针和指向数组的指针变量：
*                      1.指向数组元素的指针： 注意数组名就是数组的首地址，即数组名就是一个指针 
*                      2.数组元素的引用： 1.如果指针变量p已指向数组中的一个元素，则p+1指向的数组的下一个元素 
*                                         2.引用一个数组元素的两种方法：下标法a[i] 和 指针法*(a+i)或 *(p+i) (这里p = a) 
*                                         3.注意指针的运算    如p++,p-- 
*                      3.用数组名作为函数参数： 
*                                         1.实参数组和形参数组共用同一段内存单元 
*                                         2.用指针代替变量或者数组都是传入的地址，这点谨记，所以引用函数时不用写 * 
*                                         3.用数组名作为函数参数的四种方法：实参和形参各自填入数组名和指针变量。不管怎么样，实参都是数组的首地址 
*                      4.多维数组的指针和指向多维数组的指针变量 
*                                         1.多维数组的地址：1多维数组可以分解为多个一维数组 
*                                                           2.int a[3][4];那么a+1代表的是第二行的首地址即&a[1][0],a[1] 
*                                                           3.二维数组与一维数组的不同，在二维数组中*a等价于a 
*                                                           4.在二维数组中，a[i],&a[i],*(a+i),a+i,&a[i][0] 都表示a的i行0列元素的首地址 
*                                         2.指向多维数组的指针变量  int (*p)[4]  括号不能少，4指的是二维数组的列数而不是行数 

*      4.字符串的指针和指向字符串的指针变量：
*                      1.字符串访问： 1.两种方法：单个字符串：1使用字符数组，2 使用字符串指针（这个更简便） 
*                                     			  多个字符串：1使用多维字符数组 2.使用指针数组 
*                                     2.字符串指针和字符数组一样用%s输出的时候不用加* ！！！！！！ 
*                      2.字符串指针变量与字符数组的区别：字符串指针变量存放的是首地址，并以'\0'结束，而字符数组存放的是整个字符串和'\0' 

*      5.指向函数的指针变量 ：1.函数名就是函数所占内存区的首地址   注意形式：int (*p)()  与多维数组的指针变量相区别 

*      6.指针形函数   1. 返回值为指针的函数叫指针型函数 

*      7.指针数组和指向指针的指针 
*                      1.指针数组： 1.指针数组主要用来表示二维数组的，特别是多个字符串 ！！！！ 
*                                   2.指针数组表示的字符串的引用不用加* 
*                      2.指向指针的指针： 1.定义char **p ,   在二维数组中 数组名a就是指向指针的指针 ！！！！！！ 
*                                         2.比如指针数组中，name+1 是 name[0+1] 的地址 

*     9.注意事项： 本章注意 关于变量，数组它们指针的定义，引用，和作为函数的参数这三点 
*                  1.对于定义：指针的初始值和赋值的不同要注意 
*                  2.对于引用：一种是变量（数组元素）直接引用，一种是通过指针即访问它们的地址进行引用。
*                  3.用数组名作为函数参数的四种方法：实参和形参各自填入数组名和指针变量。不管怎么样，实参都是数组的首地址 

*                  4.地址是一个字节一个编号，但如果指针变量指向的Int型，则占据4个字节，则下次加1代表的是内存的加4，这点在数组中要尤为注意。 
*                  5.定义时*是区分普通变量和指针变量，其他时候是指针运算符， 
*                  6.注意只有同为指针类型才能进行运算，数组名也算是指针类型 
*                  7.注意二维数组与一维数组在地址方面的不同 ,二维数组会加*主要考虑到要显示第几行第几列的元素 如 *(*(p+i)+j) 
*                  8.指针（数组名）作为函数参数时，名字不同，但是都共用一个内存，所以不用返回值 
*                  9.指针变量在未取得确定地址前使用很容易引起错误 

*           各种各样的区别： 
*                 10.注意多维数组的指针变量，函数的指针变量，指针函数的定义和用法的区别 ！！！！！！ 
*                 11.指向变量，数组，多维数组，字符串，函数，指针的指针变量             
*                 12.指针变量，指针数组，指针型函数      上面和下面要学会区分！！！！！
*                 13.指针什么的，比如像上面一条，这样的都与地址有关，像函数就是返回值是地址，数组就是存储的是地址
*                 14.而指向什么的指针变量是说明该指针指向的是什么。 
*                 15.在二维数组中，a[i],&a[i],*(a+i),a+i,&a[i][0] 都表示a的i行0列元素的首地址 
*                 16.注意区分一维数组和二维数组的指针表示的不同：如加不加 *，a[i]表示的区别呀等，
*                 17.注意二维数组里的整型还是字符串 这两者的引用的区别 
*                 18.指针表示的字符串不加* 

*/

/* exp9-1 利用指针变量访问变量 */
/* 
#include"stdio.h"
int main()
{
	int a = 10, *p ;                    // 这里 * 在定义时时区分指针变量和普通变量 
	p = &a;                            // 注意 & 是地址运算符，意思是把 a 的地址给 p 
	printf("%d\n",*p);                 // 这里 * 是指针运算符， *p 意思是指向地址为 p 的对象。 
	return 0;
 } 
*/

/* exp9-2 利用指针输入/输出实型数据  */
/* 
#include"stdio.h"
int main()
{
	float x, *px = &x;                      //可以这样，因为这里 *px 代表的是指针，是地址 
	printf("please input a number: ");
	scanf("%f",&x);
	printf("x = %.2f\n",*px);
	return 0;
 } 
*/

/* exp9-3  交换两个指针变量所指向的值 */
/* 
#include"stdio.h"
int main()
{
	int x = 10, y = 20, t;
	int *px = &x, *py = &y;
	
	t = *px;                              //交换指针变量所代表的值 
	*px = *py;
	*py = t;
	
	printf("*px = %d, *py = %d\n", *py, *py);  // 输出的是个字指向地址里存储的值 
	printf("x = %d, y = %d\n", x, y);
	printf("%d,%d",px,py);                    // 输出的是 x,y 的地址 
	return 0; 
 } 
*/

/* exp9-4 利用指针变量实现两个整数的排序 */
/* 
#include"stdio.h"
int main()
{
	int n1,n2;
	int *p, *n1_p = &n1,*n2_p = &n2;         
	printf("please input two numbers: ");
	scanf("%d%d",&n1,&n2);
	printf("n1 = %d,n2 = %d\n",n1,n2);
	if(*n1_p > *n2_p)
	{
		p = n1_p;                        //交换所指向变量的地址 
		n1_p = n2_p;                     // p 可以定义为指针变量，也可以是普通的变量 ,尽量用指针变量 
		n2_p = p;
	}
	printf("min = %d,max = %d\n", *n1_p,*n2_p);
	printf("n1 = %d,n2 = %d\n",n1,n2);
	return 0;
 } 
*/

/* exp9-5-1 利用指针变量作为函数参数交换两个整数的值并输出 */
/* 
#include"stdio.h"
int main()
{
	void exchange(int *p1, int *p2);
	int a,b;
	int *pa = &a, *pb = &b;
	printf("Please input two integer: ");
	scanf("%d%d",&a,&b);
	printf("Before exchange : %d  %d\n",a,b);
	exchange(pa,pb);                                 //这里要注意一下，没有* 
	printf("After exchange : %d  %d\n",a,b);
	return 0; 
 } 

void exchange(int *p1, int *p2)
{
	int n;
	n = *p1;
	*p1 = *p2;                      //交换的是地址内的值，实际上等同于a与b的值互换 
	*p2 = n;
}
*/

/* exp9-5-2  */
/* 
#include"stdio.h"
int main()
{
	void exchange(int *p1, int *p2);
	int a,b;
	int *pa = &a, *pb = &b;
	printf("Please input two integer: ");
	scanf("%d%d",&a,&b);
	printf("Before exchange : %d  %d\n",a,b);
	exchange(pa,pb);                                 //这里要注意一下，没有* 
	printf("After exchange : %d  %d\n",a,b);
	return 0; 
 } 

void exchange(int *p1, int *p2)
{
	int *n;                                         // 这里交换的只是p1和p2所指代的地址，pa和pb并没有换，注意！！！！！！ 
	n = p1;
	p1 = p2;
	p2 = n;
 } 
*/

/* exp9-6 输出数组中的全部元素  下标法  */
/*
#include"stdio.h"
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
		a[i] = i;
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,a[i]);
	return 0; 
 } 
*/

/* exp9-7 输出数组中的全部元素，通过数组名计算元素的首地址，找出元素的值  */
/*
#include"stdio.h"
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
		*(a+i) = i;
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,*(a+i));
	return 0;
 } 
*/
/* exp9-8 输出数组中的全部元素 用指针变量指向指针 */
/*
#include"stdio.h"
int main()
{
	int a[10],i,*p;
	p = a;              // 等价于 p = &a[0]
	for(i=0;i<10;i++)
		*(p+i) = i;
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,*(p+i));
	return 0; 
} 
*/
/* exp9-9 注意 *p++的运算  */       //要注意指针变量可以指向a[9]元素后面的内存单元，系统不认为非法 
/* 
#include"stdio.h"
int main()
{
	int  i , a[10],  *p = &a[0] ;
	for(i=0;i<10;i++)
		*p++ = i;                //等价于 *p = i; p = p + 1
	//p = a;                //  使指针变量p重新指向数组a的首地址	
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,*p++);
	return 0;	
 } 
*/

/* exp9-10  用数组名作为函数参数求成绩平均值  这里传入的是首地址 */
/*
#include"stdio.h"
float aver(float *pa); 
int main()
{
	float score[5],average, *sp;
	int i;
	sp = score;
	printf("Please input five scores: ");
	for(i=0;i<5;i++)
		//scanf("%f",&score[i]);
		scanf("%f",sp++);
	sp = &score[0];
	average = aver(sp);
	printf("average score is %5.2f\n",average);
	return 0;
 } 
float aver(float *pa)
{
	int i;
	float av,sum = 0;
	for(i=0;i<5;i++)
		sum = sum + *pa++;
	av = sum /5;
	return av;
}
*/
/* exp9-11 将数组a中的数按相反的顺存放 */
/* 
#include"stdio.h"

void invert(int array[],int n)
{
	int i,j,m = (n-1)/2;                //注意当取一半时的判断条件 
	int temp;
	for(i=0;i<=m;i++)
	{
		j = n-i-1;                      
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;                         //因为实参数组和形参数组共用同一段内存单元，所以对数组的操作不需要返回值 
	}
}

int main()
{
	int a[11] = {1,2,3,4,5,6,7,8,9,10,11};
	int i;
	printf("Before invert: \n");
	for(i=0;i<11;i++)
		printf("%3d",a[i]);
	printf("\n");
	invert(a,11);
	printf("After invert: \n");
	for(i=0;i<11;i++)
		printf("%3d",a[i]);
	return 0; 
 } 
*/
/* exp9-12 将上例中函数的形参数组名改为指针变量 */
/* 
#include"stdio.h"
void invert(int *x, int n)
{
	int *i,*j,*p;
	int temp;
	i = x;
	j = x + n - 1;
	p = x + (n-1)/2;              //注意指针的加减是指加减几个它所指代的类型的字节
	for(;i<=p;i++,j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;                //函数体内指针的运算一定指的是加 * 的运算 
	 } 
	
}

int main()
{
	int a[10];
	int *p;
	int i;
	p = a; 
	for(i=0;i<10;i++)
		*p++ = i + 1;
	p = a;
	printf("Before invert : ");
	for(i=0;i<10;i++)
		printf("%3d",*p++);
	p = &a[0];
	printf("\n");
	invert(p,10);
	printf("After invert: ");
	for(i=0;i<10;i++)
		printf("%3d",a[i]);	
} 
*/
/* exp9-13 从十个数中找出其中的最大值和最小值  */
/*
#include"stdio.h"
 int max,min;

void max_min_value(int array[],int n)
{
	int *p;
	max = min = *array;             //数组名指的是首个数组元素的地址，所以*array就是array[0] 
	for(p=array+1;p<array+n;p++)
	{
		if(*p>max)
			max = *p;
		else if(*p<min)
			min = *p;
	}
}
int main()
{
	int a[10],i;
	printf("Please enter 10 integer numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max_min_value(a,10);
	printf("\nmax = %d,min = %d",max,min);
	return 0;
}
*/
/* exp 9-14 使用指针变量传递地址  */
/* 
#include"stdio.h"
int max,min;                // 全局变量 

void max_min_value(int *p,int n)
{
	int *q;
	max = min = *p;
	for(q=p+1;q<p+n;q++)
	{
		if(*q>max)
			max = *q;
		else if(*q<min)
			min = *q;
	 }
}
int main()
{
	int a[10],*p,i;
	printf("Please input 10 integer numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	p = a;            // 使用p指向数组a
	max_min_value(p,10);
	printf("\nmax = %d,min = %d",max,min);
	return 0; 
}
*/
/*  exp9-15 用实参指针变量改写将n个整数按相反的顺序存放 */
/* 
#include"stdio.h"
void invert(int *pa,int n)
{
	int temp, m = (n-1)/2;
	int *i,*k, *p;
	i = pa; k = pa + n - 1; p = pa + m;       //设置第一位，最后一位，中间一位（注意中间一位的值，要不要减一） 
	for(;i<=p;i++,k--)                         //注意只有同为指针才能进行运算，数组名也是指针 
	{
		temp = *i; *i = *k; *k = temp;
	}
}

int main() 
{
	int i,a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p ;
	p = a; 
	printf("Before invert : ");
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
	printf("\n");
	invert(p,10);
	printf("After invert : ");
	for(p=a;p<a+10;p++)
		printf("%3d",*p);
	return 0;
 } 
*/
/* exp9-16  用选择法对十个整数排序  */
/* 
#include"stdio.h"
void sort(int *pa, int n)
{
	int i,j,t;
	int temp;
	for(i=0;i<n-1;i++)
	{
		t = i;
		for(j=i+1;j<n;j++)
		{
			if(*(pa+t)>*(pa+j))
				t = j;
		}
		if(t!=i)                  //加上这个更好一点 
		{
			temp = *(pa+i);
			*(pa+i) = *(pa+t);     // 注意是 i 和 t 的比较，而不是 t 和 j 的比较 
			*(pa+t) = temp;
		}
	}
}
int main()
{
	int a[10] = {0,1,3,5,7,8,4,7,16,10};
	int *p = &a[0];
	int i;
	printf("Before sort: ");
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
	printf("\n");
	sort(p,10);
	printf("After sort: ");
	for(i=0,p=a;i<10;i++)
		printf("%3d",*p++);
	return 0;
}
*/
/* exp9-17 */
/* 
#include"stdio.h"
int main()
{
	int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	printf("%d\n",a);                  //二维数组第1行的首地址
	printf("%d\n",*a);                 
	printf("%d\n",a[0]);
	printf("%d\n",&a[0]);
	printf("%d\n\n",&a[0][0]);
	printf("%d\n",a+1);                 //二维数组第2行的首地址 
	printf("%d\n",*(a+1));
	printf("%d\n",a[1]);
	printf("%d\n",&a[1]);
	printf("%d\n\n",&a[1][0]);
	printf("%d\n",a+2);               // 二维数组第3行的首地址
	printf("%d\n",*(a+2));
	printf("%d\n",a[2]);
	printf("%d\n",&a[2]);
	printf("%d\n\n",&a[2][0]);
	printf("%d\n",a[1]+1);           //数组第2行的第2个元素的地址 
	printf("%d\n",*(a+1)+1);           //数组第2行的第2个元素的地址
	printf("%d,%d",*(a[1]+1),*(*(a+1)+1));    // 输出以上两种地址指向的元素的值 
	return 0; 
}
*/
/* exp9-18  用指针输出二维数组 */
/*
#include"stdio.h"
int main()
{
	int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	int (*p)[4];                  //注意括号必须加，而且4表示的是二维数组的列数而不是行数 
	int i,j;
	p = a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%3d   ",*(*(p+i)+j));
		printf("\n"); 
	 } 
	return 0;
 }
*/
/* exp9-19 用字符数组存放一个字符串，然后输出该字符串 */
/*
#include"stdio.h"
int main()
{
	char string[] = "I love China !";
	printf("%s\n",string);
	return 0;
 } 
 */
/* exp9-20 用字符串指针指向一个字符串，然后输出该字符串 */
/* 
#include"stdio.h"
int main()
{
	char *string = "I love China !";
	printf("%s\n",string);               // 注意这里和字符指针不一样，这里没有*，和数组一样 
	return 0;
 } 
*/
/* exp9-21 输出字符中 n 个字符后的所有字符 */
/* 
#include"stdio.h"
int main()
{
	char *ps = "I am a boy";
	int n = 7;
	ps = ps + n;
	printf("%s\n",ps);                 //    其实ps就是一个字符串的首地址，输出的时候系统判断'\0'为结束条件。 
	return 0; 
 } 
*/
/*9-22 在输入的字符串中查找有无字符'k'  */
/* 
#include"stdio.h"
int main()
{
	char s[20],*ps;
	int i;
	printf("Please input a string: ");
	ps = s;
	gets(s);
	for(i=0;ps[i]!='\0';i++)             //还可以这样用，当ps指向的是一位数组时，ps[i]就代表数组 
	{
		if(ps[i] == 'k')
		break;
	}
	if(ps[i]=='\0')
		printf("There is no 'k' in the string\n");
	else
		printf("yes!");
	return 0;
 } 
*/
/* exp9-23 用字符串指针作为函数参数，把一个字符串的内容复制到另一个字符串中，不能使用strcpy函数 */
/* 
#include"stdio.h"
void cpystr(char *sa,char *sb)
{
	while((*sb = *sa) != '\0')         //可以换成 {while((*sb++ = *sa++) != '\0')   ;} 
	{
		sb++;
		sa++;
	}
}
int main()
{
	int *pa = "how are you",b[1],*pb;
	pb = b;
	cpystr(pa,pb);
	printf("string a = %s   b = %s",pa,pb);
	return 0; 
 } 
*/
/* exp9-24 用指针形式实现对函数的调用方法  */
/* 
#include"stdio.h"
int main()
{
	int max(int , int );
	int (*pmax)();               // 函数指针变量的定义，注意括号都不能够少 
	int x,y,z;
	pmax = max;                 //函数首地址复制给指针变量
	printf("Please input two numbers: ");
	scanf("%d%d",&x,&y);
	z = (*pmax)(x,y);               // 注意指针变量对函数的引用 括号和*都不能少 
	printf("max = %d",z);
	return 0; 
 } 
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
*/
/*exp9-25 通过指针函数，输入一个1~7的整数，输出对应的星期名 */
/* 
#include"stdio.h"
#include"stdlib.h"                //调用exit(1) 要加上这个头文件 
int main()
{
	int i ;
	char *day_name(int n);
	printf("input Day Number: ");
	scanf("%d",&i);
	if(i<0)
		exit(1);                                   //发生错误退出程序，需要引用#include"stdlib.h" 
	printf("Day Number:%2d-->%s\n",i,
	day_name(i));   //注意因为函数返回值是一个字符串的首地址，所以输出不用加* 
	return 0; 
} 

char *day_name( int n)
{
	char *week[] = {                                         //指针数组，里面存的全是地址 
	"Wrong day","Monday","Tuesday","Wednesday",
	"Thursday","Friday","Saturday","Sunday"};
	return ((n<1||n>7)?week[0]:week[n]);            //这个条件用的好 
}
*/
/* exp9-26 用一个指针数组来指向一个二维数组  */
/* 
#include"stdio.h"
int main()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int *pa[3] = {a[0],a[1],a[2]};
	int *p = a[0];
	int i;
	for(i=0;i<3;i++)
		printf("%d,%d,%d\n",a[i][2-i],*a[i],*(*(a+i)+i));    //*a[i]表示i行0列元素值， 
	printf("\n");
	for(i=0;i<3;i++)
		printf("%d,%d,%d\n",*pa[i],p[i],*(p+i));            //p[i]等价于a[i] 
	return 0;
 } 
*/
/* exp9-27 指针数组作为指针型函数参数  */
/* 
#include"stdio.h"
#include"stdlib.h"
int main()
{
	static char * week[] = {"Illegal day","Monday",          //指向字符串的指针数组 
					"Tuesday","Wednesday","Thursday",
						"Friday","Saturday","Sunday"};
	char *ps;
	int i;
	char *day_name(char *name[],int n);
	printf("input Day number: ");
	scanf("%d",&i);
	if(i<0)
		exit(1);                     // 返回值为1而不是0 
	ps = day_name(week,i);                      //要注意要不要加 * ，[]
	printf("Day number: %2d-->%s\n",i,ps);
	return 0; 
 } 
char *day_name(char *name[],int n)
{
	char *p1,*p2;
	p1 = * name;
	p2 = * (name + n);
	return ((n<1||n>7)?p1:p2);
}
*/
/* exp 9-28 输入5个国名并按字母顺序排列后输出 用指针数组表示的字符串*/
/* 
#include"stdio.h"
#include"string.h"
int main()
{
	void sort(char *name[],int n);
	void print(char *name[],int n);
	static char *name[5] = {"CHINA","AMERICA","AUSTRALIA","FRANCE","GERMAN"};
	sort(name,5);
	print(name,5);
	return 0;
}
void sort(char *name[],int n)
{
	char *pt;
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k = i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[k],name[j])>0)       //strcmp函数是按ASCII逐个比较字符串的，这点要注意 
				k = j;
		}
		if(i!=k)
		{
			pt = name[i]; name[i] = name[k]; name[k] = pt;   //这里注意，这里交换的是地址 
		 } 
	}
}
void print(char *name[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",name[i]);             ////当%s时，name[k]输出字符串，当%d时，输出的地址，平常代表的也是地址  
}
*/ 
/* exp9-29 使用指向指针的指针  */

#include"stdio.h"
int main()
{
	char *name[] = {"Beijinng","Shanghai","Guangzhou","Shenzhen","Tianjin"};
	char **p;        // 指向指针的指针变量 
	int i;
	for(i=0;i<5;i++)
	{
		p = name + i;
		printf("%s\n",*p);
		printf("%o\n",*p);
		printf("%d\n",*p);
	}
	return 0;
 } 






















