#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fib(int n)//����Ч�ʵͣ������ظ���ֵ����
{
	int f;
	if (n >=3)
		f = fib(n - 1) + fib(n - 2);//retrun fib(n - 1) + fib(n - 2);
	else
		f = 1;
	return f;						//return 1;
	
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}