//Writing 5.5 program with defined function


#include<stdio.h>
#define AGE 5
float average(float array[]);
int main(){
	float age[AGE]={0.0};
	for (int i=0; i<AGE; i++){
		printf("Please enter your age: ");
		scanf("%f",&age[i]);
	}
	float avr_age=average(age);
	printf("The average age of the array is %f",avr_age);
	
	
	return 0;
}
float average(float array[]){

	float total=0;
	float average=0;
	for (int j=0; j<AGE; j++){
		total=total+array[j];
	}
	average=total/AGE;
	
	return average;

}