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
#include<stdio.h>
#include<math.h>
int main()
{
	double n;
	scanf("%lf", &n);
	double num = 0;
	num = pow(2, n);
	printf("%g", floor(num));
}