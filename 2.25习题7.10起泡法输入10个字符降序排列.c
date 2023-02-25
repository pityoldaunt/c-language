#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void sort(int arr[],int n)
{
	int i, j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if (arr[j] > arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
}
int main()
{
	int arr[20];
	int i;
	for (i = 0; i < 10; i++)
	scanf("%d", &arr[i]);
	sort(arr,10);
	for (i = 0; i < 10; i++)
		printf("%d", arr[i]);
}