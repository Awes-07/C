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
//��ӡ��� 8 10 12 14 16
//*******************************
// 
//***************ָ��****************
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//
//	//double d = 3.14;
//	//double* pd = &d;//32λ-4�ֽ�  64λ-8�ֽ�
//	//printf("%d\n", sizeof(pd));
//	/**pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);*/
//	//int a = 10;//������4���ֽڿռ�
//	////printf("%p\n", &a);
//	//int* p = &a;//p��һ������-ָ�����
//	////printf("%p\n", p);
//	//*p = 20;//* - �����ò��������ӷ��ʲ�����
//	//printf("a = %d\n", a);
//
//	return 0;
//}
//*******************************


//**************�ṹ��*****************
// char int double....
//�� =3.14
//'w'
// �� - ���Ӷ���
// 
// ����+���+����+���֤��+...
// ����+����+������+����+���+...
// ���Ӷ��� -- �ṹ�� - �����Լ����������һ������
// 
#include<string.h>
//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
//�޸������ͼ۸�������һ��������һ���Ǳ����������޸ĵķ�����һ��
int main()
{
	//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	strcpy(b1.name, "C++");//strcpy - string copy - �ַ�������
	printf("%s\n", b1.name);
	//struct Book* pd = &b1;
	////����pd��ӡ���ҵ������ͼ۸�
	//// "."   �ṹ�����.��Ա
	//// "->"  �ṹ�����->��Ա
	//printf("%s\n", pd->name);
	//printf("%d\n", pd->price);

	/*printf("%s\n", (*pd).name);
	printf("%d\n", (*pd).price);*/

	/*printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
	return 0;
}