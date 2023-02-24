#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;//左下标
	int right = sz - 1;//右下标

	while (left <= right)//如果没有找到，left和right会交错
						 //注意等号，表示左右指向同一个下标
	{
		int mid = (right + left) / 2;//中间元素的下标
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else
		{
			return mid;//找不到继续循环，找到了直接返回mid
		}
	}
	return -1;//循环体全部查找过后没有返回值，则返回-1表示找不到
}
int main()
{
	//二分查找
	//在一个有序数组中查找具体的某个数
	//如果找到了，返回这个数的下标，找不到，返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//查找k
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数//要在主调函数中求得
										  //传递给被调函数的是首地址，是指针，值为四或八
	
	int ret =binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到指定的数字");
	}
	else
	{
		printf("找到了，下标是%d", ret);
	}
	return 0;
}