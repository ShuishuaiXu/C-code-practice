 /*
 // exp1-1 
 # include "stdio.h"
 int main()
 { 
 	printf("C ����������ĳ����������\n");
 	return 0;
 }
 
// exp1-2 
# include"stdio.h"
int main()
{	int x,y,z;
	float average;
	x = 5;
	y = 12;
	z = 35;
	average = (x + y + z)/3.0;
	printf("average = %f\n",average);
	return 0; 
}
*/
// exp1-3 ���������е������ 
# include"stdio.h"
int main()
{	int max(int x, int y);
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = max(a,b);
	printf("������ǣ�%d\n", c);
	return 0; 
}

int max(int x, int y)
{	int z;
	if(x > y)
		z = x;
	else 
		z = y;
	return z; 
}
