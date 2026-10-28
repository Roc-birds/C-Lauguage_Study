#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) == EOF)
    {
        printf("%d\n", a + b);
        if (a == 0 && b == 0)
        {
            break;
        }
    }
    return 0;
}

int main2()
{
    int a = 0, b = 0;
    scanf("%d", &a);
    b = a % 100;
    if (3 <= b&&b <= 5)
    {
        printf("spring");
    }
    else if (6 <= b&&b<= 8)
    {
        printf("summer");
    }
    else if (9 <= b&&b <= 11)
    {
        printf("aumumn");
    }
    else
    {
        printf("winter");
    }

    return 0;
}

int main1()
{
	int a=0;
	printf("%d", a);
	return 0;
}
//int main()
//{
//	char* name = "yipeng";
//	char surname[20] = "han";
//	char* ret = strcat(surname, name);
//	printf("%s\n",ret);
//	//%s 需要的的是地址，所以不需要*
//	return 0;
//}