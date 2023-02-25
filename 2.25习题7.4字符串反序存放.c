#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void vary(char arr[], int count)
{
	int i;
	char t;
	for (i = 0; i < count - 1; i++,count--)
	{
		t = arr[i];
		arr[i] = arr[count - 1];
		arr[count-1] = t;
	}
}
int main()
{
	char arr[20];
	scanf("%s", arr);
	int i;
	int count = 0;
	for (i = 0; arr[i] != '\0'; i++)
		count++;
	printf("%s\n", arr);
	vary(arr, count);
	printf("%s\n", arr);
	return 0;
}