

#include<stdio.h>
#define MGMG 5 // MGMG is symbolic constant declaration

int main(){

	int array[MGMG]; //array size declaration 
	for (int j=0; j<MGMG; j++){ 
	
		array[j]=2+2*j;  //array[]={2,4,6,8,10}
								//  0  1 2 3 4   index
	}
	printf("%s%10s\n","Element or Index","Value");
	for (int i=0; i<MGMG; ++i){
	
		printf("%d%23d\n",i,array[i]);   
	}

	//array[5]={2,4,6,8,10}
	//tracing first for loop
	//array[5]={2} location or index 0
	//array[5]={2,4} location or index 1
	//array[5]={2,4,6} location or index 2

	return 0;
}