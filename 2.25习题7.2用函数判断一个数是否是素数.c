#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int judge(int input)
{
	int i;
	for (i = 2; i <= sqrt(input); i++)
	{
		if (input % i == 0)
			return 0;
	}
	if (i > sqrt(input))
		return 1;
}
int main()
{
	int input;
	scanf("%d", &input);
	int a = judge(input);
	if (a == 1)
		printf("%d是素数", input);
	else
		printf("%d不是素数", input);
}