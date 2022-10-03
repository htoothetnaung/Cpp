/*
Passing to a function 
Purpose of the program (Finding the average age) // average formula = total / count 
array declare-size-data  (Steps in Array)
*/

#include<stdio.h>
#define AGE 5
int main(){
	float total=0.0;
	float average=0.0;
	float age[AGE]={0.0}; // 0.0 loh htr kae tint 
	for (int i=0; i<AGE; i++){
	
		printf("Please enter your age: ");
		scanf("%f",&age[i]);
		total=total+age[i];
	}
	average=total/AGE;
	printf("The average age of the array is %f",average);

	return 0;
}