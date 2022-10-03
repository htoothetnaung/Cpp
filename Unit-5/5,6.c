// algorithm intro important 
// Finding the largest element in the array 

// note that 
#include<stdio.h>
int main(){
	int array[100]={0};
	int size=0;
	printf("Please enter the size of the array: ");
	scanf("%d",&size);
	for (int i=0; i<size; i++){
	
		printf("Please enter the data for the array: "); //{10,20,30,40,50}
		scanf("%d",&array[i]);								//(50,20,30,40,50) if we use array[0]=array[i] not good 
	}
	for (int i=1; i<size; i++){
		if (array[0]<array[i]){
			array[0]=array[i];		// this method change the data structure of the array so it is not good 
									//more efficient method in 5,7 
		}	
	}
	
	printf("The largest element is %d",array[0]);
	return 0;
}