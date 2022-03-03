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
//L1-033 出生年
/*#include<stdio.h>
int func(int y);
int main()
{
	int year; int n;
	int age = 0;
	scanf("%d %d", &year, &n);
	while (func(year) != n) {
		age++;
		year++;
	}
	printf("%d %04d", age, year);
}
int func(int y)
{
	int a[10] = { 0 };
	int res = 0, i;
	a[y % 10] = 1;
	a[y / 10 % 10] = 1;
	a[y / 100 % 10] = 1;
	a[y / 1000 % 10] = 1;
	for (i = 0; i < 10; i++) {
		if (a[i] == 1) res++;
	}
	return res;
}*/
//L1-034 点赞
/*#include<stdio.h>
int main()
{
	int n; scanf("%d", &n);
	int num, r; int a[1005] = { 0 }, b[1005];
	int i;
	int dex = 0, max = 0;
	while (n--) {
		scanf("%d", &num);
		while (num--) {
			scanf("%d", &r);
			a[r]++;
		}
	}
	for (i = 1; i < 1005; i++)
	{
		if (a[i] >= a[dex]) {
			dex = i;
			max = a[i];
		}
	}
	printf("%d %d", dex, max);
	return 0;
}*/
//L1-040 最佳情侣身高差
/*#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int i;
	char sex; double h, hi;
	while (n--) {
		scanf(" %c ", &sex);//空格是个坑
		scanf("%lf", &h);
		if (sex == 'F')
			hi = h * 1.09;
		else
			hi = h / 1.09;
		printf("%.2lf\n", hi);
	}
}*/
//L1-043 阅览室
/*#include<stdio.h>
#include<math.h>
typedef struct infor
{
	int num;
	char c;
	int h;
	int m;
}Infor;
int main()
{
	int n, i;
	int cnt = 0,id;
	int time = 0;
	double T;
	Infor s[1005] = { 0 }, temp;
	scanf("%d", &n);
	while (n--) {
		while(1){
			scanf("%d %c %d:%d", &id,&temp.c,&temp.h,&temp.m);
			if (id == 0)
				break;
			if (temp.c == 'S') {
				s[id] = temp;
				s[id].num = 1;
			}
			if (temp.c == 'E') {
				if (s[id].num == 1) {
					cnt++;
					time += (temp.h - s[id].h) * 60 + (temp.m - s[id].m);
					s[id].num = 0;
				}
			}
		}
		if (cnt == 0) T = 0;
		else T = time * 1.0 / cnt;
	    printf("%d %g\n", cnt,round(T));
		cnt = 0, time = 0;
		for (i = 0; i < 1005; i++)
			s[i].num = 0;
	}
}*/
//L1-044 稳赢
/*#include<stdio.h>
#include<string.h>
int main() {
	int n; scanf("%d", &n);
	int len,num,cnt=0;
	num = n+1;
	while (1) {
		char a[10] = { 0 };
		scanf("%s", a);
		if (strcmp(a, "End") == 0)
			break;
		cnt++;
		len = strlen(a);
		if (cnt % num != 0) {
			switch (len) {
			case 6:
				printf("Bu\n"); break;
			case 7:
				printf("ChuiZi\n"); break;
			case 2:
				printf("JianDao\n"); break;
			}
		}
		else printf("%s\n", a);
	}
}*/
//************************L1-049 天梯赛座位分配
/*#include<stdio.h>
#include<string.h>
int main()
{
	int a[105][12][10];
	int i, j, k;
	int m[105] = { 0 };
	int n; scanf("%d", &n);
	int countmax = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &m[i]);//记录每个学校的队伍数
		if (m[i] > countmax) {
			countmax = m[i];
		}
	}
	int lasti = -1;
	int num = 0;
	for (j = 0; j < countmax; j++) {
		for (k = 0; k < 10; k++) {
			for (i = 0; i < n; i++) {
				if (j < m[i]) {
					if (lasti == i) {
						num += 2;
					}
					else {
						num++;
					}
					lasti = i;
					a[i][j][k] = num;
				}
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("#%d\n", i + 1);
		for (j = 0; j < m[i]; j++) {
			for (k = 0; k < 9; k++) {
				printf("%d ", a[i][j][k]);
			}
			printf("%d\n", a[i][j][k]);
		}
	}
	return 0;
}*/
//L1-050 倒数第N个字符串
/*#include<stdio.h>
#include<math.h>
int main()
{
	int l, n;
	scanf("%d %d", &l, &n);
	n--;
	int i, a;
	for (i = 1; i <= l; i++) {
		a = pow(26, l - i);
		printf("%c", 'z' - n / a);
		n %= a;
	}
	return 0;
}*/
//L1-056 猜数字
/*#include<stdio.h>
#include<math.h>
typedef struct STU
{
	char arr[10];//數組盡量開大一些，否則最後一個點不過
	int num;
}stu;
int main()
{
	stu s1[10005] = { 0 }, t;
	int sum = 0;
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %d", s1[i].arr, &s1[i].num);
		sum += s1[i].num;
	}
	double	ave = sum / (n * 2.0);
	double mincount = fabs(ave - s1[0].num);
	t = s1[0];//初始化很重要，否則到第三個點無法通過
	for (i = 0; i < n; i++) {
		if (mincount > fabs(ave-s1[i].num)) {
			mincount = fabs(ave-s1[i].num);//絕對值函數
			t = s1[i];
		}
	}
	printf("%g %s", floor(ave), t.arr);//取整函數<math.h>
	return 0;
}*/
//L1-058 6翻了
/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1010] = { 0 };
	gets(arr);
	int len = strlen(arr), i, j;
	int count = 0;
	for (i = 0; i <= len; i++)//如果字符串末尾是一串連續且符合題意的'6'，則什麽也不打印，所以必須多一次循環
	{//可以思考一下爲什麽要先輸出數字字符，而非非數字字符
		if (arr[i] != '6') {
			if (count > 0 && count <= 3) {
				for (j = 0; j < count; j++) {
					printf("6");
				}
			}
			else if (count > 3 && count <= 9) {
				printf("9");
			}
			else if (count > 9)
				printf("27");
			printf("%c", arr[i]);
			count = 0;//記得初始化
		}
		else {
			count++;
		}
	}
	return 0;
}*/
//L1-059 敲笨钟
/*#include<stdio.h>
#include<string.h>
int Judge(char* a, int i);
void Printf(char* a, int i);
int main()
{
	int n; scanf("%d", &n);
	int i, j;
	int len, flag = 0;
	getchar();//用於清空緩衝區的'\n'
	for (i = 0; i < n; i++) {
		char arr[105] = { 0 };
		gets(arr);//gets()本事讀到'\n'停止，以'\0'結尾，但'\n'不會遺留在緩存區（scanf會）
		len = strlen(arr);
		for (j = 0; j < len; j++) {
			if (arr[j] == ',') {
				flag=Judge(arr, j);
				if (flag == 0) {
					printf("Skipped\n");
					break;
				}
				flag = 0;
			}
			if (arr[j] == '.') {
				flag = Judge(arr, j);
				if (flag == 1) {
					Printf(arr, j);
				}
				else {
					printf("Skipped\n");
					break;
				}
			}
		}
	}
}
int Judge(char* a, int i) 
{
	if (a[i - 3] == 'o' && a[i - 2] == 'n' && a[i - 1] == 'g') {
		return 1;
	}
	else {
		return 0;
	}
}
void Printf(char* a, int i) 
{
	char ter[] = "qiao ben zhong.";
	int j,k;
	int count = 0;
	for (j = i; j >= 0; j--) {
		if (a[j] == ' ') {
			count++;
		}
		if (count == 3) {
			//for (k = 0; k < strlen(ter); k++) {
			//	a[++j] = ter[k];
			//}
			//printf("%s\n", a);
			//return 0; //若後三個詞的長度大於ter數組的長度，則無法完全覆蓋
			k = j;
			break;
		}
	}
	for (j = 0; j <= k; j++) {
		printf("%c", a[j]);
	}
	printf("%s\n", ter);
}*/
//L1 - 075 强迫症
/*#include<string.h>
#include<stdio.h>
int main()
{
	char arr[10] = { 0 }, a[10] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr);
	int i, temp = 0;
	if (len == 4) {
		temp = (arr[0] - '0') * 10 + (arr[1] - '0');
		if (temp >= 22)
			a[0] = '1', a[1] = '9';
		else
			a[0] = '2', a[1] = '0';
		for (i = 0; i < 4; i++)
		{
			a[i + 2] = arr[i];
		}
	}
	else
		strcpy(a, arr);
	for (i = 0; i < 6; i++)
	{
		if (i == 4)
			printf("-");
		printf("%c", a[i]);
	}
}*/
//L1-078 吉老师的回归
/*#include<stdio.h>
#include<string.h>
int main()
{

	int n, m; scanf("%d %d", &n, &m);
	getchar();//清空緩存區的'/n'
	int i, count = 0, k = 0;
	char* ret1, * ret2;
	char a[90] = { 0 };
	char s1[] = "qiandao", s2[] = "easy";
	for (i = 0; i < n; i++) {
		char arr[90] = { 0 };
		gets(arr);
		ret1 = strstr(arr, s1);//此函數用來查找s1在arr中出現的位置，返回值為地址，未找到則返回NULL
		ret2 = strstr(arr, s2);
		if (ret1 == NULL && ret2 == NULL) {
			if (k == m) {
				strcpy(a, arr);//複製數組arr
			}
			count++;//該做的題的個數
		}
		if (count == m)
			k = count;
	}
	if (count <= m)
		printf("Wo AK le");
	else
		printf("%s", a);
}*/
//L1-002 打印沙漏
/*#include<stdio.h>
#include<math.h>
int main()
{
	int n; char chara;
	scanf("%d %c", &n, &chara);
	int i, diff = 0,j, num = 0;
	num = (n + 1) / 2;
	num = (int)sqrt(num);//上三角層數,整個沙漏個數為num*num*2-1
	diff = n - (num * num * 2 - 1);
	for (i = 0; i < num; i++) {
		for (j = i; j > 0; j--) {
			printf(" ");
		}
		for (j = 0; j < 2 * (num - i) - 1; j++) {
			printf("%c", chara);
		}
		printf("\n");
	}
	for (i = 1; i < num; i++) {
		for (j = num - i - 1; j > 0; j--) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("%c", chara);
		}
		printf("\n");
	}
	printf("%d", diff);
	return 0;
}*/
//打印沙漏升級版
     //思路：有上三角層數轉到整個圖形的層數對稱
  /*#include<stdio.h>
#include<math.h>
void print(char ch, int count) {
	while (count-- > 0)putchar(ch);
}	//print(ch,c)：打印ch字符c遍。
int main() {
	int n, ch, h, i;
	scanf("%d %c", &n, &ch);
	h = (int)sqrt((n + 1) / 2); //h=g(n)
	for (i = 1 - h; i < h; i++) {//對稱
		int j = abs(i);
		print(' ', h - 1 - j);	//空格
		print(ch, 2 * j + 1);	//ch
		putchar('\n');	//换行
	}
	printf("%d", n - (2 * h * h - 1));
	return 0;
}*/
//打印菱形（同上）
  /*#include<stdio.h>
#include<math.h>
void print(char ch, int cnt) {
	while (cnt-- > 0)printf("%c", ch);
}
int main()
{
	int n; char ch;
	scanf("%d %c", &n, &ch);
	int h = (int)sqrt((n + 1) / 2);
	int i, j;
	for (i = 1 - h; i < h; i++) {
		print(' ', abs(i));
		print(ch, 2 * (h - abs(i)) - 1);
		printf("\n");
	}
	printf("%d", n - h * h * 2 + 1);
	return 0;
}*/
//L1-006 连续因子
/*#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isPrime(int n);
int main() 
{
	int n; scanf("%d", &n);
	int temp, count, max = 0, flag = 0;
	if (isPrime(n)) {
		printf("1\n%d", n);
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		temp = n;
		count = 0;
		for (int j = i; j <= sqrt(n); j++) {
			if (temp % j == 0) {
				count++;
				temp /= j;
			}
			else
				break;
		}
		if (count > max) {
			max = count;
			flag = i;
		}
	}
	printf("%d\n", max);
	for (int i = flag; i < flag + max - 1; i++)
		printf("%d*", i);
	printf("%d", flag + max - 1);
	return 0;
}
int isPrime(int n)
{
	if (n == 1)
		return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}*/
//L1-009 N个数求和
/*#include<stdio.h>
#include<math.h>
int gcd(long int a, long int b);//取兩個數最大公約數(輾轉相除法)
int main()
{
	int n; scanf("%d", &n);
	int fz = 0, fm = 1;
	long pub = 0, whole = 0;
	long int a, b;
	int flag = 0;
	while (n--) {
		scanf("%ld/%ld", &a, &b);
		fz = fz * b + a * fm;
		fm *= b;
		pub=gcd(abs(fz), abs(fm));
		fz /= pub;
		fm /= pub;
	}
	if (fz && fz / fm == 0) {
		printf("%d/%d", fz, fm);
		return 0;
	}
	else if (fz % fm == 0) {
		printf("%d", fz / fm);
		return 0;
	}
	else {
		printf("%d %d/%d", fz / fm, fz % fm, fm);
	}
}
int gcd(long int a, long int b) {
	if (b == 0)
		return a;
	int c = a % b;
	return gcd(b, c);
}*/
//L1-079 天梯赛的善良
/*#include<stdio.h>
#define N 10010*2
int main()
{
	int n; scanf("%d", &n);
	int a[N] = { 0 };
	int i;
	int max = 0, min = 0, cmax = 0, cmin = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (i == 0)
			min = a[i];
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	}
	for (i = 0; i < n; i++) {
		if (a[i] == min)
			cmin++;
		if (a[i] == max)
			cmax++;
	}
	printf("%d %d\n", min, cmin);
	printf("%d %d\n", max, cmax);
}*/
//L1-080 乘法口诀数列
/*#include<stdio.h>
int main()
{
	int n;
	int arr[10050] = { 0 };
	scanf("%d %d %d", &arr[1], &arr[2], &n);
	int i, cnt = 3;
	int shu;
	for (i = 3; i <= n; i++) {
		shu = arr[i - 1] * arr[i - 2];
		if (shu < 10)
			arr[cnt++] = shu;
		else {
			arr[cnt++] = shu / 10;
			arr[cnt++] = shu % 10;
		}
	}
	for (i = 1; i <= n; i++)
	{
		if (i != 1)
			printf(" ");
		printf("%d", arr[i]);
	}
}*/
//L2-003 月饼
/*#include<stdio.h>
#include<stdlib.h>
#define N 1111;
typedef struct te {
	double sum;//庫存
	double price;//總價
	double sale;//單價
}Node;
int n;
double need;//需求
double p = 0;//收益
int main() 
{
	int i, j;
	scanf("%d %lf", &n, &need);
	Node list[1111] = { 0 },temp;
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &list[i].sum);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &list[i].price);
		list[i].sale = list[i].price / list[i].sum;
	}
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (list[j].sale < list[j + 1].sale) {
				temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
			}
		}
	}
	for (i = 0; i < n && need>0; i++) {
		if (need <= list[i].sum) {
			p += need * list[i].sale;
			need = 0;
		}
		else {
			p += list[i].price;
			need -= list[i].sum;
		}
	}
	printf("%.2lf", p);
}*/
//L2-010 排座位-查并集
/*#include<stdio.h>
int Fri[105] = { 0 };
int m1, m2, flag, i;
int vim[105][105] = { 0 };
void init();
int find(int n);
void Unio(int a, int b);
int main()
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	init();
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &m1, &m2, &flag);
		if (flag == 1) {
			Unio(m1, m2);
		}
		else {
			vim[m1][m2] = 1;
			vim[m2][m1] = 1;
		}
	}
	for (i = 0; i < k; i++) {
		scanf("%d %d", &m1, &m2);
		int M1 = find(m1);
		int M2 = find(m2);
		if (M1 == M2&&vim[m1][m2]==0) {
			printf("No problem\n");
		}
		else if (M1 != M2 && vim[m1][m2] == 0) {
			printf("OK\n");
		}
		else if (M1 == M2 && vim[m1][m2] == 1) {
			printf("OK but...\n");
		}
		else {
			printf("No way\n");
		}
	}
}
void init() {
	for (i = 0; i < 105; i++) {
		Fri[i] = i;
	}
}
int find(int n) {
	int r = n;
	while (Fri[r] != r) {
		r = Fri[r];
	}
	return  r;
}
void Unio(int a, int b) {
	int a_ = find(a);
	int b_ = find(b);
	if (a_ == b_)
		return;
	else {
		Fri[a_] = b_;
	}
}*/
//L2-001 紧急救援
/*#include<stdio.h>
#define Max 510
void Dijkstra();
void Print(int t);
const int INF = 1e9 + 7;
int n, m, s, d;
int i, j;
int a, b, c;
int close[Max] = { 0 }, open[Max] = { 0 };
int gra[Max][Max] = { 0 };//存放路徑長度
int people[Max] = { 0 };//記錄城市救援隊的數目
int dis[Max] = { 0 };//記錄每個城市到起點的最短距離
int way[Max] = { 0 };//記錄前驅節點
int cnt[Max] = { 0 };//記錄從起點到其他節點的最短路徑數目
int num[Max] = { 0 };//記錄從起點到其他節點召集的救援隊最大總數
int main()
{
	scanf("%d %d %d %d", &n, &m, &s, &d);
	for (i = 0; i < n; i++) {
		scanf("%d", &people[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i != j)
				gra[i][j] = INF;
			else
				gra[i][j] = 0;
		}
	}
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		gra[a][b] = c;//將有聯係的兩個城市間的道路長度記錄下來
		gra[b][a] = c;
	}
	Dijkstra();

	printf("%d %d\n", cnt[d], num[d]);
	Print(d);
	return 0;
}
void Dijkstra() {
	dis[s] = 0;
	num[s] = people[s];
	cnt[s] = 1;
	way[s] = s;
	for (i = 0; i < n; i++) {
		dis[i] = gra[s][i];
	}
	for (i = 0; i < n; i++) {
		int min_dis = INF;//記錄起點到其他未標記節點的最小距離
		int mid = -1;//記錄最短距離節點的編號
		//遍历n个顶点，寻找当前未被访问的顶点中的距离起始顶点最短距离的节点编号
		for (j = 0; j < n; j++) {
			if (open[j] == 0 && min_dis > dis[j]) {
				min_dis = dis[j];
				mid = j;
			}
		}
		if (mid == -1)
			break;
		open[mid] = 1;
		// 以mid为中间节点，再循环遍历其他所有节点
		for (j = 0; j < n; j++) {
			// 如果当前遍历的节点j未曾作为过中间节点
			// 并且从起始节点到j的距离dis[j]大于从起始节点到mid与从mid到j的距离之和
			if (open[j] == 0 && dis[j] > (dis[mid] + gra[mid][j])) {
				dis[j] = dis[mid] + gra[mid][j];
				cnt[j] = cnt[mid];
				num[j] = people[j] + num[mid];
				way[j] = mid;
			}
			// 如果当前遍历的节点j未曾作为过中间节点
			// 并且从起始节点到j的距离dis[j]等于从起始节点到mid与从mid到j的距离之和
			else if (open[j] == 0 && dis[j] == (dis[mid] + gra[mid][j])) {
				cnt[j] += cnt[mid];
				if (num[j] < num[mid] + people[j]) {
					num[j] = num[mid] + people[j];
					way[j] = mid;
				}
			}
		}
	}
}
void Print(int t) {
	if (way[t] != t) {
		Print(way[t]);
		printf(" ");
	}
	printf("%d", t);
	return;
}*/
/*#include<stdio.h>
#define max 510
void Dijkstra();
void Print(int t);
int n, m, s, d;
int a, b, c;
int i, j;
const int INF = 1e9;
int open[max] = { 0 };
int gra[max][max] = { 0 };
int people[max];//每個點的人數
int num[max];//到此節點的總人數
int cnt[max];//到此節點的路徑數
int dis[max];//當前節點到起點的距離
int way[max];//記錄前驅節點
int main()
{
	scanf("%d %d %d %d", &n, &m, &s, &d);
	for (i = 0; i < n; i++) {
		scanf("%d", &people[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i != j)
				gra[i][j] = INF;
		}
	}
	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		gra[a][b] = c;
		gra[b][a] = c;
	}
	Dijkstra();
	printf("%d %d\n",cnt[d],num[d]);
	Print(d);
}
void Dijkstra() {
	dis[s] = 0;
	cnt[s] = 1;
	num[s] = people[s];
	way[s] = s;
	for (i = 0; i < n; i++) {
		dis[i] = gra[s][i];
	}
	for (i = 0; i < n; i++) {
		int min_dis = INF;//記錄最短距離
		int mid = -1;//記錄最短距離節點編號
		for (j = 0; j < n; j++) {
			if (open[j]==0&&min_dis > dis[j]) {
				min_dis = dis[j];
				mid = j;
			}
		}
		if (mid == -1)
			break;
		open[mid] = 1;
		for (j = 0; j < n; j++) {
			if (open[j] == 0 && dis[j] > (dis[mid] + gra[mid][j])) {
				dis[j] = dis[mid] + gra[mid][j];
				cnt[j] = cnt[mid];
				num[j] = num[mid] + people[j];
				way[j] = mid;
			}
			else if (open[j] == 0 && dis[j] == (dis[mid] + gra[mid][j])) {
				cnt[j] = cnt[mid] + cnt[j];
				if (num[j] < num[mid] + people[j]) {
					num[j] = num[mid] + people[j];
					way[j] = mid;
				}
			}
		}
	}
}
void Print(int t) {
	if (way[t] != t) {
		Print(way[t]);
		printf(" ");
	}
	printf("%d", t);
	return;
}*/
//L2-002 链表去重
/*#include<stdio.h>
#include<math.h>
#define max 1000
int data[max], loc[max];
int a[max], b[max];
int a_cnt = 0, b_cnt = 0;
int cnt[max] = { 0 };
int main()
{
	int add, n;
	scanf("%d %d", &add, &n);
	int i, j;
	int t, k;
	for (i = 0; i < n; i++) {
		scanf("%d",&t);
		scanf("%d %d", &data[t], &loc[t]);
	}
	k = add;
	while (k != -1) {
		t = abs(data[k]);
		if (cnt[t] == 0) {
			cnt[t] = 1;
			a[a_cnt++] = k;
		}
		else {
			b[b_cnt++] = k;
		}
		k = loc[k];
	}
	for (i = 0; i < a_cnt - 1; i++) {
		printf("%05d %d %05d\n", a[i], data[a[i]], a[i + 1]);
	}printf("%05d %d -1\n", a[a_cnt-1], data[a[a_cnt-1]]);
	if (b_cnt) {
		for (i = 0; i < b_cnt - 1; i++) {
			printf("%05d %d %05d\n", b[i], data[b[i]], b[i + 1]);
		}printf("%05d %d -1\n", b[b_cnt - 1], data[b[b_cnt - 1]]);
	}
	return 0;
}*/
//L1-039 古风排版
/*#include<stdio.h>
#include<string.h>
#define max 1005
int n;
int i;
char gra[max][max] = { 0 };
int main() 
{
	scanf("%d", &n);
	getchar();//清空緩存
	char arr[max] = { 0 };
	gets(arr);
	int len = strlen(arr);
	int lkl = 0;
	int cnt = 0;
	int temp;//列數
	if (len % n == 0)
		temp = len / n;
	else {
		temp = len / n + 1;
	}
	int i, j;
	for (j = 0; j < temp; j++) {
		for (i = 0; i < n; i++) {
			if (lkl == len) {
				break;
			}
			gra[i][j] = arr[lkl++];
		}
		if (lkl == len) {
			cnt = i - 1;
			break;
		}
	}
	for (i = 0; i < n; i++) {
		for (j =temp-1; j >=0; j--) {
			if (gra[i][j] != NULL) {
				printf("%c", gra[i][j]);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}*/
//L1-046 整除光棍
/*#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	scanf("%d", &x);
	int cnt = 0;
	int s = 0, num = 0;
	int i;
	while (num < x) {
		num =num* 10 + 1;
		cnt++;
	}
	for (i = cnt;; i++) {
		printf("%d", num / x);
		if (num % x == 0) {
			break;
		}
		num = num % x;
		num = num * 10 + 1;
	}
	printf(" %d", i);
}*/
//L1-048 矩阵A乘以B
/*#include<stdio.h>
int a[50][50], b[50][50], c[50][50];
int i, j, l;
int main()
{
	int Ra, Rb, Ca, Cb;
	scanf("%d %d", &Ra, &Ca);
	for (i = 0; i < Ra; i++) {
		for (j = 0; j < Ca; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &Rb, &Cb);
	for (i = 0; i < Rb; i++) {
		for (j = 0; j < Cb; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	if (Ca != Rb) {
		printf("Error: %d != %d", Ca, Rb);
		return 0;
	}
	printf("%d %d\n", Ra, Cb);
	for (i = 0; i < Ra; i++) {
		for (j = 0; j < Cb; j++) {
			int num = 0;
			for (l = 0; l < Ca; l++) {
				num += a[i][l] * b[l][j];
			}
			c[i][j] = num;
			printf("%d", c[i][j]);
			if (j != Cb - 1)
				printf(" ");
		}
		printf("\n");
	}
}*/
//L1-071 前世档案
/*#include<stdio.h>
#include<string.h>
#include<math.h>
int n, m;
int i, j;
char arr[35] = { 0 };
int main()
{
	scanf("%d %d", &n, &m);
	int max = pow(2, n);//記錄最大節點的值
	for (i = 0; i < m; i++) {
		scanf("%s", arr);
		int index = 1;//每次記得刷新
		int k = max;
		for (j = 0; j < n; j++) {
			if (arr[j] == 'n') {
				index += (k / 2);
			}
			k /= 2;//每判斷一次，節點數少一半
		}
		printf("%d\n", index);
	}
	return 0;
}*/
//L1-072 刮刮彩票
/*#include<stdio.h>
int gra[3][3] = { 0 };
int i, j, l;
int num = 0;//記錄0是哪個數字
int in, jn;//標記0
int money[25] = { 0,0,0,0,0,0,10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600 };
int main() 
{
	int order = 0;
	int mi;//記錄和
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &gra[i][j]);
			if (gra[i][j] == 0) {
				in = i;
				jn = j;
			}
			num += gra[i][j];
		}
	}
	num = 45 - num;
	gra[in][jn] = num;
	for (l = 0; l < 3; l++) {
		scanf("%d %d", &i, &j);
		printf("%d\n", gra[i - 1][j - 1]);
	}
	scanf("%d", &order);
	if (order <= 3) {//輸入行
		mi = gra[order - 1][0] + gra[order - 1][1] + gra[order - 1][2];
	}
	else if (order <= 6) {//輸入列
		mi = gra[0][order - 1] + gra[1][order - 1] + gra[2][order - 1];
	}
	else if(order==7){//斜著輸入
		mi = gra[0][0] + gra[1][1] + gra[2][2];
	}
	else {
		mi = gra[0][2] + gra[1][1] + gra[2][0];
	}
	printf("%d", money[mi]);
}*/
//L2-005 集合相似度(❌錯誤)
/*
#include<stdio.h>
#include<string.h>
#define max 10010
int n, m;
int i, j, l = 0;
int len[max];//題目輸入
int a, b;//題目輸入
int gra[max][max];
int lenmax = 0;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &len[i]);
		for (j = 0; j < len[i]; j++) {
			scanf("%d", &gra[i][j]);
		}
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		a--, b--;
		int arr[max] = { 0 };
		int isFlag[max] = { 0 };
		double l = 0;//用來存放兩個數組中不相等的數
		double count = 0;//記錄兩個數組中都有的數
		for (j = 0; j < len[a]; j++) {
			isFlag[gra[a][j]] = 1;//將出現在第一個數組中的數做標記
			if (arr[gra[a][j]] == 0) {
				arr[gra[a][j]] = 1;
				l++;
			}
			//此處不用else就可避免記錄相同的數
			//else if (arr[gra[a][j]] < 2) {
			//	count++;
			//	arr[gra[a][j]] = 2;
			//}
		}
		for (j = 0; j < len[b]; j++) {
			if (arr[gra[b][j]] == 0) {
				arr[gra[b][j]] = 1;
				l++;
			}
			else if (arr[gra[b][j]] < 2 && isFlag[gra[b][j]] == 1) {//若此處isFlag==0則説明第一個數組中無此數，即不是兩個數組共有的
				count++;
				arr[gra[b][j]] = 2;
			}
		}
		printf("%.2lf",count/l*100);
		printf("%%\n");
	}
	return 0;
}*/
//L2-009 抢红包
/*
#include<stdio.h>
#define max 10050
typedef struct PEOPLE {
	int num;//編號
	double income;//收入
	int count;//搶到紅包個數
}peo;
int main()
{
	peo s1[max] = { 0 };
	int n; scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++) {
		s1[i].num = i + 1;
		int m; scanf("%d", &m);//輸入發出紅包個數
		for (j = 0; j < m; j++) {
			int a, b;//編號、金額
			scanf("%d %d", &a, &b);
			s1[i].income -= b;
			s1[a - 1].income += b;
			s1[a - 1].count++;
		}
	}
	peo temp = { 0 };
	for (i = 0; i < n-1; i++) {
		for (j = i + 1; j < n; j++) {
			if (s1[i].income < s1[j].income) {
				temp = s1[i];
				s1[i] = s1[j];
				s1[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (s1[i].income == s1[i + 1].income) {
			if (s1[i].count > s1[i+1].count) {
				//printf("%d %.2lf\n", s1[i].num, s1[i].income / 100);
			}
			else if(s1[i].count < s1[i+1].count){
				temp = s1[i];
				s1[i] = s1[i + 1];
				s1[i + 1] = temp;
				//printf("%d %.2lf\n", s1[i].num, s1[i].income / 100);
			}
			else {
				if (s1[i].num > s1[i + 1].num) {
					temp = s1[i];
					s1[i] = s1[i + 1];
					s1[i + 1] = temp;
				}
			}
		}
		//else {
		printf("%d %.2lf\n", s1[i].num, s1[i].income / 100);
		//}
	}
}*/
//L2-015 互评成绩
/*#include<stdio.h>
#define max 10010
int n, k, m;
int arr[max] = { 0 };//記錄每份作业的评审数
double score[max] = { 0 };//記錄每份作业的最后成绩
void Score(int* arr);//此函數除去兩個極限值
int main()
{
	int i, j;
	scanf("%d %d %d", &n, &k, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			scanf("%d", &arr[j]);
			//score[i] += arr[j];
			//printf("%d ", arr[j]);
		}
		//score[i] /= (k-2);
		Score(arr);
		for (j = 0; j < k; j++) {
			score[i] += arr[j];
			//printf("%d ", arr[j]);
		}
		score[i] /= (k - 2);
	}
	double temp = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (score[i] > score[j]) {
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}
	int isFlag = 0;
	for (i = n - m; i < n; i++) {
		if (isFlag != 0)
			printf(" ");
		else
			isFlag = 1;
		printf("%.3lf", score[i]);
	}
}
void Score(int* arr)
{
	int i, j;
	int len = k;
	int num;
	for (i = 0; i < len - 1; i++) {
		for (j = i + 1; j < len; j++) {
			if (arr[i] > arr[j]) {
				num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}
		}
	}
	arr[0] = 0, arr[len - 1] = 0;
	
}*/
//L2-017 人以群分
/*#include<stdio.h>
#include<stdlib.h>
#define max 100010
int arr[max] = { 0 };
int cmp(const void* a, const void* b);
int main()
{
	int N; scanf("%d", &N);
	int i, j;
	int N1, N2;
	int temp;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	//for (i = 0; i < N - 1; i++) {
	//	for (j = i + 1; j < N; j++) {
	//		if (arr[i] > arr[j]) {
	//			temp = arr[i];
	//			arr[i] = arr[j];
	//			arr[j] = temp;
	//		}
	//	}
	//}這裏要用快排，冒泡會超時
	qsort(arr, N, sizeof(int), cmp);
	N1 = N / 2, N2 = N - N1;
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < N1; i++) {
		sum1 += arr[i];
	}
	for (i = N1; i < N; i++) {
		sum2 += arr[i];
	}
	printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %d",N2,N1,sum2-sum1);
	return 0;
}
int cmp(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}*/
//L2-019 悄悄关注
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 10010
typedef struct Person {
	char arr[5];
	int zan;
	char chara;
}per;
int isFlag = 0;//標記并判斷
int cnt = 0;
int cmp(const void* a, const void* b);
int main()
{
	per s1[max] = { 0 };
	per s3[max] = { 0 };//存儲悄悄關注的人，排序用
	int k = 0;
	int n; scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++) {
		scanf("%s", s1[i].arr);
		s1[i].chara = s1[i].arr[0];
	}
	qsort(s1, n, sizeof(per), cmp);
	int m; scanf("%d", &m);
	int ave = 0;
	per s2[max] = { 0 };
	for (i = 0; i < m; i++) {
		scanf("%s", s2[i].arr);
		scanf("%d", &s2[i].zan);
		ave += s2[i].zan;
	}
	ave /= m;
	for (i = 0; i < m; i++) {//外圍為點贊ID
		//for (j = 0; j < n;j++) {//裏曾是關注ID
		//	cnt = 0;
		//	if (strcmp(s2[i].arr, s1[j].arr) == 0) {
		//		cnt = 1;//表示此人已關注
		//		break;
		//	}
		//}
		//if (cnt != 1&&s2[i].zan>ave) {
		//	isFlag = 1;
		//	k++;
		//	strcpy(s3[k].arr, s2[i].arr);
		//	s3[k].chara = s3[k].arr[0];
		//	//printf("%s\n", s2[i].arr);
		//}
		if (s2[i].zan > ave) {
			cnt = 0;
			int left = 0, right = n - 1;
			if (strcmp(s1[left].arr, s2[i].arr) <= 0 && strcmp(s1[right].arr, s2[i].arr) >= 0) {
				while (1) {//二分查找
					if (strcmp(s1[left].arr, s2[i].arr) == 0) {
						cnt = 1; break;
					}
					if (strcmp(s1[right].arr, s2[i].arr) == 0) {
						cnt = 1; break;
					}
					if (right - left == 1) {
						cnt = 0; break;
					}
					int mid = (left + right) / 2;
					if (strcmp(s1[mid].arr, s2[i].arr) == 0) {
						cnt = 1; break;
					}
					if (strcmp(s1[mid].arr, s2[i].arr) > 0) {
						right = mid;
					}
					else {
						left = mid;
					}
				}
			}
			if(cnt==0){
				strcpy(s3[k++].arr, s2[i].arr);
			}
		}
	}
	qsort(s3, k, sizeof(per), cmp);
	if (k == 0) {
		printf("Bing Mei You");
	}
	else {
		for (i = 0; i <= k; i++) {
			printf("%s\n", s3[i].arr);
		}
	}
	return 0;
}
int cmp(const void* a, const void* b) {
	per* pa = (per*)a;
	per* pb = (per*)b;
	return pa->chara - pb->chara;
}*/
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 10010
typedef struct Person {
	char arr[10];
	int zan;
}per;
int cnt = 0;//標記并判斷
int cmp(const void* a, const void* b);
int main()
{
	char s1[max][10];//題目輸入
	per s[max] = { 0 };//題目輸入
	char s2[max][10];//存儲悄悄關注的人
	int k = 0;
	int n; scanf("%d", &n);
	int i, j;
	for (i = 0; i < n; i++) {
		scanf("%s", s1[i]);
	}
	qsort(s1, n, sizeof(s1[0]), cmp);
	int m; scanf("%d", &m);
	int ave = 0;
	for (i = 0; i < m; i++) {
		scanf("%s", s[i].arr);
		scanf("%d", &s[i].zan);
		ave += s[i].zan;
	}
	ave /= m;
	for (i = 0; i < m; i++) {//外圍為點贊ID
		//for (j = 0; j < n;j++) {//裏曾是關注ID
		//	cnt = 0;
		//	if (strcmp(s2[i].arr, s1[j].arr) == 0) {
		//		cnt = 1;//表示此人已關注
		//		break;
		//	}
		//}
		//if (cnt != 1&&s2[i].zan>ave) {
		//	isFlag = 1;
		//	k++;
		//	strcpy(s3[k].arr, s2[i].arr);
		//	s3[k].chara = s3[k].arr[0];
		//	//printf("%s\n", s2[i].arr);
		//}
		if (s[i].zan > ave) {
			cnt = 0;
			int left = 0, right = n - 1;
			if (strcmp(s1[left], s[i].arr) <= 0 && strcmp(s1[right], s[i].arr) >= 0) {
				while (1) {//二分查找
					if (strcmp(s1[left], s[i].arr) == 0) {
						cnt = 1; break;
					}
					if (strcmp(s1[right], s[i].arr) == 0) {
						cnt = 1; break;
					}
					if (right - left == 1) {
						cnt = 0; break;
					}
					int mid = (left + right) / 2;
					if (strcmp(s1[mid], s[i].arr) == 0) {
						cnt = 1; break;
					}
					if (strcmp(s1[mid], s[i].arr) > 0) {
						right = mid;
					}
					else {
						left = mid;
					}
				}
			}
			if (cnt == 0) {
				strcpy(s2[k++], s[i].arr);
			}
		}
	}
	qsort(s2, k, sizeof(s2[0]), cmp);
	if (k == 0) {
		printf("Bing Mei You");
	}
	else {
		for (i = 0; i < k; i++) {
			printf("%s\n", s2[i]);
		}
	}
	return 0;
}
int cmp(const void* a, const void* b) {
	char* pa = (char*)a;
	char* pb = (char*)b;
	return strcmp(pa, pb);
}*/