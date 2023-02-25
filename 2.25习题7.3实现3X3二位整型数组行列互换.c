#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void vary(int arr[][3])
{
	int i, j, t;
	for(i=0;i<3;i++)
		for (j = i; j < 3; j++)
		{
			t = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = t;
		}
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	vary(arr);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}