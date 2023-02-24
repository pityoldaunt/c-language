#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double arr[5][5];
	int i,j;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			scanf("%lf", &arr[i][j]);
		}
	}
	for (i = 0; i <= 4; i++)
	{
		int sum = 0;
		for (j = 0; j <= 3; j++)
		{
			sum = sum + arr[i][j];
		}
		arr[i][4] = sum / 4.0;
	}
	int k = 0;
	int b[5] = { 0 };
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (arr[j][4] > arr[i][4])
			{
				for (k = 0; k < 5; k++)
				{
					b[k] = arr[i][k];
					arr[i][k] = arr[j][k];
					arr[j][k] = b[k];
				}

			}
		}
	}
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%lf ", arr[i][j]);
		}
		printf("\n");
	}
}