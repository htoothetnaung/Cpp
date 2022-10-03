
// Binary to Octal



#include<stdio.h>
int main(){
	int decimalvalue=0;
	int binaryvalue=0;
	int remainder=0;
	int i=1;
	int x=0;
	int y=0;
	int octal[100]={0};
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
		octal[x]=decimalvalue%8;  // to find remainder
		decimalvalue=decimalvalue/8;
		x++;
	}
	printf("The octal value is :");
	
	for (y=x-1; y>=0; y--){
		printf("%d",octal[y]);
	
		
	}


	return 0; 
}