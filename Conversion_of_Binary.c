/* 
1.Binary to Decimal formula
	a. Find number first from binary array
	b. decimal=(decimal*2)+number

Alternative formula
	decimal += (character of binary array-48)*pow(2,array index(i));

2. Binary to Hexadecimal Formula




*/

#include<stdio.h>
#include<math.h>
#define AUSTIN 100

int bin_to_decimal(char Decimal[]);    // Binary to decimal function 
int bin_to_octal(int a);
static int decimal=0;		// Global variable 
static int f_decimal1=0;
int main(){

	char binary[AUSTIN]={0};
	int f_octal=0;
	
	printf("Please enter a binary number: ");
	gets(binary);
	f_decimal1=bin_to_decimal(binary);
	printf("The decimal value for your binary number is %d",f_decimal1);
	puts("");
	f_octal=bin_to_octal(f_decimal1);
	printf("The octal value for your binary number is %d",f_octal);
	
	return 0; 
}
int bin_to_decimal(char Decimal[]){

	int i=0;
	while (Decimal[i]!='\0'){
		decimal	+= (Decimal[i]-48)*pow(2,i);
		i++;
	}
	return decimal;

}
int bin_to_octal(int decimalvalue){

	int octal[AUSTIN]={0};
	int x=0;
	int y=0;
	while (decimalvalue!=0){
		octal[x]=decimalvalue%8;  // to find remainder
		decimalvalue=decimalvalue/8;
		x++;
	}
	for (y=x-1; y>=0; y--){
		printf("%d",octal[y]); 
	}

}




