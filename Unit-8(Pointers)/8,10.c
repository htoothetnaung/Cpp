


#include<stdio.h>
#include<conio.h>
int main(){

	double doublearr[]={1,2,3,4};
	double *ptrdouble=doublearr;
	char chararr[]={'a','b','c','d'};
	char *ptrchar=chararr;
	
	printf("The size of the double data types is %d\n",sizeof(double));
	printf("The size of the integer array is %d\n",sizeof(doublearr));	  
	printf("The size of that integer array pointer is %d\n",sizeof(ptrdouble));  // here, the size concidently the same
	puts("");
	// run the program to see the concept
	printf("The size of the character data type is %d\n",sizeof(char));
	printf("The size of the character array is %d\n",sizeof(chararr));
	printf("The size of that character array pointer is %d\n",sizeof(ptrchar));  // here the size should be 1 but it output 8 because of the rule below 
	


// Key  takeaway in C++ programming, according to the system, the size of all original pointer types are the same(4 bytes in 32 bit OS and 8 bytes in 64 bit OS)
// but if it is function pointer, the size will not remain the same

getch();
return 0; 
}