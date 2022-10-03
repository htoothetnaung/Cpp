//important**
//modifying 5.6 program

// For revision watch video start from 15 min 
#include<stdio.h>
int main(){
	int array[100]={0};
	int size=0;
	printf("Please enter the size of the array: ");
	scanf("%d",&size);
	for (int i=0; i<size; i++){
	
		printf("Please enter the data for the array: ");
		scanf("%d",&array[i]);
	}
	for (int i=1; i<size; i++){
		if (array[0] < array[i]){
			int temp = array [0];  //di algorithm ka position twy pl chg twr ml data twy ka user entrer loke htr tae data akone shi nay ml
			array[0]=array[i];
			array[i]=temp;
					
		}
		
	}
	printf("The largest element in the array is %d",array[0]);

	return 0;
}