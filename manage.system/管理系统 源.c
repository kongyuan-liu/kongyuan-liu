#define _CRT_SECURE_NO_WARNINGS//加在源文件第一行
//管理系统框架
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum people
{
	Exit,//0
	creat,//1
	insert,//2
	delete,//3
	search,//4
	correct,//5
	output,//6
	reserve,//7
	clear,//8
	save,//9
	read//10
}student;
struct stu
{
	char name[20];
	int number;
	int score;
}data;

typedef struct node
{
	struct stu data;
	struct node* next;
}Node,*Linklist;

Linklist Initlist();
void Creatlist(Linklist head);
void Output(Linklist head);
void Insert(Linklist head,int i);
void Delete(Linklist head, int pos);
Linklist Search(Linklist head, int numb);
void Correct(Linklist head, int numb);
void Clear(Linklist head);
void Reserve(Linklist head);
void ExitandDes(Linklist head);
void saveInfoToFile(char* fileName, struct node* listHeadNode);
void readInfoFromFile(char* fileName, struct Node* listHeadNode);
void Print(void)
{
	printf(
		"********☆   学 生 成 绩 管 理 系  统     ☆********\n"
		"*********1.creat      2.insert    3.delete**********\n"
		"*********4.search     5.correct   6.output**********\n"
		"*********7.reserve    8.clear     9.save************\n"
		"**********************0.exit************************\n");
	//printf("〓〓〓〓〓〓〓〓〓〓  ☆   学 生 成 绩 管 理 系  统     ☆  〓〓〓〓〓〓〓〓〓〓\n");
}

int main()
{
	int a;
	int n,pos,numb;
	Linklist head;
	head = Initlist();
	readInfoFromFile("test.txt", head);
	do
	{
		Print();
		printf("请选择\n");
		scanf("%d", &a);
		switch (a)
		{
		case creat:
			Creatlist(head);
			break;
			//Output(head);
		case insert:
			printf("输入待插入的节点及该学生信息\n");
			scanf("%d", &n);
			struct stu tempdata;
			scanf("%s %d %d\n", tempdata.name, &tempdata.number, &tempdata.score);
			Insert(head, n,tempdata);
			fflush(stdin);
			printf("插入成功\n");
			break;
			//Output(head);
		case delete:
			printf("输入待删除的节点");
			scanf("%d", &pos);
			Delete(head, pos);
			break;
			//Output(head);
		case search:
			printf("输入要查找学生的学号\n");
			scanf("%d", &numb);
			Linklist r;
			r = Search(head, numb);
			printf("该学生的信息为:\n");
			printf("%s %d %d\n", r->data.name,r->data.number,r->data.score);
			break;
		case correct:
			printf("输入要修改学生的学号\n");
			scanf("%d", &numb);
			Correct(head, numb);
			break;
		case output:
			Output(head);
			break;
		case reserve:
			Reserve(head);
			break;
		case clear:
			Clear(head);
			break;
		case save:
			saveInfoToFile("test.txt",head);
			printf("保存成功\n");
			break;
		//case read:
		//	break;
		case Exit:
			ExitandDes(head);
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (a);
}

//初始化链表
Linklist Initlist()
{
	Linklist head;
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	return head;
}
//创建链表
void Creatlist(Linklist head)
{
	Linklist r, n;
	n = head;
	int num;
	while (1)
	{
		printf("请输入学生学号\n");
		scanf("%d", &num);
		if (num == 0)
			break;
		r = (Node*)malloc(sizeof(Node));
		r->next = NULL;
		printf("输入学生的名字和成绩\n");
		scanf("%s %d", r->data.name, &r->data.score);
		r->data.number = num;
		n->next = r;
		n = r;
	}
	n->next = NULL;
}
//输出链表
void Output(Linklist head)
{
	if (head->next == NULL)
	{
		printf("链表为空\n");
		return;
	}
	printf("*******学生信息如下*******\n");
	Linklist n = head->next;
	printf("姓名 学号 成绩\n");
	while (n)
	{
		printf("%s %3d %3d\n", n->data.name, n->data.number, n->data.score);
		n = n->next;
	}
}
//插入链表
void Insert(Linklist head,int i,struct stu data)
{
	int j = 0;
	Linklist n, r;
	n = head;
	while (j < i - 1 && n)
	{
		n = n->next;
		j++;
	}
	if (n)
	{
		r = (Node*)malloc(sizeof(Node));
		r->next = NULL;
//		printf("请输入待插入学生的信息");
//		scanf("%s %d %d", r->data.name, &r->data.number, &r->data.score);
		strcpy(r->data.name, data.name);
		r->data.number = data.number;
		r->data.score = data.score;
		r->next = n->next;
		n->next = r;
	}
	fflush(stdin);
}
//删除指定节点
void Delete(Linklist head, int pos)
{
	Linklist r, n;
	n = head;
	int j = 0;
	printf("*********删除第%d个学生********\n", pos);
	while (j < pos - 1 && n)
	{
		n = n->next;
		j++;
	}
	if (n==NULL||n->next==NULL)
	{
		printf("the pos is ERROR!");
	}
	else
	{
		r = n->next;
		n->next = r->next;
		free(r);
		r = NULL;
	}
}
//查找
Linklist Search(Linklist head, int numb)
{
	Linklist n = head->next, r;
	while (n)
	{
		if (n->data.number != numb)
		{
			n = n->next;
		}
		else
			break;
	}
	if (n == NULL)
		printf("未找到该同学\n");
	return n;

}
//修改
void Correct(Linklist head, int numb)
{
	Linklist r = Search(head, numb);
	printf("输入修改后的内容\n");
	scanf("%s %d %d", r->data.name, &r->data.number, &r->data.score);
}
//清空链表
void Clear(Linklist head)
{
	Linklist h = head->next;
	Linklist p;
	while (h)
	{
		p = h->next;
		free(h);
		h = p;
	}
	p = head;
	p->next = NULL;
}
//逆置链表
void Reserve(Linklist head)
{
	Linklist p, q, n = head->next;
	p = q = n->next;
	n->next = NULL;
	while (p)
	{
		q = q->next;
		p->next = n;
		head->next = p;
		n = p;
		p = q;
	}
}
//销毁链表
void ExitandDes(Linklist head)
{
	Clear(head);
	free(head);
	head = NULL;
	printf("已退出学生管理系统\n");
}

//从文件中读取信息
void readInfoFromFile(char* fileName, struct node* listHeadNode)
{
	FILE* fp = fopen(fileName, "r");
	if (NULL == fp)
		fp = fopen(fileName, "w+");
	int i = 1;
	struct stu tempdata;
//	while (fscanf(fp, "%s\t%s\t%s\t\t%d\t%d\t%d\n", tempdata.name, tempdata.num, tempdata.passWord, &tempdata.chinese, &tempdata.math, &tempdata.english) != EOF)
	while (fscanf(fp, "%s %d %d\n", tempdata.name, &tempdata.number, &tempdata.score)!=EOF)
	{
		Insert(listHeadNode,i,tempdata);
		memset(&tempdata, 0, sizeof(tempdata));
		i++;
	}
	fclose(fp);
	//while (i--)
	//{
	//	Linklist r = (struct node*)malloc(sizeof(Node));
	//	r->next = NULL;
	//	listHeadNode->next = r;
	//	listHeadNode = r;
	//}
}
//将信息存储到文件中
void saveInfoToFile(char* fileName, struct node* listHeadNode)
{
	FILE* fp = fopen(fileName, "w+");
	struct node* pMove = listHeadNode->next;
	while (NULL != pMove)
	{
		//fprintf(fp, "%s\t%s\t%s\t\t%d\t%d\t%d\n", pMove->data.name, pMove->data.num, pMove->data.passWord, pMove->data.chinese, pMove->data.math, pMove->data.english);
		fprintf(fp, "%s %d %d\n", pMove->data.name, pMove->data.number, pMove->data.score);
		pMove = pMove->next;
	}
	fclose(fp);
}
