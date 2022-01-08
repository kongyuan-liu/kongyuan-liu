#define _CRT_SECURE_NO_WARNINGS//加在源文件第一行
//团体程序设计天梯赛-练习集
//一.L1-005 考试座位号
#include<stdio.h>
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
}