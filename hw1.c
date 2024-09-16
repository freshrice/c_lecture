#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 

int main()
{

	int a, b, c;
	printf("input two integers: ");
	scanf("%d %d", &a, &b);

	
	c = a & b;
	printf("%d&%d=%d\n", a, b, c);
	c = a | b;
	printf("%d|%d=%d\n", a, b, c);
	c = a ^ b;
	printf("%d^%d=%d\n", a, b, c);
	return 0;
	
}
