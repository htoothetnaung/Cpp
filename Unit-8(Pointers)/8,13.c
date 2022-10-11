// Little Endian and  Big Endian 

/*
Little and Big Endian Mystery 
What are these?
Little and Big endian are two ways of storing multibyte data-types(int, float, etc). In little endian machines,
** last byte of binary representation ** of the multibyte data-type is stored  first. On the other hand, 
in big endian machines, **first byte of binary representation** of multibyte data-type is stored first. 



*/
#include<stdio.h>
#include<conio.h>
int main(){

	int a=0;
	char *x;
	x=(char*)&a;
	// 4 bit so x[4] hti pl ya ml
	x[0]=1;
	x[1]=2;
	x[2]=3;
	x[3]=4;
	x[4]=5;
	x[5]=6;
	x[6]=2;
	// To check if the program is correct or not, u need to use scientific calculator
	printf("The value is %d\n",a);

getch();
return 0;
}