#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void GetMemory(char**p)
{
	*p = "hello world";
	
}

void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	printf("%s",str);
}

int main()
{
	Test();
	return 0;
}


int main1()
{
	char* a = (char*)malloc(5 * sizeof(char));
	assert(a != NULL);
	for (int i = 0; i < 5; i++)
	{
		scanf(" %c", a + i);
	}
	for (int j = 0; j < 5; j++)
	{
		printf("%c ", *(a + j));
	}
	free(a);
	a = NULL;
	return 0;
}