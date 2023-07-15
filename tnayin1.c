#include <stdio.h>

int main()

{

	printf("Please,enter a year!\n");

	int year=0;

	scanf("%d",&year);

	if(year%4==0){
	
	
		printf("Yes,mentioned year is leap!\n");
	}

	else printf("No,mentioned year isn't leap!\n");

	return 0;

}
