#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//判断素数
int main()
{
	int a[105];
	int n = 0;
	scanf("%d", &n);
	for (int t = 0; t < n; t++)
	{
		scanf("%d", &a[t]);
		int p = 2;
		for (p = 2; p <= a[t]; p++)
		{
			if (a[t] % p == 0)
			{
				break;
			}
		}
		if (a[t] == p)
		{
			printf("Yes");
		}
		else
		{
			printf("NO");
		}

	}
	return 0;
}



int main8()
{
	char ch;
	int a, b;
	scanf("%d %c %d", &a, &ch, &b);
	if (ch == '+')
	{
		printf("%d", a + b);
	}
	if (ch == '-')
	{
		printf("%d", a - b);
	}
	if (ch == '*')
	{
		printf("%d", a * b);
	}
	if (ch =='/')
	{
		printf("%d", a / b);
	}
	return 0;
}

int main7()
{
	int a, s, d, f;
	scanf("%d %d %d %d", &a, &s, &d, &f);
	if (s == 1)
	{
		printf("%d+%d=%d ", a,d, f);
		a + d == f ? printf("GOOD") : printf("SORRY");
	}
	else if (s == 2)
	{
		printf("%d-%d=%d ", a,d, f);
		a - d == f ? printf("GOOD") : printf("SORRY");
	}
	else if (s == 3)
	{
		printf("%d*%d=%d ", a,d, f);
		a* d == f ? printf("GOOD") : printf("SORRY");
	}
	else
	{
		printf("%d/%d=%d ", a,d, f);
		a / d == f ? printf("GOOD") : printf("SORRY");
	}
	return 0;
}
int main6()
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	 int arr[105] = { 0 };
	for (b = 0;b < a; b++)
	{
		scanf("%d", arr[b]);
	}
	while (b >= 0)
	{
		printf("%d", arr[b]);
		b--;
	}

	return 0;
}


//给定一个长度为 n 的整数数组，然后再给定一个目标数字 x。请你在数组中查找 x 是否存在。如果存在，输出它第一次出现的下标（下标从 0 开始算）；如果不存在，输出 -1
int main5()
{
	int n = 0, i = 0;
	int x = 0, r = 0;
	scanf("%d", &x);

	scanf("%d", &n);

	int a[105];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	i = 0;
	for (i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			r = 1;
			break;
		}

	}
	if (r == 1)
	{
		printf("%d", i);
	}
	else
	{
		printf("-1");
	}

	return 0;
}


//输入一个仅包含大小写字母的字符串（不含空格）。请统计并输出其中大写字母的个数和小写字母的个数
int main3()
{
	int p = 0, q = 0;
	char a[105];
	scanf("%s", a);
	int i = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] <= 'Z' && a[i] >= 'A')
		{
			p++;
		}
		else if (a[i] >= 'a' && a[i <= 'z'])
		{
			q++;
		}
	}
	printf("大写字母有%d个\n", p);
	printf("小写字母有%d个\n", q);
	return 0;
}



//输入一个整数 n。如果 n 是偶数，请输出从 1 到 n 之间所有偶数的和；如果 n 是奇数，请输出从 1 到 n 之间所有奇数的和。
int main2()
{
	int a, sum = 0;
	int b = 1;
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		if (a % 2 == 0)
		{
			if (b % 2 == 0)
			{
				sum = sum + b;
			}
		}
		else
		{
			if (b % 2 != 0)
			{
				sum = sum + b;
			}
		}
	}
	printf("%d", sum);
	return 0;
}


int main1()
{
	int b = 1;
	int a = 0;
	scanf("%d", &a);
	int sum = 0;
	if (a % 2 == 0)
	{
		while (b <= a)
		{
			if (b % 2 == 0)
			{
				sum = sum + b;

			}
			b++;
		}

	}
	else
	{
		while (b <= a)
		{
			if (b % 2 == 1)
			{
				sum = sum + b;

			}
			b++;
		}

	}
	printf("%d", sum);
	return 0;
}



//int main() 
//{
//	int a =0;
//    
//    while(scanf("%d",&a)!=EOF)
//    {
//	  int i =1;
//	  int sum =1;
//    	while(i<=a)
//    	{
//    		sum =sum*i;
//    	     i++;
//		}
//      printf("%d",sum);
//	}
//	return 0;
//}


//int main()
//{
//	int a[6]={0};
//	int i =0; 
//	for(i=0;i<=5;i++)
//	{
//		scanf("%d",&a[i]);
//	 } 
//	 for(i=0;i<=5;i++)
//	{
//	printf("%d ",a[i]);
//	 } 
//	return 0;
// } 
//年龄是否成年
/*int main()
{
	int a = 0;
	printf("请输入你的年龄\n");
    scanf("%d", &a);
	if (a >= 18)
	{
		printf("成年\n");
	}
	else
	{
		printf("未成年\n");
	}

	return 0;
}*/



////判断是不是奇数
//int main()
//{
//	int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        ;
//        if (a % 2 == 0)
//        {
//            printf("%d是偶数\n", a);
//
//        }
//        else
//        {
//            printf("%d是奇数\n", a);
//        }
//    }
//
//
//
//
//        return 0;
//}