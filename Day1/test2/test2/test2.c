#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//*************************************************************************
//生命周期
//1.局部变量的生命周期是-进入作用域生命周期开始，出作用域生命周期结束。
//2.全局变量的生命周期是-整个程序的生命周期。
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);//正确
//
//	}
//	printf("a=%d\n", a);//错误
//	return 0;
//
//}
//1.局部变量的作用域是变量所在的局部范围。
//2.全局变量的作用域是整个工程。
//int main()
//{
//	extern int g_val;//extern是用来声明外部符号的
//	printf("g_val = %d\n", g_val);//未声明的标识符g_val
//	return 0;
//}
//*************************************************************************
//全局变量
// int global = 2020;
//
//void test()
//{
//	printf("test()-- %d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}
//*************************************************************************
//int main()
//{
//	//局部变量的作用域
//	int num = 0; 
//	{
//		printf("num = %d\n", num); 
//	}
//	return 0;
//}

//*************************************************************************
//int main()
//{
//
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	//输入数据-使用输入函数scanf
//	scanf_s("%d%d", &num1, &num2);//取地址符号-&
//	
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}

//*************************************************************************
//int a = 100;
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易误会，产生BUG
//	//当局部变量和全局变量的名字相同的时候局部变量优先
//	printf("%d\n",a);
//	return 0;
//}


//*************************************************************************
//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）內部
//	return 0;
//}
//*************************************************************************
//int main()
//{
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数
//	
//	return 0;
//}
//*************************************************************************
//int main()
//{
//	printf("%d\n", sizeof(char));//1字节 字符数据类型
//	printf("%d\n", sizeof(short));//2字节 短整型
//	printf("%d\n", sizeof(int));//4字节 整形
//	printf("%d\n", sizeof(long));//4字节 长整型
//	printf("%d\n", sizeof(long long));//8字节 更长的整形
//	printf("%d\n", sizeof(float));//4字节 单精度浮点数
//	printf("%d\n", sizeof(double));//8字节 双精度浮点数
//	return 0;
//} 
//计算机中的单位                                二进制
//bit - 比特位                                  0 1
//byte - 字节                                   十进制
//kb                                            0 1 2 3 4 5 6 7 8 9 
//mb                                            八进制
//gb                                            0 1 2 3 4 5 6 7 
//tb
//pb
//*************************************************************************