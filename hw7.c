#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 }, arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int temp[6] = { 0,0,0,0,0,0 };

	int* parr1 = arr1;
	int* parr2 = arr2;
	int* ptemp = temp;



	printf("arr1:");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);

	}
	printf("\n");
	printf("arr2:");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);

	}

	ptemp = parr1;
	parr1 = parr2;
	parr2 = ptemp;


	printf("\n\nafter swap\narr1:");
	
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", *parr1+i);

	}
	printf("\narr2:");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", *parr2 + i);

	}

		return 0;
}