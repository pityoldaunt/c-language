#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int arr[5] = { 8,6,5,4,1 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		i = arr[left];
		arr[left] = arr[right];
		arr[right] = i;
		left++;
		right--;
	}
	
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}