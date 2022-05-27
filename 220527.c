#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct S
{
	int a;
	char c[20];
	char arr[20];
	double d;
}s1, s2, s3; 
//创建struct S类型的结构体，同时创建了s1,s2,s3三个结构体，都是S类型，三个是全局变量
//后面要在主函数里创建s4的话，要写成struct S s4，s4是局部变量

typedef struct T
{
	int a;
	char c[20];
	double d;
}T;
//创建struct T类型的结构体，并将结构体类型简化为T
//后面要创建struct T类型的结构体，只需要写成T t1即可

//void Print1(T t1)  //形参也创建了临时的结构体，会占实参同样大小的内存，打印用（结构体.成员）代码不好
//{
//	printf("%d\n", t1.a);
//	printf("%s\n", t1.c);
//	printf("%lf\n", t1.d);
//}

void Print1(T* p)  //形参只创建了一个指针，占用内存小，打印用（指针->成员）的方式
{
	printf("%d\n", p->a);
	printf("%s\n", p->c);
	printf("%lf\n", p->d);
}

int main()
{
	T t1 = { 10, "abced", 3.14 };
	Print1(&t1); //自定义函数，打印结构体t1的各个元素
	return 0;
}