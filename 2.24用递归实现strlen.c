#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int my_strlen(char*str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);//���ΰѵ�һ���ַ��������1+1+1+1+1+0=5
									  //��Ҫ��str++,1,��ʹ���ٸ�ֵ��
									  //������++str,2,��ı�str��ֵ
	}
	else
		return 0;
}

int main()
{
	char str[] = { "hello" };
	int a = 0;
	a = my_strlen(str);
	printf("%d", a);
}