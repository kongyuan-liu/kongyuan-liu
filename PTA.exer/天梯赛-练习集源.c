#define _CRT_SECURE_NO_WARNINGS//����Դ�ļ���һ��
//����������������-��ϰ��
//һ.L1-005 ������λ��
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
//L1-007 ������
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
//L1-016 �������֤
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
//L1-017 �����ж��
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
//L1-020 ˧��û����
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
//L1-023 ���GPLT
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
//L1-025 ������A+B
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
//L1-026 (ָ��Ӽ�����)
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
//L1-027 ����
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
	for (i = 0; i < 11; i++)//�������ɴ�С����
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
			k++;//��¼arr������Ԫ�صĸ���
		}
	}
	arr[k] = num[10];//��¼������������һ�������õ�������arr����
	k++;
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (arr[j] == NUM[i])
			{
				index[i] = j;//��¼index�����е�Ԫ��
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
// һ��һ(�ṹ�����������)
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
	scanf("%d %c\n", &n, &a);//"\n"���ص�
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
//L1-033 ������
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
//L1-034 ����
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
//L1-040 ���������߲�
/*#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int i;
	char sex; double h, hi;
	while (n--) {
		scanf(" %c ", &sex);//�ո��Ǹ���
		scanf("%lf", &h);
		if (sex == 'F')
			hi = h * 1.09;
		else
			hi = h / 1.09;
		printf("%.2lf\n", hi);
	}
}*/
//L1-043 ������
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
//L1-044 ��Ӯ
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
//************************L1-049 ��������λ����
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
		scanf("%d", &m[i]);//��¼ÿ��ѧУ�Ķ�����
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
//L1-050 ������N���ַ���
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
//L1-056 ������
/*#include<stdio.h>
#include<math.h>
typedef struct STU
{
	char arr[10];//���M�M���_��һЩ����t����һ���c���^
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
	t = s1[0];//��ʼ������Ҫ����t���������c�o��ͨ�^
	for (i = 0; i < n; i++) {
		if (mincount > fabs(ave-s1[i].num)) {
			mincount = fabs(ave-s1[i].num);//�^��ֵ����
			t = s1[i];
		}
	}
	printf("%g %s", floor(ave), t.arr);//ȡ������<math.h>
	return 0;
}*/
//L1-058 6����
/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1010] = { 0 };
	gets(arr);
	int len = strlen(arr), i, j;
	int count = 0;
	for (i = 0; i <= len; i++)//����ַ���ĩβ��һ���B�m�ҷ����}���'6'���tʲ��Ҳ����ӡ�����Ա�횶�һ��ѭ�h
	{//����˼��һ� �ʲ��Ҫ��ݔ�������ַ������Ƿǔ����ַ�
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
			count = 0;//ӛ�ó�ʼ��
		}
		else {
			count++;
		}
	}
	return 0;
}*/
//L1-059 �ñ���
/*#include<stdio.h>
#include<string.h>
int Judge(char* a, int i);
void Printf(char* a, int i);
int main()
{
	int n; scanf("%d", &n);
	int i, j;
	int len, flag = 0;
	getchar();//�����վ��n�^��'\n'
	for (i = 0; i < n; i++) {
		char arr[105] = { 0 };
		gets(arr);//gets()�����x��'\n'ֹͣ����'\0'�Yβ����'\n'�����z���ھ���^��scanf����
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
			//return 0; //���������~���L�ȴ��ter���M���L�ȣ��t�o����ȫ���w
			k = j;
			break;
		}
	}
	for (j = 0; j <= k; j++) {
		printf("%c", a[j]);
	}
	printf("%s\n", ter);
}*/
//L1 - 075 ǿ��֢
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
//L1-078 ����ʦ�Ļع�
/*#include<stdio.h>
#include<string.h>
int main()
{

	int n, m; scanf("%d %d", &n, &m);
	getchar();//��վ���^��'/n'
	int i, count = 0, k = 0;
	char* ret1, * ret2;
	char a[90] = { 0 };
	char s1[] = "qiandao", s2[] = "easy";
	for (i = 0; i < n; i++) {
		char arr[90] = { 0 };
		gets(arr);
		ret1 = strstr(arr, s1);//�˺����Á����s1��arr�г��F��λ�ã�����ֵ���ַ��δ�ҵ��t����NULL
		ret2 = strstr(arr, s2);
		if (ret1 == NULL && ret2 == NULL) {
			if (k == m) {
				strcpy(a, arr);//�}�u���Marr
			}
			count++;//ԓ�����}�Ă���
		}
		if (count == m)
			k = count;
	}
	if (count <= m)
		printf("Wo AK le");
	else
		printf("%s", a);
}*/
//L1-002 ��ӡɳ©
/*#include<stdio.h>
#include<math.h>
int main()
{
	int n; char chara;
	scanf("%d %c", &n, &chara);
	int i, diff = 0,j, num = 0;
	num = (n + 1) / 2;
	num = (int)sqrt(num);//�����ǌӔ�,����ɳ©������num*num*2-1
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
//��ӡɳ©������
     //˼·���������ǌӔ��D�������D�εČӔ����Q
  /*#include<stdio.h>
#include<math.h>
void print(char ch, int count) {
	while (count-- > 0)putchar(ch);
}	//print(ch,c)����ӡch�ַ�c�顣
int main() {
	int n, ch, h, i;
	scanf("%d %c", &n, &ch);
	h = (int)sqrt((n + 1) / 2); //h=g(n)
	for (i = 1 - h; i < h; i++) {//���Q
		int j = abs(i);
		print(' ', h - 1 - j);	//�ո�
		print(ch, 2 * j + 1);	//ch
		putchar('\n');	//����
	}
	printf("%d", n - (2 * h * h - 1));
	return 0;
}*/
//��ӡ���Σ�ͬ�ϣ�
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
//L1-006 ��������
#include<stdio.h>
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
}
