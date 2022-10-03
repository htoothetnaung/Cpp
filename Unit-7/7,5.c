//Decimal to Binary
/*
Binary to Decimal so
1. Binary value (input)%10
2. Binary value / 10

Apaw ka ya lr tae decimal ko mha

Decimal to Hexa so
1. Hexa array = decimal %16
2. Decimal / 16


Decimal to Octal so 
1. Octal array = decimal %8
2. Decimal / 8 


Decimal to Binary 
1.Decimal%2
2.Decimal/2

*/
#include<stdio.h>
int main(){

	int decimalvalue=0;
	int bin[100]={0};
	int x=0,y=0;
	
	printf("Please enter your deciaml number: ");
	scanf("%d",&decimalvalue);
	
	while (decimalvalue!=0){
		bin[x]=decimalvalue%2; // to find remainder
		decimalvalue=decimalvalue/2;
		x++;
	}
	printf("The Binary value is: ");
	for (y=x-1; y>=0; y--){
	
		printf("%d",bin[y]);
		
	}


	return 0;
}