#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[3][80];
	int i,j;
	int big=0, small=0, num=0, space=0, other=0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 80; j++)
		{
			scanf("%c", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 80; j++)
		{
			if ('A' <= arr[i][j] && arr[i][j] <= 'Z')
			{
				big++;
			}
			else if ('a' <= arr[i][j] && arr[i][j] <= 'z')
			{
				small++;
			}
			else if ('0' <= arr[i][j] && arr[i][j] <= '9')
			{
				num++;
			}
			else if (arr[i][j] == ' ')
			{
				space++;
			}
			else
			{
				other++;
			}
		}
	}
	printf("big=%d\nsmall=%d\nnum=%d\nspace=%d\nother=%d\n", big, small, num, space, other);

}