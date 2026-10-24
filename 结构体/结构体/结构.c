#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	struct student
	{
		char name[25];//姓名
		long phone;//手机号
		char sex[10];//性别
		int height;//身高
		float weight;//体重

	};
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

	return 0;
}