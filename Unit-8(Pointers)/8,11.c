// Arithmetic Memory Address
// To understand this problem, you need to understand how arithmetic pointer works (see in unit 8,6);

/*
Use this formula,  // same with pointer arithmetic concept
	pointer address = p + x*sizeof(*p);
					Example 
					= 64220000(memory address) + 3(arithmetic value) * 4 ;
					= 6422000 + 12
					=6422012 (the memory address of array index 3) 
*/

#include<stdio.h>
#include<conio.h>

int main(){

	int arr[5]={10,30,20,50,60};
	int *ptr1=&arr[0]; // same with   *ptr=arr;
	int *ptr2=ptr1+3;
	
	printf("The memory address of index 0 is %d\n",&arr[0]);
	printf("The memory address of index 1 is %d\n",&arr[1]);
	printf("The memory address of index 2 is %d\n",&arr[2]);
	printf("The memory address of index 3 is %d\n",&arr[3]);
	printf("The memory address of index 4 is %d\n",&arr[4]);
	puts("");
	
	printf("the value of ptr2 = %d\n",*ptr2);  // output 50

	int *ptr3;
	ptr3=ptr2-ptr1;  // 6422012-6422000 = 12 / pointersize(4) = 3 
	printf("ptr2 - ptr1 = %d\n",ptr3);
	// Testing for size of pointer  no need to write not important 
	int arr2[3]={1,2,3};
	int *ptrtest=arr;
	printf("%d",sizeof(ptrtest));


getch();
return 0;   // logic error check poh

}