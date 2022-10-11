// Di program important

#include<stdio.h>
#include<conio.h>

int main(){

	int arr[5]={1,2,3,4,5};
	int *p=arr; // array ko so di lo kyay nyar loh ya tl same with *p = &arr[0]
	int *ptwo=&arr[0];
	

	printf("The address of the array is %d\n",p);
	printf("The address of the arr[0] is %d\n",ptwo);
	
	// Key Takeaway
	// *** address of array = address of array[0]  ***
	// Key takeaway is if we use pointer in array, it will show the address of the first element in that array 
getch();
return 0;
}