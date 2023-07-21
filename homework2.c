#include <stdio.h>

int main()

{
	
	printf("Please,enter five characters!\n");

	char arr[5];

	for(int i=0;i<5;i++){
	
		scanf("%c",&arr[i]);
	
	}

	for(int i=0;i<5;i++){
	
		if(arr[i]>=48 && arr[i]<=57){
		
			printf("%c\n",arr[i]);
		
		}
	
	}

	return 0;

}
