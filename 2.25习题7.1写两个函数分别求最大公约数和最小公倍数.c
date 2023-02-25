#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max_div(int a, int b)
{
	int div=0;
	int min = a < b ? a : b;
	int i;
	for (i = 1; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0)
			div = i;
	}
	return div;
}
int mix_mul(int a, int b)
{
	int mul = 0;
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	int i;
	if (max % min == 0)
	{
		return max;
	}
	else
	{
		for (i = max; i % a != 0 || i % b != 0; i++)
			;
	}
	mul = i;
	return mul;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int div = max_div(a, b);
	int mul = mix_mul(a, b);
	printf("最大公约数是%d\n最小公倍数是%d\n", div, mul);
	return 0;
}