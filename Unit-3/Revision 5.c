#include<stdio.h> //actual and formal parameter
void wintwar(int a);
int main(){
	int b=0;
	printf("Please enter a number: ");
	scanf("%d",&b);
	wintwar(b); //actual parameter
	


	return 0;
}
void wintwar(int a){ //formal paramter

	int z=a*a;
	printf("The result: %d",z);


}