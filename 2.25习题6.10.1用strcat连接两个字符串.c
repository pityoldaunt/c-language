#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { "hello" };
	char arr2[] = { " bit" };
	strcat(arr1, arr2);
	printf("%s", arr1);
}