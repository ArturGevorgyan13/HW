#include <stdio.h>

int main()

{
	
	printf("Please,enter three numbers!\n");

	int a=0;

	int b=0;

	int c=0;

	int min=0;

	int d=1;

	scanf("%d" "%d" "%d",&a,&b,&c);

	if(a>b){
	
		if(b>c){
		
			min=c;
		
		}

		else min=b;
	
	}

	else{
	
		if(c>a){
		
			min=a;
		
		}

		else min=c;
	
	}

	for(int i=2;i<=min;i++){
	
		if(a%i==0 && b%i==0 && c%i==0){
		
			d=i;

		}
	
	}

	printf("The greatest common denominator of theese numbers is %d\n",d);	

	return 0;

}
