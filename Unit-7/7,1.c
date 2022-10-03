/* Binary to Decimal

4 Number System			Base		Symbol  				//used by humans?     //used by computers

1. Decimal 				10		0,1,2,3,4,5,6,7,8,9				yes 					no
2. Binary 				2       0,1                             no 						yes
3.Octal 				8 		0,1,2,3,4,5,6,7					no						no
4. Hexadecimal 			16      0,1,2,3,4,5,6,7,8,9				no						no
								A,B,C,D,E,F					

*/
// Important Notes you need to know to write this program
// ** C++ array twy yae nout sone mhr \0 shi tl **
// Decimal Formula **  decimal=(decimal*2)+number
// for testing, decimal 17 = binary 10001
#include<stdio.h>
#define HTOO 20
int Decimal(char bintodec[]);

int main(){

	char binary[HTOO]={0};
	int f_decimal=0;
	printf("Please enter binary number (1 or 0): ");
	gets(binary);
	f_decimal=Decimal(binary);
	if (f_decimal == -1){
		printf("You have entered the invalid binary number!!\n");
		printf("###You have to type only 1 or 0 for binary number###\n");
	}
	else{
		printf("The final decimal number is %d",f_decimal);
	}
	return 0;
}

int Decimal(char bintodec[]){ 

	int i=0;
	int number=0;
	int decimal=0;
	while (bintodec[i] != '\0'){
		number=bintodec[i]-48;
		
		if (number!=0 && number!=1){
			return -1;	
		}
		else{
	
			decimal=(decimal*2)+number;		
		}
		
		i++;	
	}
	return decimal;
}