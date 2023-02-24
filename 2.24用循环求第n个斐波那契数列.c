#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int fib(int n)//迭代的方式效率比递归高很多
{
	int a = 1;
	int b = 1;
	int c = 1;//n<=2时返回1
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//a,b,c向右移动了一步，距离求出n个斐波那契更近了
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