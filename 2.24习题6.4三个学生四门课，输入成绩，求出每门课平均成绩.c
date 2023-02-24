#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double arr[4][4]={0};
	int i;
	for(i=0;i<=2;i++)
	scanf("%lf%lf%lf%lf", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
	int j;
	for (i = 0; i <= 3; i++)
	{
		int sum = 0;
		for (j = 0; j <= 2; j++)
		{
			sum = sum+arr[j][i];
		}
		arr[3][i] = sum/4.0;
	}
	for (i = 0; i <= 3; i++)
	{
		printf("%lf\n", arr[3][i]);
	}

}