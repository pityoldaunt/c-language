#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fac(char arr[])
{
	int num = 0, word = 0, space = 0, other = 0;
	int i;
	for (i = 0; arr[i]!='\0'; i++)

		if ('A' <= arr[i] && arr[i] <= 'Z' || 'a' <= arr[i] && arr[i] <= 'z')
			word++;
		else if ('0' <= arr[i] && arr[i] <= '9')
			num++;
		else if (arr[i] == ' ')
			space++;
		else
			other++;
	printf("word=%d\nnum=%d\nspace=%d\nother=%d\n", word, num, space, other);
}
int main()
{
	char arr[40];
	gets(arr);
	fac(arr);
	return 0;
}