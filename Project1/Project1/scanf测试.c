#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//printf的头文件
int main()
{
	printf("佟明昊，帅哥");
	return 0;

}
//{
//    int a;
//    scanf("%d", &a);
//    if (a % 4 == 0 && a % 100 != 0)
//    {
//        printf("Leap Year");
//    }
//    else if (a % 400 == 0)
//    {
//        printf("Leap Year");
//    }
//    else
//    {
//        printf("Not Leap Year");
//    }
//    return 0;
//}

//二分法查数的位置
//{   
//	int r;
//	scanf("%d", &r);
//	int a[7] = { 3,4,5,6,7,8,9 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	int j = len - 1;
//	int mid = -1;
//	int Q = 0;
//	while (i <= j)
//	{
//		mid = (i + j) / 2;
//		if (r> a[mid])
//		{
//			i = mid + 1;
//		}
//		else if (r < a[mid])
//		{
//			j = mid - 1;
//		}
//		else
//		{
//			Q++;
//			break;
//		}
//	}
//	if (Q = 1)
//	{
//		printf("%d", mid);
//	}
//	else
//	{
//		printf("没有找到");
//	}
//	return 0;
//
//}


//扩大数组中的数据的倍数
//{
//	int a[6] = { 1,2,3,4,5,6 };
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", 2 * a[i]);
//	}
//	return 0;
//}


//数组的逆置
//{
//	int a[4] = { 2,3,4,5 };
//	int len = sizeof(a) / sizeof(a[0]);//表示数组中有几个元素
//	int i = 0;
//    int j = len-1;
//	while (j >= i)
//	{
//		int f = a[i];
//		a[i] = a[j];
//		a[j] =  f;
//		i++;
//		j--;
//	}
//	for (int n = 0; n < 4; n++)
//	{
//		printf("%d", a[n]);
//	}
// return 0;
//}


//    //数组的输入与打印
//{
//	int a[7];
//	//数组的输入
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	//数组的打印
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}




//一个数的二进制有几个1
//{
//	int a = 4;
//	int r = 0;
//	while (a != 0)
//	{
//		if ((a & 1) == 1)
//		{
//			r++;
//		}
//		a=a >> 1;
//	}
//	printf("%d\n", r);
// return 0;
//}


//打印九九乘法表
//{		
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求1~100之中2的倍数之和
//{
//	
//	int a = 0;
//	int i = 1;
//	for (  i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)//必须是两个等号
//		{
//			a = a + i;
//		}
//	}
//	printf("%d\n", a);
//}



//求一个正整数的阶乘
//{
//	int a;
//	scanf("%d", &a);
//	int i = 1;
//	int num =1;
//	for (i = 1;i<=a;i++)//for之中用分号隔开
//	{
//		num = num * i;
//	}
//	printf("%d", num);
//	return 0;
//}





//输入一个正的整数，逆序打印这个整数的每一位
//{
//	int a;
//	scanf("%d", &a);
//	while (a  !=0)
//	{
//		printf("%d", a % 10);
//			a = a / 10;
//	}
//	return 0;
//}

//{
//	int a=0;
//	int b=0;
//	scanf("%d%d", &a ,& b);
//	//最终输入需要与双引号里的形式一致
//	printf("%d %d", a, b);
//		return 0;
//}