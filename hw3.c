#include <stdio.h>

int main()
{
	char star = "*";
	char spac = " ";
	for(int a=1;a<10;a=a+2)		//5��ݺ�
	{

		int starnum = a;
		int spacnum = (9 - a) / 2;
		
		//printf(spec�� (9-a)/2��)
			for(int abc=0;abc<spacnum ; abc++)
			{
				printf("%c", spac);
			}
		//printf(star�� a��)
			for (int abc = 0; abc < starnum; abc++)
			{
				printf("%c", star);
			}
		//printf(spec��(9 - a) / 2��)
			for (int abc = 0; abc < spacnum; abc++)
			{
				printf("%c", spac);
			}
		//printf(����)
			printf("\n");

				
	}
	return 0;
}