#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//***************************if语句**************************

//int main()
//{
//	/*int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	*/
//	/*int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");*/
//
//	/*int age = 18;
//	if (age < 18)
//		printf("未成年\n");
//	else if (18 <= age && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else if (age >= 90)
//		printf("高龄\n");*/
//
//	/*int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (18 <= age && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("高龄\n");
//	}*/
//
//	//int age = 100;
//	//if (age < 18)
//	//{
//	//	printf("未成年\n");
//	//	printf("不能谈恋爱\n");
//	//}//大括号代表代码块
//	//else
//	//{
//	//	if (18 <= age && age < 28)
//	//		printf("青年\n");
//	//	else if (age >= 28 && age < 50)
//	//		printf("壮年\n");
//	//	else if (age >= 50 && age < 90)
//	//		printf("老年\n");
//	//	else
//	//		printf("高龄\n");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	//int num = 4;
//	//if (num = 5)//“=”赋值    “==”判断相等
//	//{
//	//	printf("呵呵\n");
//	//}
//
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//******************练习***********************
//1.判断一个数是否为奇数  2.输出1-100之间的奇数

//int main()
//{
//	//1.判断一个数是否为奇数
//	int a;
//	printf("输入一个整数：");
//	scanf("%d", &a);//scanf 中的& 是取地址符号
//	if (a % 2 == 1)
//		printf("%d是奇数\n", a);
//	else
//		printf("%d不是奇数\n", a);
//
//	//2.输出1-100之间的奇数
//	//第一种
//	//int a = 1;
//	//while(a <= 100)
//	//{
//	//	if(a % 2 == 1)
//	//	   printf("%d ", a);
//	//	a++;
//	//}
//
//	//第二种
//	//int a = 1;
//	//while (a < 100)
//	//{
//	//	printf(" %d", a);
//	//	a += 2;
//	//}
//
//	return 0;
//}
// 
//******************switch***********************

//int main()
//{
//	/*int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	else if (4 == day)
//		printf("星期四\n");
//	else if (5 == day)
//		printf("星期五\n");
//	else if (6 == day)
//		printf("星期六\n");
//	else if (7 == day)
//		printf("星期天\n");*/
//	
//	//int day = 0;
//	//scanf("%d", &day);
//	//switch (day)// switch(整型表达式)
//	//{
//	//case 1:
//	//	printf("星期一\n");
//	//	break;
//	//case 2:
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期天\n");
//	//
//	//}
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//    case 1:
//		if (day == 1)
//			printf("hehe\n");//switch语句中可以出现if语句
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//	//default: - 写在任何一个case标签可以出现的位置
//	//当switch表达式的值并不匹配所有的case标签的值时，这个defulat子句后面的语句就会执行。
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:n++;//n不执行,当前n的值为2，所以执行case2. 
//		case 2:m++; n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;//输出结果 m=5  n=3
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;//输出结果m=5 n=3
//}

//***************************循环语句******************************
//while      for     do whlie
//用while语句打印数字1-10
//int main()
//{
//	int a = 1;
//	while(a<=10)
//	{
//
//		if (a == 5)
//			/*break;//当a=5时结束当前循环，打印结果1 2 3 4。
//			在循环中只要遇到break，就会停止后期的所有的循环，直接终止循环。所以：while中的break是用于永久终止循环的*/
//			continue;
//		//中止循环中本次循环continue后面的代码，后面的代码不再执行，直接跳转到循环的判断部分。
//		printf("%d",a);
//	    a++;
//	}
//	return 0;
//}

 
//   getchar用法
int main()
{
	int ch = 0;
	//Ctrl + z
	//EOF = end of file -> -1
	//char是字符型，但是int是整型，所以get字符的时候会获取的字符的ASCII码对应的值，而ctrl+z所打出的字符对应的值就是-1.
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/
	
	return 0;
	
}