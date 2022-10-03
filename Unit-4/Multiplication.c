#include<stdio.h>
int main(){
	int a=0;
	int number=0;
	printf("Please enter a number");
	scanf("%d",&number);
	for (int i=number; i>=1; i--){
	
		a=i*(i-1);
		
	}
	printf("The result is %d",a);



	return 0;
}