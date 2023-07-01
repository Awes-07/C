#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//*******************************
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));
//	}
//}
//打印结果 8 10 12 14 16
//*******************************
// 
//***************指针****************
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//
//	//double d = 3.14;
//	//double* pd = &d;//32位-4字节  64位-8字节
//	//printf("%d\n", sizeof(pd));
//	/**pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);*/
//	//int a = 10;//申请了4个字节空间
//	////printf("%p\n", &a);
//	//int* p = &a;//p是一个变量-指针变量
//	////printf("%p\n", p);
//	//*p = 20;//* - 解引用操作符或间接访问操作符
//	//printf("a = %d\n", a);
//
//	return 0;
//}
//*******************************


//**************结构体*****************
// char int double....
//人 =3.14
//'w'
// 书 - 复杂对象
// 
// 名字+身高+年龄+身份证号+...
// 书名+作者+出版社+定价+书号+...
// 复杂对象 -- 结构体 - 我们自己创造出来的一种类型
// 
#include<string.h>
//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
//修改书名和价格名它们一个是数组一个是变量，所以修改的方法不一样
int main()
{
	//利用结构体类型-创建一个该类型的结构题变量
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++");//strcpy - string copy - 字符串拷贝
	printf("%s\n", b1.name);
	//struct Book* pd = &b1;
	////利用pd打印出我的书名和价格
	//// "."   结构体变量.成员
	//// "->"  结构体变量->成员
	//printf("%s\n", pd->name);
	//printf("%d\n", pd->price);

	/*printf("%s\n", (*pd).name);
	printf("%d\n", (*pd).price);*/

	/*printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);
	b1.price = 15;
	printf("修改后的价格:%d\n", b1.price);*/
	return 0;
}