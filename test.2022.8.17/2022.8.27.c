#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//strcpy 函数把(目的地,源)源拷贝到目的地,同时也会带上(null='\0')
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
//调用过后证实了拷贝	\0


//自定义函数求较大值

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

//void swap(int* x, int* y)//接收要用指针
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
//	//swap(a, b);//传值,没有传址,改变只能通过地址
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}
//形参实例化之后其实相当于实参的一份临时拷贝



//判断一个数是不是三的倍数
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
//		printf("是\n");
//	}
//	else
//		printf("不是\n");
//	return 0;
//}


