#include<stdio.h>

int main(){

	int n=0;
	int fact=1;
	printf("Please enter a number to find factorial: ");
	scanf("%d",&n);
	for (int i=1; i<=n; i++){
	
		fact=fact*i;
	}
	printf("The factorial is %d",fact);

	return 0;
}