#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



typedef struct city {
	char Name[20];
	char Country[20];
	char Population[20];

}City;

int main() {
	printf("input three cities: \n");
	City sss[3];
	for (int i = 0; i < 3; i++)
	{
		printf("Name>");
		scanf("%s", &sss[i].Name);
		printf("Country>");
		scanf("%s", &sss[i].Country);
		printf("Population>");
		scanf("%s", &sss[i].Population);

	}
	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%s in %s with a population of %s people\n", sss[i].Name, sss[i].Country, sss[i].Population);
	}

}