#define _CRT_SECURE_NO_WARNINGS//加在源文件第一行
//团体程序设计天梯赛-练习集
//一.L1-005 考试座位号
/*#include<stdio.h>
typedef struct stu
{
	char NUM[25];
	int partnum;
	int fullnum;
}Stu;

int main()
{
	int n, i, j;
	scanf("%d", &n);
	Stu s1[1005] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d", s1[i].NUM, &s1[i].partnum, &s1[i].fullnum);
	}
	int t;
	scanf("%d", &t);
	int m[1005];
	for (i = 0; i < t; i++)
		scanf("%d", &m[i]);
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (m[i] == s1[j].partnum)
			{
				printf("%s %d\n", s1[j].NUM, s1[j].fullnum);
			}
		}
	}
	return 0;
}*/
//L1-007 念数字
/*#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[1005] = { 0 };
	scanf("%s", a);
	for (i = 0; i < strlen(a); i++)
	{
		switch (a[i])
		{
		case '-':
			printf("fu"); break;
		case '1':
			printf("yi"); break;
		case '2':
			printf("er"); break;
		case '3':
			printf("san"); break;
		case '4':
			printf("si"); break;
		case '5':
			printf("wu"); break;
		case '6':
			printf("liu"); break;
		case '7':
			printf("qi"); break;
		case '8':
			printf("ba"); break;
		case '9':
			printf("jiu"); break;
		case '0':
			printf("ling"); break;
		}
		if (i < strlen(a) - 1)
			printf(" ");
	}
	return 0;
}*/
//L1-011 A-B
/*#include<stdio.h>
#include<string.h>
int main()
{
	int i, j;
	char a[10005] = { 0 }, b[10005] = { 0 };
	int f[10005] = { 0 };
	gets(a);
	gets(b);
	for (i = 0; b[i] != '\0'; i++)
	{
		f[b[i]]++;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		if (f[a[i]] == 0)
			printf("%c", a[i]);
	}
	//for (i = 0; a[i] != '\0'; i++)
	//{
	//	if (a[i] != a[i + 1])
	//		printf("%c", a[i]);
	//}
	//printf("%s", a);
}*/

/*#include<stdio.h>
#include<math.h>
int main()
{
	double n;
	scanf("%lf", &n);
	double num = 0;
	num = pow(2, n);
	printf("%g", floor(num));
}*/
//L1-016 查验身份证
/*#include<stdio.h>
int main()
{
	int n, sum = 0, i, j, flag = 0;
	scanf("%d", &n);
	int num1[20] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char num3[20] = { 0 };
	char num4[] = { '1','0','X','9','8','7','6','5','4','3','2' };
	for (i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%s", num3);
		for (j = 0; j < 17; j++)
		{
			sum += (num3[j] - '0') * num1[j];
		}
		sum %= 11;
		if (num4[sum] != num3[17])
		{
			flag = 1;
			printf("%s\n",num3);
		}
	}
	if (flag == 0)
		printf("All passed");
}*/
//L1-017 到底有多二
/*#include<stdio.h>
#include<string.h>
int main()
{
	double n;
	int i, num = 0;
	int count = 0, len;
	char a[51] = { 0 };
	double cnt = 1;
	scanf("%s", a);
	len = strlen(a);
	num = len;
	if (a[0] == '-') {
		cnt += 0.5;
		num--;
	}
	if ((a[len - 1] - '0') % 2 == 0)
		cnt *= 2;
	for (i = 0; i < len; i++)
	{
		if (a[i] == '2')
			count++;
	}
	n = count / (num * 1.0) * cnt;
	printf("%.2lf", n * 100);
	printf("%%");
}*/
//#include<stdio.h>
//int main()
//{
//	int a = 9;
//	double b = 0.5,c;
//	c = a * b;
//	printf("%lf", c);
//}
#include<stdio.h>
int main()
{
	int a, b;
	int q, w, e, r;
	scanf("%d %d", &a, &b);
	int cnt1 = 0, cnt2 = 0;
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &q, &w, &e, &r);
		if (w == q + e) cnt1++;
		if (r == q + e) cnt2++;
		if (cnt1 > a || cnt2 > b) {
			if (cnt1 > a)
			{
				printf("A\n");
				printf("%d", cnt2);
				return 0;
			}
			if (cnt2 > b)
			{
				printf("B\n");
				printf("%d", cnt1);
				return 0;
			}
		}
	}
}