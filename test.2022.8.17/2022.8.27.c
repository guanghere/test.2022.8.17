#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//strcpy ������(Ŀ�ĵ�,Դ)Դ������Ŀ�ĵ�,ͬʱҲ�����(null='\0')
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[10] = { 0 };
//
//	strcpy(arr2, arr1);
//
//	printf("%s", arr2);
//
//	return 0;
//}

//int main() {
//	char arr1[] = "abcdef";
//	char arr2[20] = {"xxxxxxxxxxxxxxxxxx"};
//
//	strcpy(arr2, arr1);
//
//	printf("%s", arr2);
//
//	return 0;
//}
//���ù���֤ʵ�˿���	\0


//�Զ��庯����ϴ�ֵ

//int MAX(int a, int b) {
//	/*if (a > b) {
//		return a;
//	}
//	else {
//		return b;
//	}*/
//	//return (a < b ? a : b);
//	return (a > b ? a : b);
//}
//
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m=MAX(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//void swap(int* x, int* y)//����Ҫ��ָ��
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//swap(a, b);//��ֵ,û�д�ַ,�ı�ֻ��ͨ����ַ
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}
//�β�ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ����



//�ж�һ�����ǲ������ı���
//int beishu(int* x)
//{
//	if (*x % 3 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	//int m = beishu(&a);
//	if (beishu(&a) == 1)
//	{
//		printf("��\n");
//	}
//	else
//		printf("����\n");
//	return 0;
//}


