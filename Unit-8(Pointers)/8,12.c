
//Pointer type-casting int=> char, int=>float


#include<stdio.h>
#include<conio.h>

int main(){

	int arr[]={10,20,30,40,50,60}; 
	int *ptr1=arr;
	int *ptr2=arr + 5;
	printf("Number of elements between two pointers are : %d\n",(ptr2-ptr1));
	printf("Number of bytes between two pointers are %d\n",(char*)ptr2-(char*)ptr1);
	printf("Number of bytes between two pointers are %d\n",(float*)ptr2-(float*)ptr1);
	printf("Number of bytes between two pointers are %d\n",(double*)ptr2-(double*)ptr1);
	
	// First method 
	// 1 char >> 1 bytes = 20(num of elements between 2 pointers) / 1 = 20 ; for char
	// 1 float >> 4 bytes = 20 / 4 = 5; for float
	// 1 double >> 8 bytes = 20/8 = 2 ; for double 
	
	// Second method 
	// x*sizeof(original) / size of (new)
	// = 5 * 4 / 1 = 20



getch();
return 0; 
}