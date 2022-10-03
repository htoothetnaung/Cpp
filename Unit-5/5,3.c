//insert data to the array using scanf function
/*
symbolic constant ko capital letter nk thone ko thone ya ml loh top m hok wo variable name nk tuu mhr soe loz trr capital letter nk tone lyk tr
symbolic constant ko tone more flexible
*/

#include<stdio.h>
#define SIZE 10  // no semicolon if do,logical error

int main(){
	int data[SIZE];
	for (int i=0; i<SIZE; i++){
	
		printf("Please enter data of index %d: ",i); //user input data
		scanf("%d",&data[i]); 
		
	}
	int total=0;
	for (int j=0; j<SIZE; j++){
		total=total+data[j];
		//printf("%d\n",data[j]);	
	}
	printf("The total value that you entered is %d",total);


	return 0;
}