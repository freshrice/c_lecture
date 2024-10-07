#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int a;


	printf("“Please enter a number: ");
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
	//2부터 a 전까지 나눠보기 만약 나머지가 0인(나누어떨어지는) 경우가 나오면 소수 아닙니다 출력
	//a==1, 2는 연산에서 제외하기





	return 0;



}