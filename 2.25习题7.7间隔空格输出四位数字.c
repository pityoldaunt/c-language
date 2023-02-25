#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fac(char input[])
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (i > 0 && i <= 3)
			printf(" %c", input[i]);
		else
			printf("%c", input[i]);
	}
}
int main()
{
	char input[10];
	scanf("%s", input);
	fac(input);
	return 0;
}