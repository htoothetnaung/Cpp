//5.7 program (finding the largest number program)

#include<stdio.h>

int main(){

	int array[5]={0};
	
	for (int i=0; i<5; i++){
		printf("Please enter data: ");
		scanf("%d",&array[i]);
	}
	printf("The elments in the array are :\n");
	for (int i=0; i<5; i++){
		printf("%5d",array[i]);	
	}
	puts("");
	for (int i=1; i<5; i++){
		if (array[0] < array[i]){
			int temp = array[0];
			array[0]=array[i];
			array[i]=temp;
		}
		
	}
	printf("The largest element in the array is %d",array[0]);
	return 0; 
}