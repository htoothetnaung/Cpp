//pointer lesson 2

#include<stdio.h>
#include<conio.h>
int main(){

	int *pA;
	int var=10;
	
	printf("The address of var %d\n",&var);  // address of var
	printf("The value of var %d\n",var);     //10
	
	pA=&var;  // storing Address          //pA ka var address ko lr htote lyk pee ma loh var nk sine tae value twy ka pA htel akone yout twr ml
	printf("Address of pointer pA %d\n",pA);    // address of var
	printf("Value of pointer pA: %d\n",*pA);    //10
	
	var=20;
	printf("Address of pA %d\n",pA);		 // address of var
	printf("Value of pointer pA: %d\n",*pA); //20

	*pA=30;		//Storing Value
	printf("The address of var %d\n",&var);			 // address of var
	printf("The value of var %d\n",var);             //30
	
	// Key takeaway variable value twy name twy bl lout chg chg pA so tae kg ka var so yae address ko htote htr top 1khu chg yin akone chg ml value twy ka top
getch();
return 0;
}