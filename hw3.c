#include <stdio.h>

int main()
{
	char star = "*";
	char spac = " ";
	for(int a=1;a<10;a=a+2)		//5행반복
	{

		int starnum = a;
		int spacnum = (9 - a) / 2;
		
		//printf(spec를 (9-a)/2번)
			for(int abc=0;abc<spacnum ; abc++)
			{
				printf("%c", spac);
			}
		//printf(star를 a번)
			for (int abc = 0; abc < starnum; abc++)
			{
				printf("%c", star);
			}
		//printf(spec를(9 - a) / 2번)
			for (int abc = 0; abc < spacnum; abc++)
			{
				printf("%c", spac);
			}
		//printf(엔터)
			printf("\n");

				
	}
	return 0;
}