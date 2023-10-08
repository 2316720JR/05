#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int answer = 59;
	int trial = 0;
	int num;
	
	do
	{
		printf("Guess a number :");
		scanf("%d", &num);
		
		if(num < 59)
			printf("Low!\n");
			
		else if(num > 59)
			printf("High!\n");
			
		trial++;
	}
	
	while(num != 59);
	
	printf("congratulations! trials: %d\n", trial);
	
	return 0;
}
