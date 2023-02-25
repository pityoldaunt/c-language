#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < 9; i++)//¿ØÖÆÐÐ
	{
		if (i % 2 != 0)
		{
			printf("\n");
		}
		else
		{
			for (j = 0; j < i; j++)
				printf(" ");
			printf("* * * * *\n");
		}
	}
}