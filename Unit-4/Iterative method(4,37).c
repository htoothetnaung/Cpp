 // Finding Factorial Number using Iterative method 
#include<stdio.h>

int main(){
	int b=0;
	int fact=1; // because factorial of 1 and 0 is 1 
	int n=0;
	printf("Please enter a number: "); //4
	scanf("%d",&n);
	
	for (int i=1; i<=n; i++){
	
		fact=fact*i;  

	}
	
	
	printf("Factorial is %d",fact);


	return 0;
}
