#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct S
{
	int a;
	char c[20];
	char arr[20];
	double d;
}s1, s2, s3; 
//����struct S���͵Ľṹ�壬ͬʱ������s1,s2,s3�����ṹ�壬����S���ͣ�������ȫ�ֱ���
//����Ҫ���������ﴴ��s4�Ļ���Ҫд��struct S s4��s4�Ǿֲ�����

typedef struct T
{
	int a;
	char c[20];
	double d;
}T;
//����struct T���͵Ľṹ�壬�����ṹ�����ͼ�ΪT
//����Ҫ����struct T���͵Ľṹ�壬ֻ��Ҫд��T t1����

//void Print1(T t1)  //�β�Ҳ��������ʱ�Ľṹ�壬��ռʵ��ͬ����С���ڴ棬��ӡ�ã��ṹ��.��Ա�����벻��
//{
//	printf("%d\n", t1.a);
//	printf("%s\n", t1.c);
//	printf("%lf\n", t1.d);
//}

void Print1(T* p)  //�β�ֻ������һ��ָ�룬ռ���ڴ�С����ӡ�ã�ָ��->��Ա���ķ�ʽ
{
	printf("%d\n", p->a);
	printf("%s\n", p->c);
	printf("%lf\n", p->d);
}

int main()
{
	T t1 = { 10, "abced", 3.14 };
	Print1(&t1); //�Զ��庯������ӡ�ṹ��t1�ĸ���Ԫ��
	return 0;
}