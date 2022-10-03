/*
for revison to watch video,watch from 25 minute because it is revision

Character Array// declaration and intialization array smae type 
			a. char (sizeof)
			b. char is a Primitive Data Types
						/\
					   /  \
					  /    \
	   primitive......	  	...................non-primitive 
		/\										1.Arrays(collection of data item,same type)
	   /  \										2.String ( c pro string represented by array of characters)
Boolean	   Numerical Data Types					3. Structures(collection of variables)
Type 	   			/\
	!			   /  \
boolean		  Integer  Floating-point
	   			/\			/\
			   /  \		   /  \
	  character  integer float double
	   		/      /!!\
		char	  / !! \
	   			byte!! long
				short!
					 !
	   				int	
c.arr[]="hello I am Win Htut";access("%s",arr);
d.arr[]={'W','I','N','H','T','U','T'}; //access()
          0   1   2   3   4    5   6
          OUTPUT Done
          Input Start

	   
*/
//size twy ko ti chin yin sizeof(data type) nk run kyi 
#include<stdio.h>
#define WINTWAR 100 //symbolic constant nout mhr ;,: br mha lr m htae ya wo 
int main(){
	char array[WINTWAR];
	char org[WINTWAR];
	printf("The size of the character is %d byte: \n",sizeof(char));
	printf("%d bit\n",sizeof(char)*8);
	char arr[WINTWAR]="Wint War";  // Adding string into array method 
	printf("%s\n",arr);
	
	//printf("Please enter your name: ");
	//scanf("%[^\n]",&array); // space ko twae yin terminate loke twr tl dr kyunt Htoo Thet Naung loh yite yin Htoo ko pl twr store loke tl // second method
	//printf("This is your name: %s\n",array);
	printf("Please enter your organization name: ");
	gets(org);
	printf("This is your organization name: %s\n",org);
	return 0;
}

// data  scan/input yuu tr 3 khu shi tl
/* 1. scanf("%d" or "%s") >> weakpoint space twae yin terminate pyit
	2. scanf(" %[^\n]")  >> weakpoint so confusing  but advanatge can read a line contain white space
	3. gets();  >> can read a line even containing space

*/
















