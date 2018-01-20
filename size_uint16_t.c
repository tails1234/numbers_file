#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
	if (argc != 2)
	{

		puts("Insufficient Arguments or too many arguments, e.g. : size.exe file.txt");
		return(0);
	}
	FILE *fp;
	fp = fopen(argv[1], "ab+");
	
	uint16_t n = 0;
	
	char n1[1000000] ;
	int i;
	
	char r[1] = {'\n'};
	for(i = 0; i <= ((pow(2, (8 * (sizeof(uint16_t)))))-1) ; i++)
	{
		itoa(n,n1,10);
		fwrite(n1, sizeof(char), strlen(n1), fp);
		//printf("%d\n",n );
		fwrite(r, sizeof(char), 1, fp);
		n++;

	}



	fclose(fp);

	return (0);
}


