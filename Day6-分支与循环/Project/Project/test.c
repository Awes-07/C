#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//**************************while循环**********************************
//int main() 
//{   
//	/*int ch = 0;	
//	//EOF - end of file - 文件结束标志
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩下 “\n”
//	//读取一下“\n”
//	while ((ch = getchar()) != '\n')
//	{
//
//	}
//	printf("请确认(Y/N):");//遇到以下情况认为一个数据的输入结束： 1）空格、Tab或回车 2）达到输入位宽 3）遇到非法字符
//	ret = getchar();//  Y/N
//
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//	return 0;
//
//}


//int main()
//{
//	int ch = 0;
//	while ((ch =getchar()) !=EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;//初始化
//	while (i<10)//判断
//	{
//		i++;//调整
//	}
//	return 0;
//}
// 
//************************for循环************************************
//int main()
//{
//	int i = 0;
//	//for(初始化；判断；调整)
//	//for (i = 0; i < length; i++)
//	for (i = 1; i <=10; i++)
//	{
//		printf("%d\n", i);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			/*break;*/
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//建议
//1.不可在for循环体内修改循环变量，防止for循环失去控制。
//2.建议for语句的循环控制变量的取值采用"前闭后开区间"写法。
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n", i);
//	}
//	return 0;
//}

//int main()
//{
//     int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//     int i = 0;
//     //10 次循环
//     //10 次打印
//     //10 个元素
//     for ( i = 0; i < 10; i++)
//     {
//	     printf(" %d", arr[i]);
//     }
//	return 0;
//}

//int main()
//{
//	for (;;)
//	//1.for循环的初始化、调整、判断 都可以省略。
//	//但是for循环的 判断部分 如果被省略，那判断判断条件就是：恒为正
//    //2.如果不是非常熟练，建议不要随便省略
//	{
//		printf("hehe\n");
//
//	}
//	return 0;
//}
/*int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}*///i=0时执行j的循环，j的循环结束后，该执行i++了，此时i=1，但是j并没有赋初值，所以j=10不符合条件不执行

//int main()
//{
//	int x, y;
//	for (x=0, y=0; x<2 && y<5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//0为假
//		k++;
//	return 0;
//}

//************************do while循环************************************
//do
//   循环语句;
// while(表达式);
//
//用do...while循环打印数字1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//	    i++;
//	} 
//	while (i <=10);
//	
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			/*break;*/ //1234
//			continue; //1234死循环
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//
//
//	return 0;
//}
//************************练习*******************************
//计算n的阶乘

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n：", ret);
//
//	return 0;
//}

//计算1!+2!+3!+...+10!
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//
//	for ( n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		//n的阶乘
//		sum = sum + ret;	
//	}
//	printf("sum = %d\n", ret);
//
//	return 0;
//}

//优化
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", ret);
//
//	return 0;
//}

//3.在一个有序数组中查找具体的某个数字n。
//编写int binsearch(int x, int v[], int n);
//功能︰在v[0]<=v[1]<=v[2]<= ...<=v[n-1]的数组中查找x.

//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//二分法（折半）查找
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 8;
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//
//	while (left<=right)
//	{
//		int mid = (left + right)/2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下表为：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//编写代码，显示多个字符从两端移动，向中间汇聚。
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	//welcome to china!!!
//	//###################
//	//w#################!
//	//we###############!!
//	//wel#############!!!
//	//...
//	//welcome to china!!!
//	//
//	// char arr[]= "abc";
//	// [a b c \0]  
//	//  0 1 2 34
//	// 4-2
//	//字符串系统后面自动加\0
//	char arr1[] = "welcome to china!!!";//字符串中后面有\0,数组是没有的，所以sizeof(arr1[0] - 2.
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);//
//	int right = strlen(arr1) - 1;//strlen字符串（不包括、0）
//	//sizeof() 计算字符串的长度，包含末尾的 '\0'，strlen() 计算字符串的长度，不包含字符串末尾的 '\0'。
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息1s
//		Sleep(500);
//		system("cls");//system执行系统命令的一个函数.   "cls"-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。
//（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。）

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0)//==不能用来比较两个字符串是否相等，应该使用一个库函数strcmp.
		{
			printf("登录成功\n");
			break;
		}
		else 
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序！！！\n");
	return 0;
}
