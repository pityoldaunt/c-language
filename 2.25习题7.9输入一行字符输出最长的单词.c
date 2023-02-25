#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	void fac(char arr[]);
	char arr[40];
	gets(arr);
	fac(arr);
	return 0;
}
void fac(char arr[])
{
	char a[10] = { 0 }, b[10] = { 0 };
	int t = 0, f = 0;
	int i;
	for (i = 0; arr[i] != '\0'; i++)
	{
		b[f] = arr[i];
		f++;
		if (f > t)
		{
			if (arr[i + 1] == '\0' && t == 0)//只输入一个单词
				printf("%s", b);
			else
			if (arr[i] == ' ')
			{
				t = f - 1;
				int q;
				for (q = 0; q < 10; q++)
					a[q] = b[q];
				f = 0;

			}
			else
				if (arr[i + 1] == '\0')
				{
					int q;
					for (q = 0; q < 10; q++)
						a[q] = b[q];
				}
		}
	}
	printf("%s", a);
}