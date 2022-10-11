
//Swap Program

#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
int main(){

	int a=10;
	int b=20;
	printf("Before swap a = %d\n",a);
	printf("Before swap b = %d\n",b);
	swap(&a,&b);
	printf("After swap a = %d\n",a);
	printf("After swap b = %d\n",b);

getch();
return 0;
}

void swap(int *a,int *b){    // *a= address of a , *b=address of b
							// vcid can be used because this function will not return any value it will just use pointer and memory address to calculate value

	int temp=0;
	// star twy pr tr ma loh value twy nk pl loke twr ml 
	temp = *a;  // temp=10
	*a = *b;	// b=20; // a=20
	*b = temp;  // b=10  

}