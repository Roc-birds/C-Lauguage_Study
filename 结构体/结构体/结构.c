#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct student
	{
		char name[25];//姓名
		long phone;//手机号
		char sex[10];//性别
		int height;//身高
		float weight;//体重

	};
//结构体
     typedef int T;
	typedef struct Grafe
	{
		int math;
		T English;
		int history;
	}good;
	//使用typedef给结构体起别名

	void result1(struct Grafe* p)
	{
		printf("\n");
		printf("%d\n", p->math);
		printf("%d\n", p->English);
		printf("%d\n", p->history);
	}

	void result2(struct Grafe arr)
	{
		printf("\n");
		printf("%d\n", arr.math);
		printf("%d\n", arr.English);
		printf("%d\n", arr.history);
	}


int main()
{
	
	struct student identity = { "liuyipeng",110,"man",170,96.4 };
	printf("%s\n", identity.name);
	printf("%d\n", identity.height);
	printf("%ld\n", identity.phone);
	printf("%s\n", identity.sex);
	printf("%.4f\n", identity.weight);
	printf("\n");

	struct student B = { .phone = 120,.sex = "wowen",.height = 165,.weight = 46,.name = "zhang" };
	printf("%s\n", B.name);
	printf("%d\n", B.height);
	printf("%ld\n", B.phone);
	printf("%s\n", B.sex);
	printf("%.4f\n", B.weight);
	printf("\n");

	
	good a = { 143,114,75 };
	printf("%d\n", a.math);
	printf("%d\n", a.English);
	printf("%d\n", a.history);
	

	
	struct Grafe R = { 58,84,96 };
	struct Grafe* p = &R;
	result1(p);

	struct Grafe Q = { 95,133,75 };
	result2(Q);
return 0;
}