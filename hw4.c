#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int a;


	printf("��Please enter a number: ");
	scanf("%d", &a);


	if (a==1)
	{
		printf("it is not a prime number.");
	}
	else if (a==2)
	{
		printf("it is a prime number.");
		return 0;
	}

	for (int b=2; b<a; b++)
	{

		
		if (a%b==0)
		{
			printf("it is not a prime number.");
			break;
		}
		else
		{
			printf("it is a prime number.");
			break;
		}


	}
	//2���� a ������ �������� ���� �������� 0��(�����������) ��찡 ������ �Ҽ� �ƴմϴ� ���
	//a==1, 2�� ���꿡�� �����ϱ�





	return 0;



}