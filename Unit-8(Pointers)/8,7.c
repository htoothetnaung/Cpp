
// Pass by Reference(Memory address)

#include<stdio.h>
#include<conio.h>
void fun(int *ptr){  // pointer nk tr m thone pl yoe yoe variable nk tr thone yin main function htel ka value pl pyn htwet lr mhr why 
						// because this it the void function and does not return any value

	*ptr=30; 
}
int main(){

 
	int y=20;
	fun(&y);    //memory address njk loke lyk loh   // value nk trr so ma ya pr
	int x=50;
	fun(&x);

	printf("y = %d\n",y);
	printf("x = %d",x);



getch();  
return 0;
}