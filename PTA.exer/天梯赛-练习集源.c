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
/*#include<stdio.h>
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
}*/
//L1-020 帅到没朋友
/*#include<stdio.h>
int main()
{
	int n, N; scanf("%d", &N);
	int i, j, r;
	int flag = 0;
	int a[100005] = { 0 };
	while (N--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
			scanf("%d", &r);
			if (n != 1)
			{
				a[r] += n;
			}
		}

	}
	int m,t;
	scanf("%d", &m);
	while (m--)
	{
		scanf("%d", &t);
		if (a[t] == 0)
		{
			if (flag != 0) printf(" ");
			printf("%05d", t);
			a[t] = 1;
			flag++;
		}
	}
	if (flag == 0)
	{
		printf("No one is handsome");
	}
}*/
//L1-023 输出GPLT
/*#include<stdio.h>
int main()
{
	int len, i, j;
	int sum = 1;
	char a[10005] = { 0 };
	scanf("%s", a);
	len = strlen(a);
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	for (i = 0; i < len; i++)
	{
		if (a[i] == 'G' || a[i] == 'g')
			num1++;
		if (a[i] == 'P' || a[i] == 'p')
			num2++;
		if (a[i] == 'L' || a[i] == 'l')
			num3++;
		if (a[i] == 'T' || a[i] == 't')
			num4++;
	}
	for (i = 0; sum!=0; i++)
	{
		sum = 0;
		if (i < num1) printf("G");
		else num1=0;
		if (i < num2) printf("P");
		else num2=0;
		if (i < num3) printf("L");
		else num3=0;
		if (i < num4) printf("T");
		else num4=0;
		sum = num1 + num2 + num3 + num4;
	}
	return 0;
}*/
//L1-025 正整数A+B
/*#include<stdio.h>
#include<string.h>
int main()
{
	int len1, len2;
	int flaga = 1, flagb = 1, i, x = 1, sum1 = 0, sum2 = 0;
	char a[1005], b[1005];
	scanf("%s", a);
	gets(b);
	len1 = strlen(a);
	len2 = strlen(b);
	for (i = len1 - 1; i >= 0; i--)
	{
		if (a[i] >= '0' && a[i] <= '9') {
			sum1 += (a[i] - '0') * x;
			x *= 10;
			if (sum1 > 1000) {
				flaga = 0;
				break;
			}
		}
		else {
			flaga = 0;
			break;
		}
	}
	x = 1;
	for (i = len2 - 1; i > 0; i--)
	{
		if (b[i] >= '0' && a[i] <= '9') {
			sum2 += (b[i] - '0') * x;
			x *= 10;
			if (sum2 > 1000 || b[1] == '0') {
				flagb = 0;
				break;
			}
		}
		else {
			flagb = 0;
			break;
		}
	}
	if (flaga && flagb)
		printf("%d + %d = %d", sum1, sum2, sum1 + sum2);
	else if (flaga)
		printf("%d + ? = ?", sum1);
	else if (flagb)
		printf("? + %d = ?", sum2);
	else
		printf("? + ? = ?");
	return 0;
}*/
//L1-026 (指针加减法则)
/*#include<stdio.h>
int main()
{
	char a[] = "I Love GPLT";
	char* p = a;
	while (*p)
	{
		printf("%c\n", *p);
		p++;
	}
}*/
//L1-027 出租
/*#include<stdio.h>
int main()
{
	char a[20] = { 0 };
	scanf("%s", a);
	int num[20] = { 0 }, i, j;
	int NUM[20] = { 0 };
	int index[20] = { 0 };
	int temp = 0;
	for (i = 0; i < 11; i++)
	{
		num[i] = a[i] - '0';
		NUM[i] = a[i] - '0';
	}
	for (i = 0; i < 11; i++)//将号码由大到小排序
	{
		for (j = 10; j >=1; j--)
		{
			if (num[j] > num[j-1])
			{
				temp = num[j];
				num[j] = num[j - 1];
				num[j - 1] = temp;
			}
		}
	}
	int arr[12] = { 0 };
	i = 0;
	int k = 0;
	for (j = 0; j < 10; j++)
	{
		if (num[j] != num[j + 1])
		{
			arr[i++] = num[j];
			k++;//记录arr数组中元素的个数
		}
	}
	arr[k] = num[10];//记录排序后号码的最后一个数，得到完整的arr数组
	k++;
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (arr[j] == NUM[i])
			{
				index[i] = j;//记录index数组中的元素
			}
		}
	}
	printf("int[] arr = new int[]{");
	for (i = 0; i < k; i++) {
		if (i != 0)
			printf(",");
		printf("%d", arr[i]);
	}   printf("};\n");
	printf("int[] index = new int[]{");
	for (i = 0; i < 11; i++) {
		if (i != 0)
			printf(",");
		printf("%d", index[i]);
	}   printf("};\n");
	return 0;
}*/
// 一帮一(结构体数组的运用)
/*#include<stdio.h>
typedef struct stu
{
	int sex;
	char name[10];
}menu;
int main()
{
	menu s[55] = { 0 };
	int n; scanf("%d", &n);
	int i,j;
	for (i = 0; i < n; i++)
	{
		scanf("%d %s", &s[i].sex, s[i].name);
	}
	for (i = 0; i < n / 2; i++) {
		for (j = n - 1; j >= n / 2; j--) {
			if (s[i].sex + s[j].sex == 1)
			{
				printf("%s %s\n", s[i].name, s[j].name);
				s[j].sex = 2;
				break;
			}
		}
	}
}*/
//L1-032 Left-pad
/*#include<stdio.h>
#include<string.h>
int main()
{
	int n; char a;
	scanf("%d %c\n", &n, &a);//"\n"是重点
	int i, len = 0, k = 0;
	char arr[100005] = { 0 };
	gets(arr);
//	scanf("%s", arr);
	len = strlen(arr);
	if (len < n) {
		for (i = 0; i < n - len; i++)
			printf("%c", a);
		printf("%s", arr);
		return 0;
	}
	else {
		for (i = len - n; i < len; i++)
			printf("%c", arr[i]);
	}
}*/
























