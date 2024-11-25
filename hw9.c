#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() 
{
	int ch;
	printf("input>");
	ch = getchar();
	printf("output>");
	if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
	}
	putchar(ch);
	while (1) 
	{
		ch = getchar();
		if (ch ==EOF)
		{
			break;
		}
		if (ch >= 'A' && ch <= 'Z') 
		{ 
			ch = ch + 32;
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 32;
		}
		putchar(ch);
	}
	return 0;
}
