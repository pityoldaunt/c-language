#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char arr[])
{
	int i;
	for (i = 0; arr[i] != '\0'; i++)
	{
		;
	}
	return i;
}
void my_strcat(char arr1[], char arr2[])
{
	int a1 = my_strlen(arr1);
	int a2 = my_strlen(arr2);
	int i;
	for (i = 0; i < a2; i++)
	{
		arr1[a1 + i] = arr2[i];
	}
	//arr1[a1 + i] = '\0';
}
int main()
{
	char arr1[20] = "BEI";
	char arr2[] = "JING";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
}