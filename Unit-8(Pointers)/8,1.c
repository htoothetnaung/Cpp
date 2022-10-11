// pointer 1
// Two types of operator >> uniary and binary 
//  & (ampersand)  uniary operator
//	* (sterisk)    uniary operator

//  binary operator operand 2 khu shi mha aloke loke
// 	eg. a/b (two operands)
// uniary operaotr so yin 1 operand ta khu htel nk aloke loke tl 
// eg. &var
// address of another variable

#include<stdio.h>
#include<conio.h>

int main(){

	int a=10;
	int b=20;
	int *p;   // pointer p declare 
	p=&a;
	int *sp;   // second pointer declare 
	sp=&b;
	printf("The address of the first variable is %d",p);  // if include *p, the output will show the value not the address
	puts("");													
	printf("The address of the second variable is %d",*sp);  // if does not include *, the output will show the address

getch();
return 0;
}
