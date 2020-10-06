#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer= 59;
	int n;
	int i=0;
	
	do{
		printf("input a number:");
		scanf("%i", &n);
		
		if (n>answer)
			printf("smaller\n");
		else if (n<answer)
			printf("bigger\n");
		i++;
	}while (n != answer);
	
	printf("Yeah!, trial numbers:%i\n", i);
	return 0;
}
