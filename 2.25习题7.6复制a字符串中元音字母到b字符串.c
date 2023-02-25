#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_strcpy__(char arr2[], char arr1[])
{
	int i;
	int j = 0;
	for (i = 0; i < 20; i++)
	{
		if (arr1[i] == 'a' || arr1[i] == 'e' || arr1[i] == 'i' || arr1[i] == 'o' || arr1[i] == 'u')
		{
			arr2[j] = arr1[i];
			j++;
		}
	}
	arr2[j] = '\0';
}
int main()
{
	char arr1[20]={"aeiou123auoehc45"};
	char arr2[20]={"123456789"};
	my_strcpy__(arr2, arr1);
	printf("%s", arr2);
}