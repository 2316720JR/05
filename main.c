#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int number;
	
	printf("input integer:");
	scanf("%d", &number);
	
	if (number<0)
	printf("negative\n");
	
	else if (number>0)
	printf("positive\n");

	else 
	printf("zero");
	
	return 0;
}

