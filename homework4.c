#include <stdio.h>

int main()

{

	printf("Please,enter the size of square's side!\n");

	int size=0;

	scanf("%d",&size);

	for(int i=0;i<size;i++){
	
		printf("* ");
	
	}
	
	for(int k=0;k<size-2;k++){

		printf("\n*");

		for(int i=0;i<2*size-3;i++){
	
			printf(" ");

		}

		printf("*");

	}	

	printf("\n");

	for(int i=0;i<size;i++){
	
		printf("* ");
	
	}

	printf("\n");

	return 0;

}
