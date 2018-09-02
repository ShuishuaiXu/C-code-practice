/*

*         第六章：数组：   1.数组的引入 
*                          2. 一维数组
*                          3. 二维数组
*                          4. 字符数组 
                
*               1.数组的引入：   处理 批量的 具有相同类型的 数据

*               2.一维数组：定义，引用，存储，初始化  应用：排序（冒泡排序，选择排序，选择排序的变形），查找（顺序查找，折半查找：查找表必须是有序的） 
*                        注意：      1.下表通常为整型，若为实型，自动取整
*                                    2.C语言不做下标越界的检查！！！！！！！！！！！！！
*                                    3.两个数组元素可以相互赋值，但是两个数组不能直接赋值 
*                                    4.没有赋值的数组元素，系统默认按0处理 
*                                    5.初始化仅在定义的同时，否则是错误的 ！！！！！！！！！！！ 
*                                    6.一维数组赋值有两种方式：定义的时候初始化，要不就是for循环 
*                                    7.数组for循环赋值i要从0开始！！！！！！！！！！！！ 

*               3.二维数组：  注意：1.初始化尽量使用a[3][3] = {{1,2,3},{1,2,3},{1,2,3}};尽量少用a[3][3] = {1,2,3,1,2,3,1,2,3}; 
*                                   2.给全部元素赋值时，可不指定第一维的大小，有初始值数目和第二维确定，但必须指定第二维大小
*                                   3.只为部分元素赋初值，必须用大括号区分，没有初值对应的赋0值 

*               4.字符串数组：  两种初始化加三种输入输出（%c,%s,gets()/puts()), 常用的字符串处理函数 
*                                         1.两种初始化：char c[6] = {'C','h','i','n','a','\0'}(别忘了加'\0') （6可以不写 ） 
*                                                 char c[6] = {"china"}  (这个不用加'\0',但是要注意是6而不是5) （6可以不写） 
*                                         2.字符数组有n个字符，数组的长度一定为n+1个，多出来的一个存放'\0'. 
*                                         3.字符数组一定要注意是从零开始，用strlen(a)函数时总数要减一
 
*              小结：本章主要讲了数组的初始化，引用（输入输出）和相关数组程序设计（排序，查找算法，字符串函数），还讲了数组的定义和存储，前面是重点。 
*/ 
/* exp6-1  用单层循环输入30位学生的成绩，并输出高于平均值的学生成绩 ,  数组的引入  */
/* 
#include"stdio.h"
#include"math.h"
int main()
{
	int i;
	float score,sum=0,ave;
	for(i=1;i<=3;i++)
	{
		printf("\nPlease input a score: ");
		scanf("%f",&score);
		sum = sum + score;
	}
	ave = sum / i;
	printf("ave = %f\n",ave);                       
	for(i=1;i<=3;i++)                              // 已经输入过的数据，还要在 
		{                            
			scanf("%f",&score);
			if(score>=ave)
				printf("\n%f",score);
		}
	return 0;
 } 
 
*/ 
/* exp 一维数组未定义数组元素，系统默认为零    */
/* 
#include"stdio.h"
int main()
{
	int i;
	int a[4] = {1,2};
	for(i = 0;i<4;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 
*/

/* exp6-2 利用单层循环搞定一维数组的输入和输出 */
/*
#include"stdio.h"
int main()
{
	int i;
	int a[10];
	
	printf("输入十个数：");
	for(i=0;i<10;i++)                     // i是从0开始，并且是<而不是<= ！！！！！！！！！！！ 
		scanf("%d",&a[i]);
	printf("\n输出十个数：");
	for(i=0;i<10;i++)
		printf("%d ",a[i]); 
		
	return 0;
 } 
*/
/* exp6-3 用数组实现exp6-1 */
/*
#include"stdio.h"
int main() 
{
	int i,a[10];
	float sum=0,ave;
	printf("输入十个人的成绩："); 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]); 
		sum = sum + a[i];
	}
	ave = sum / (i+1);
	for(i=0;i<10;i++)
	{
		if(a[i]>=ave)
			printf("%d ",a[i]);
	}
	return 0;
}
*/
/* exp6-4 用数组求fibonacci前20项的值 */
/*
#include"stdio.h"
int main()
{
	int i,a[20] = {1,1};
	for(i=2;i<20;i++)
	{
		a[i] = a[i-2] + a[i-1];
	}
	for(i=0;i<20;i++)
	{
		if(i%4 == 0)                         //换行用的好，使得输出结果更整齐 
			printf("\n");
		printf(" %4d ",a[i]);

	}
	return 0; 
	
 } 
*/
/* exp6-5 输入十个整数，找出最大值，最小值，和它们对应的下标值， 用max和min与每一个数比较 */
/* 
#include<stdio.h>
int main()
{
	int i,j,k,max,min,a[10];
	printf("Please input ten integers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max = min = a[0];               // max和min 要赋初值 
	j = k = 0;                      // j,k也要赋初值 
	for(i=1;i<10;i++)                        
	{
		if(a[i]>max)
		{
			max = a[i];
			j = i;
		}
		if(a[i]<min)
		{
			min = a[i];
			k = i;
		}
	}
	printf("\nThe biggest number is %d,its subscript is %d .",max,j);
	printf("\nThe smallest number a[%d] is %d .",k,min);
	return 0 ; 
 } 
*/
/* exp6-6 用冒泡法对十个整数进行排序，相邻两数比较，最后最大的数放后面 */
/* 
#include"stdio.h"
int main()
{
	int a[10];
	int i,k;
	int t;
	printf("排序前的数组为：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(k=0;k<9;k++)                       // 共需要9轮比较 
	{
		for(i=0;i<(9-k);i++)              //这里注意第i轮共需要9-i次比较 
		{
			if(a[i]>a[i+1])               //   数组元素的交换 
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;	
			}
		}
	}
	
	printf("\n排序后的数组为：");
	for(i=0;i<10;i++)
		printf(" %d ",a[i]);
	return 0;
 } 
*/
/* exp6-6-2 选择排序法 每次将第一位与其他比较，最小的数与它换 */
/* 
#include"stdio.h"
int main()
{
	int i,j;
	int a[10];
	int t;
	printf("排序前的数组：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<9;i++)                    //外循环控制比较轮数 
	{
		for(j=i+1;j<10;j++)           //内循环控制每轮比较次数 
		{
			if(a[i]>a[j])              //注意比较，是a[i]和a[j]比 
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			} 
		}
	}
	
	printf("\n排序后的数组：");
	for(i=0;i<10;i++)
		printf(" %d ",a[i]);
	return 0;
 } 
*/
/* exp6-6-3 选择排序法的变形  中间过程是下标换，每轮循环数组元素仅交换一次 */
/*
#include"stdio.h"
int main()
{
	int i,j,k;
	int a[10];
	int t;
	printf("排序前的数组：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		j = i;                     //设最小数的位置 
		for(k=i+1;k<10;k++)
		{
			if(a[j]>a[k])
				j = k;              //记下子序列中最小数的位置 
		}
		t = a[i];
		a[i] = a[j];                //每轮循环数组元素仅交换一次 
		a[j] = t; 
	}
	printf("排序后的数组：");
	for(i=0;i<10;i++)
		printf(" %d ",a[i]);
 } 
*/
/* exp6-7  输入一个数，判定是否在一个有序数组中。 用折半查找，要求有序数组 */
/* 
#include"stdio.h"

#define M 10
int main()
{
	int a[M] = {-12,0,6,16,23,56,80,100,110,115};            //有序表 ，数组的初始化只能在定义中或者for循环 
	int n, low, mid, high, found;
	low = 0,high = M - 1; 
	found = 0;
	printf("Please input a number to be searched: ");
	scanf("%d",&n);
	
	while(low <= high)                  //  注意这里是<=  ！！！！！！！！ 
	{
		mid = (low + high)/2;
		if(n==a[mid])
		{
			found = 1;
			break;
		}
		else if(n<a[mid])
		{
			high = mid - 1;            //注意是-1，不是直接相等 
		}
		else
		{
			low = mid + 1;             //注意是+1，不是直接相等 
		}
	}
	if(found==1)
		printf("\nThe index of %d is %d \n",n,mid);
	else
		printf("\nThere is no %d\n",n);
	
	return 0; 
	
 } 
*/
/* exp6-8 输出下三角是1的4*4矩阵  */
/*
#include"stdio.h"
int main()
{
	int a[4][4];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i>=j)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	
	return 0;
 } 
*/
/* exp6-9 求下列二维数组a中的最大值，最小值，及主对角线元素的和 */
/* 
#include"stdio.h"
int main()
{
	int a[3][3] = {4,4,34,37,3,12,5,6,5};
	int i,j;
	int max,min,sum,s;
	max = min = a[0][0];
	sum = 0,s = 0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(min>a[i][j])
				min = a[i][j];
			if(max<a[i][j])
				max = a[i][j];
			if(i==j)
				sum = sum + a[i][j];
		}
		s = s + a[i][2-i];   // 副对角线上元素的和 
	}
	printf("max = %d,min = %d,sum = %d,s = %d",max,min,sum,s);
	return 0;
 } 
*/ 
/* exp6-10 求矩阵的转置矩阵  这个程序排版最好 */
/*
#include<stdio.h>
int main()
{
	int a[2][3] = {1,2,3,4,5,6};
	int b[3][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i] = a[i][j];                      //实现转置 
		}
	}
	
	printf("array a:\n");                   
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);                  //输出a数组 
		}
		printf("\n");
	}
	
	printf("array b:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%5d",b[i][j]);                  // 输出b数组 
		printf("\n");
	} 
	return 0; 
} 
*/
/* exp6-10-2  方阵的转置矩阵  */ 
/* 
#include"stdio.h"
int main()
{
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	
	printf("array a : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);      //输出a数组 
		printf("\n");
	}
	
	printf("a的转置矩阵：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[j][i]);      //输出a的转置矩阵 
		printf("\n");
	 } 
	 
	 return 0;
 } 
*/
/* exp6-11 有十(3)个学生，每人考了六(2)门课，统计每个人的总分，输出总分在530(170)以上的学生的成绩 */
/* 能少用循环就少用 */ 
/* 
#include"stdio.h"
int main()
{
	int a[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		a[i][2] = 0;                                   //存放学生的总成绩  也可以再设置一个一维数组，来存储总成绩 
		printf("\nplease input the scores: ");
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);	                   //输入成绩 
			a[i][2] = a[i][2] + a[i][j]; 
		}
		if(a[i][2]>=170)
			printf("第%d同学成绩大于170：%d",i+1,a[i][2]); 	
	}
	
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);                     //输出数组 
		printf("\n");
	}
	
	return 0;
 } 
*/ 

/* exp6-12 用 %c 输入输出单个字符  */
/*
#include"stdio.h"
int main()
{
	int i;
	char a[12];
	for(i=0;i<12;i++)
	{
		scanf("%c",&a[i]);            //这里有&，同时允许空格输入 ！！！ 
	}
	printf("\n");
	for(i=0;i<12;i++)
		printf("%c",a[i]);
	printf("\n");
	return 0;
 } 
*/
/* exp6-12-2 用 %s 整体输入输出 */
/*
#include"stdio.h"
int main()
{
	char a[12];
	printf("请输入字符串：");
	scanf("%s",a);                          // 这里不是 &a[i] !!!!!!!!
	printf("\n输出字符串：");
	printf("%s",a);                          //只有a 
	return 0;
 } 
*/
/*exp 6-12-3 用gets()和puts()输入输出 */
/*
#include"stdio.h"
int main()
{
	char a[12];
	printf("输入字符串：");
	gets(a);                                 //只有gets(a); 
	printf("输出字符串：");
	puts(a);
	return 0; 
 } 
*/
/* 测试字符串长度的函数 */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	char c1[10] = "abcdefg";
	char c2[10] = "123";
	printf("%s\t\t%d\n",c1,strlen(c1));    //字符串长度函数，不计算'\0' 
	printf("%s\t\t%d\n",c2,strlen(c2));
	return 0;
} 
*/
/* exp6-13 小写字母转换大写字母 */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	char c[50];
	int i = 0;
	gets(c);
	puts(c);
	while(c[i]!='\0')
	{
		c[i] = c[i] - 32;             //小写字母转换成大写字母
		i++;
	}
	printf("\n");
	puts(c);
	return 0;
 } 
*/
/* 字符串链接函数  */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	char c1[12] = "abcefg";
	char c2[10] = "123";
	printf("%s\n",c1);
	strcat(c1,c2);
	printf("%s\n",c1);
	return 0;
}
*/
/* 字符串的复制函数  */
/* 
#include"stdio.h"
#include"string.h"
int main()
{
	int i;
	char c1[10] = "abceds";
	char c2[4] = "123";
	puts(c1);
	strcpy(c1,c2);          //注意是连'\0'一块复制到c1的前面！！！！！ 
	puts(c1);
	for(i=0;i<10;i++)
		printf("%c",c1[i]); 
	return 0; 
 } 
*/
/* exp6-14 利用循环实现字符的逆序输出 */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	char a[10];
	int i;
	gets(a);
	for(i= strlen(a)-1;i>=0;i--)          //注意i = strlen(a)-1 
	{
		printf("%c",a[i]);
	}
	return 0;
 } 
*/
/* exp6-15 将一个字符串按逆序进行安放  */
/* 
#include"stdio.h"
#include"string.h"
int main()
{
	int i,j,t;
	char a[10],m;
	gets(a);
	j = strlen(a),t = j/2;
	for(i=0;i<t;i++,j--)
	{
		m = a[i];
		a[i] = a[j-1];                  //注意是j-1 
		a[j-1] = m;
	}
	puts(a);
	return 0;
 } 
*/
/* exp6-16 删除指定的字符  */
/*
#include"stdio.h"
#include"string.h"
int main()
{
	int i,j;
	char s1[10],s2[10];
	char c;
	printf("请输入字符串：");
	gets(s1);
	printf("\n请输入删去的字符：");
	scanf("%c",&c);
	j = 0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=c)
		{
			s2[j] = s1[i];
			j++;
		}
	}
	s2[j] = '\0';                //注意最后要加上字符'\0' 
	printf("%s\n",s2);
	return 0;
 } 
*/
/* exp6-17将数字组成的字符串转换成一个十进制数 */
/* 每个数字字符与'0'的ASCII码值的差值就是这个数字的值 */ 
/* 
#include"stdio.h"
int main()
{
	int i;
	char s[5];
	long int n = 0;
	printf("Please input a number string:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
		n = n * 10 + s[i] - '0';                      //数字字符转换为数字 
	printf("\n数值n = %ld",n);
	return 0;
 } 
*/ 
/* exp6-18 输入五个学生的名字，找出ASCII顺序排在最前面的学生 */
/* 
#include"stdio.h"
#include"string.h"
int main()
{
	char names[5][20];
	int i;
	int min;
	printf("请输入学生的姓名：\n");
	for(i=0;i<5;i++)
	{
		gets(names[i]);                         //原来名字用二维数组还可以这么用 ,gets()也可以这样用 
	}
	min = 0;
	for(i=1;i<5;i++)
	{
		if(strcmp(names[i],names[min])<0)
			min = i;	
	} 
	printf("\n姓名最小值（ASCII顺序）：");
	puts(names[min]);
	return 0; 
 } 
*/
/* 将输入的名字按照ASCII排序 */

#include"stdio.h"
#include"string.h"
int main()
{
	char names[5][15];
	char t[15]; 
	int i,j,k;
	printf("Please input names: \n");
	for(i=0;i<5;i++)
		gets(names[i]); 
	for(i=0;i<4;i++)
	{	
		k = i;
		for(j=i+1;j<5;j++)
		{
			if(strcmp(names[k],names[j])>0)
				k = j;
		}
		strcpy(t,names[k]);
		strcpy(names[k],names[i]);
		strcpy(names[i],t);
	} 
	printf("\n排序后的数组为：\n");
	for(i=0;i<5;i++)
		puts(names[i]);
	return 0;
 } 







