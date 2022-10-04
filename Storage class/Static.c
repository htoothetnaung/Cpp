/*
static int a (zero)
int a (any garbage value)

static can hold value until the end of program***
normal variable can hold value in the codeblock

static int mgmg;


*/
#include<stdio.h>
void counter();
int main(){
	
	for(int i=0; i<5; i++){
	
		counter();	

	}




	return 0;
}
void counter(){

	static int count=0; // static hold value until the end of the program(in this case until the end of for loop)
	count++; 
	printf("Counting %d\n",count);

}