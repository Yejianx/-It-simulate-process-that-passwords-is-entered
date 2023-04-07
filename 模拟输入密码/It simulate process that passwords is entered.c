#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr[] = "123456";
	char arr1[10] = {0};
	int i = 0;

	printf("请输入密码/please,enter password:\n");

	for (i = 0; i < 3; i++)
	{
		
		scanf("%s",arr1);

		system("cls");

		if (strcmp(arr, arr1) == 0)
		{
			printf("输入正确/password is correct.");
			break;
		}
		else
		{
			printf("输入错误,请重新输入/wrong password.please,input again :\n");
		}
	}

	if (i == 3)
	{
		system("cls");
		printf("已超过三次/you have entered more than three:\n");
	}
	

	}

	
