#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	printf("a number:\n");
	scanf(" %i",&i);
	
	if (i > 0)
		printf("���\n");
	
	else if (i < 0) 
		printf("����\n");
	else
		printf("zero\n");
	
	return 0;
}
