#include<stdio.h> //scope rule(local and global variable) 
int wint=100;
int war=200;
void htn();

int main(){
	int wint=10;
	printf("The local variable overwrite global variable example %d\n",wint);
	printf("The global variable taking place in main function %d\n",war);
	htn();




	return 0; 
}
void htn(){

	printf("The global variable take place in defined function %d\n",war);
}