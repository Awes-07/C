#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//***************************if���**************************

//int main()
//{
//	/*int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	*/
//	/*int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");*/
//
//	/*int age = 18;
//	if (age < 18)
//		printf("δ����\n");
//	else if (18 <= age && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else if (age >= 90)
//		printf("����\n");*/
//
//	/*int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (18 <= age && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("����\n");
//	}*/
//
//	//int age = 100;
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//	printf("����̸����\n");
//	//}//�����Ŵ�������
//	//else
//	//{
//	//	if (18 <= age && age < 28)
//	//		printf("����\n");
//	//	else if (age >= 28 && age < 50)
//	//		printf("׳��\n");
//	//	else if (age >= 50 && age < 90)
//	//		printf("����\n");
//	//	else
//	//		printf("����\n");
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
//	//if (num = 5)//��=����ֵ    ��==���ж����
//	//{
//	//	printf("�Ǻ�\n");
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

//******************��ϰ***********************
//1.�ж�һ�����Ƿ�Ϊ����  2.���1-100֮�������

//int main()
//{
//	//1.�ж�һ�����Ƿ�Ϊ����
//	int a;
//	printf("����һ��������");
//	scanf("%d", &a);//scanf �е�& ��ȡ��ַ����
//	if (a % 2 == 1)
//		printf("%d������\n", a);
//	else
//		printf("%d��������\n", a);
//
//	//2.���1-100֮�������
//	//��һ��
//	//int a = 1;
//	//while(a <= 100)
//	//{
//	//	if(a % 2 == 1)
//	//	   printf("%d ", a);
//	//	a++;
//	//}
//
//	//�ڶ���
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
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
//	else if (4 == day)
//		printf("������\n");
//	else if (5 == day)
//		printf("������\n");
//	else if (6 == day)
//		printf("������\n");
//	else if (7 == day)
//		printf("������\n");*/
//	
//	//int day = 0;
//	//scanf("%d", &day);
//	//switch (day)// switch(���ͱ��ʽ)
//	//{
//	//case 1:
//	//	printf("����һ\n");
//	//	break;
//	//case 2:
//	//	printf("���ڶ�\n");
//	//	break;
//	//case 3:
//	//	printf("������\n");
//	//	break;
//	//case 4:
//	//	printf("������\n");
//	//	break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//	printf("������\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//
//	//}
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//    case 1:
//		if (day == 1)
//			printf("hehe\n");//switch����п��Գ���if���
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//	//default: - д���κ�һ��case��ǩ���Գ��ֵ�λ��
//	//��switch���ʽ��ֵ����ƥ�����е�case��ǩ��ֵʱ�����defulat�Ӿ��������ͻ�ִ�С�
//		printf("�������\n");
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
//		{//switch����Ƕ��ʹ��
//		case 1:n++;//n��ִ��,��ǰn��ֵΪ2������ִ��case2. 
//		case 2:m++; n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;//������ m=5  n=3
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
//	return 0;//������m=5 n=3
//}

//***************************ѭ�����******************************
//while      for     do whlie
//��while����ӡ����1-10
//int main()
//{
//	int a = 1;
//	while(a<=10)
//	{
//
//		if (a == 5)
//			/*break;//��a=5ʱ������ǰѭ������ӡ���1 2 3 4��
//			��ѭ����ֻҪ����break���ͻ�ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ�������ԣ�while�е�break������������ֹѭ����*/
//			continue;
//		//��ֹѭ���б���ѭ��continue����Ĵ��룬����Ĵ��벻��ִ�У�ֱ����ת��ѭ�����жϲ��֡�
//		printf("%d",a);
//	    a++;
//	}
//	return 0;
//}

 
//   getchar�÷�
int main()
{
	int ch = 0;
	//Ctrl + z
	//EOF = end of file -> -1
	//char���ַ��ͣ�����int�����ͣ�����get�ַ���ʱ����ȡ���ַ���ASCII���Ӧ��ֵ����ctrl+z��������ַ���Ӧ��ֵ����-1.
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/
	
	return 0;
	
}