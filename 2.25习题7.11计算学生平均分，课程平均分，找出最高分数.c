#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void aver1(double arr[][6])
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		int sum = 0;
		for (j = 0; j < 5; j++)
		{
			sum = sum + arr[i][j];
		}
		arr[i][5] = sum / 5.0;
	}
}
void aver2(double arr[][6])
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		int sum = 0;
		for (j = 0; j < 10; j++)
		{
			sum = sum + arr[j][i];
		}
		arr[10][i] = sum / 10.0;
	}
}
void fac_max(double arr[][6], double arrr[])
{
	int i, j;
	arrr[0] = arr[0][0];
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (arr[i][j] > arrr[0])
			{
				arrr[1] = i;
				arrr[2] = j;
				arrr[0] = arr[i][j];
			}
		}
		
	}
}
int main()
{
	double arr[11][6] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
			scanf("%lf", &arr[i][j]);
	}
	aver1(arr);
	aver2(arr);
	double arrr[3] = { 0 };
	fac_max(arr, arrr);
	for (i = 0; i < 10; i++)
	{
		printf("第%d个学生平均分%lf\n",i, arr[i][5]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("第%d课的平均分%lf\n", i, arr[10][i]);
	}
	printf("最高的分数%lf\n对应学生%.0lf\n对应课程%.0lf\n", arrr[0], arrr[1], arrr[2]);
}