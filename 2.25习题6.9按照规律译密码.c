#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = { "Umtorhs" };//已转译密码，需译回原文
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	for (i = 0; i < sz; i++)
	{
		if ('A' <= arr[i] && arr[i] <= 'Z')
		{
			int a;
			a = 64 + 26 + 1 - arr[i];			//a = arr[i] - 64;//知原文译密码
			arr[i] = a + 64;					//arr[i] = 64 + 26 - a + 1;
		}
		else if ('a' <= arr[i] && arr[i] <= 'z')
		{
			int a;
			a = 96 + 26 + 1 - arr[i];			//a = arr[i] - 96;
			arr[i] = a + 96;					//arr[i] = 96 + 26 - a + 1;
		}
		else
			;
	}
	for (i = 0; i < sz; i++)
		printf("%c", arr[i]);
}