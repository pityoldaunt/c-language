#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;//���±�
	int right = sz - 1;//���±�

	while (left <= right)//���û���ҵ���left��right�ύ��
						 //ע��Ⱥţ���ʾ����ָ��ͬһ���±�
	{
		int mid = (right + left) / 2;//�м�Ԫ�ص��±�
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else
		{
			return mid;//�Ҳ�������ѭ�����ҵ���ֱ�ӷ���mid
		}
	}
	return -1;//ѭ����ȫ�����ҹ���û�з���ֵ���򷵻�-1��ʾ�Ҳ���
}
int main()
{
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ��ˣ�������������±꣬�Ҳ���������-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//����k
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���//Ҫ���������������
										  //���ݸ��������������׵�ַ����ָ�룬ֵΪ�Ļ��
	
	int ret =binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d", ret);
	}
	return 0;
}