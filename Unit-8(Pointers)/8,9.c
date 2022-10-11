// Function Return  Pointer 
// Pointer Function 

#include<stdio.h>
#include<conio.h>
int* check(int *x,int *y);
int main(){

	int a=10;
	int b=20; 
	printf("The address of variable a or x is %d\n",&a);
	printf("The address of variable b or y is %d\n",&b);
	puts("");
	int *p;
	p = check(&a,&b); // this line is necessary // no need * because "check" function will return address not value 
	printf("%d is larger!!",*p);
getch();
return 0; 
}

int* check(int *x,int *y){  // * ma mae nk 

	if (*x>*y){
		printf("x address is %d\n",x);
		return x;
	}
	else{
		printf("y address is %d\n",y);
		return y;
	}




}