#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int fib(int n)//�����ķ�ʽЧ�ʱȵݹ�ߺܶ�
{
	int a = 1;
	int b = 1;
	int c = 1;//n<=2ʱ����1
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//a,b,c�����ƶ���һ�����������n��쳲�����������
	}
	return c;
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}