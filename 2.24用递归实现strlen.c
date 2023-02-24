#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int my_strlen(char*str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);//依次把第一个字符剥离出来1+1+1+1+1+0=5
									  //不要用str++,1,先使用再赋值。
									  //就算是++str,2,会改变str的值
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