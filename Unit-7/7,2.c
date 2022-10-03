/*
Binary to Hexadecimal
Binary >> Decimal >> Hexadecimal 


*/

#include<stdio.h>
int main(){
	int decimalvalue=0;
	int binaryvalue=0;
	int remainder=0;
	int i=1;
	int x=0;
	int y=0;
	int hexa[100]={0};
	printf("Please enter the binary number (1-0): ");
	scanf("%d",&binaryvalue);
	
	while(binaryvalue!=0){
	
		remainder=binaryvalue%10;
		decimalvalue=decimalvalue+remainder*i;
		i=i*2;
		binaryvalue=binaryvalue/10;
	}
	printf("The decimal value is %d\n",decimalvalue);

	while (decimalvalue!=0){
		hexa[x]=decimalvalue%16;  // to find remainder
		decimalvalue=decimalvalue/16;
		x++;
	}
	printf("The hexadecimal value is :");
	for (y=x-1; y>=0; y--){
		if (hexa[y]>9){
			printf("%c",hexa[y]+55);   // A B C D E F nk pya chin loh // From Ascii Table 10+55= Character A ya tl
		}	
		else{
			printf("%d",hexa[y]);		
		}
	}

	return 0;
}