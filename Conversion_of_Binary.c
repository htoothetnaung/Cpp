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
int bin_to_octal(int decimalvalue);
int bin_to_hexa(int decimalvalue2);
int decimal=0;		// Global variable 
int main(){

	char binary[AUSTIN]={0};
	int f_octal=0;
	int f_decimal1=0;
	int f_hexa=0;
	printf("Please enter a binary number: ");
	gets(binary);
	f_decimal1=bin_to_decimal(binary);
	printf("The decimal value for your binary number is %d",f_decimal1);
	f_octal=bin_to_octal(f_decimal1);
	f_hexa=bin_to_hexa(f_decimal1);
	
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
	puts("");
	printf("The octal value for your entered binary number is: ");
	for (y=x-1; y>=0; y--){
		printf("%d",octal[y]); 
	}
	puts("");
}
int bin_to_hexa(int decimalvalue2){

	char hexa[AUSTIN]={0};
	int j=0;
	int k=0;
	while(decimalvalue2!=0){
		hexa[j]=decimalvalue2%16;
		decimalvalue2=decimalvalue2/16;
		j++;
	}
	printf("The hexadecimal value for your entered binary number is: ");
	for (k=j-1; k>=0; k--){
		if (hexa[k]>9){
			printf("%c",hexa[k]+55);
		}
		else{
			printf("%d",hexa[k]);
		}
	}
	puts("");
}



