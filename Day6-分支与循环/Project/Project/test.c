#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//**************************whileѭ��**********************************
//int main() 
//{   
//	/*int ch = 0;	
//	//EOF - end of file - �ļ�������־
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������룬�������password������
//	//��������ʣ�� ��\n��
//	//��ȡһ�¡�\n��
//	while ((ch = getchar()) != '\n')
//	{
//
//	}
//	printf("��ȷ��(Y/N):");//�������������Ϊһ�����ݵ���������� 1���ո�Tab��س� 2���ﵽ����λ�� 3�������Ƿ��ַ�
//	ret = getchar();//  Y/N
//
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
//	int i = 0;//��ʼ��
//	while (i<10)//�ж�
//	{
//		i++;//����
//	}
//	return 0;
//}
// 
//************************forѭ��************************************
//int main()
//{
//	int i = 0;
//	//for(��ʼ�����жϣ�����)
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
//����
//1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
//2.����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"д����
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
//     //10 ��ѭ��
//     //10 �δ�ӡ
//     //10 ��Ԫ��
//     for ( i = 0; i < 10; i++)
//     {
//	     printf(" %d", arr[i]);
//     }
//	return 0;
//}

//int main()
//{
//	for (;;)
//	//1.forѭ���ĳ�ʼ�����������ж� ������ʡ�ԡ�
//	//����forѭ���� �жϲ��� �����ʡ�ԣ����ж��ж��������ǣ���Ϊ��
//    //2.������Ƿǳ����������鲻Ҫ���ʡ��
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
}*///i=0ʱִ��j��ѭ����j��ѭ�������󣬸�ִ��i++�ˣ���ʱi=1������j��û�и���ֵ������j=10������������ִ��

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
//	for (i = 0, k = 0; k = 0; i++, k++)//0Ϊ��
//		k++;
//	return 0;
//}

//************************do whileѭ��************************************
//do
//   ѭ�����;
// while(���ʽ);
//
//��do...whileѭ����ӡ����1-10
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
//			continue; //1234��ѭ��
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//
//
//	return 0;
//}
//************************��ϰ*******************************
//����n�Ľ׳�

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
//	printf("ret = %d\n��", ret);
//
//	return 0;
//}

//����1!+2!+3!+...+10!
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
//		//n�Ľ׳�
//		sum = sum + ret;	
//	}
//	printf("sum = %d\n", ret);
//
//	return 0;
//}

//�Ż�
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

//3.��һ�����������в��Ҿ����ĳ������n��
//��дint binsearch(int x, int v[], int n);
//���ܩU��v[0]<=v[1]<=v[2]<= ...<=v[n-1]�������в���x.

//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//���ַ����۰룩����
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 8;
//
//	int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz-1;//���±�
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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
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
//	//�ַ���ϵͳ�����Զ���\0
//	char arr1[] = "welcome to china!!!";//�ַ����к�����\0,������û�еģ�����sizeof(arr1[0] - 2.
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);//
//	int right = strlen(arr1) - 1;//strlen�ַ�������������0��
//	//sizeof() �����ַ����ĳ��ȣ�����ĩβ�� '\0'��strlen() �����ַ����ĳ��ȣ��������ַ���ĩβ�� '\0'��
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣ1s
//		Sleep(500);
//		system("cls");//systemִ��ϵͳ�����һ������.   "cls"-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳����򡣣�

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��strcmp.
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else 
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("��������������˳����򣡣���\n");
	return 0;
}
