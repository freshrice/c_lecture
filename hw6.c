#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int finum[5] = { 0, 0, 0, 0, 0 };
	int odd[5] = { 0, 0, 0, 0, 0 };
	int even[5]= { 0, 0, 0, 0, 0 };
	
	printf("please input five integers:");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &finum[i]);
	}


	for (int i = 0; i < 5; i++)
	{
		if (finum[i] % 2 == 0)
		{
			even[i] = finum[i];
		}
		else
		{
			odd[i] = finum[i];
		}
	}

	printf("odd numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (odd[i] != 0) 
			printf("%d ", odd[i]);
	}
	printf("\n");

	printf("even numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (even[i] != 0) 
			printf("%d ", even[i]);
	}
	return 0;
}

