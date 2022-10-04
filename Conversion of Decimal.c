#include<stdio.h>
#define WINTWAR 20

int decimal_to_binary(int decimalvalue);
int decToOct(int decimalvalue2);
int dec_to_hexa(int decimalvalue3);
int main(){
	int decimal=0;
	int f_decimal=0;
	int f_octal=0;
	int f_hexadecimal=0;
	printf("Please enter a decimal number: ");
	scanf("%d",&decimal);
	f_decimal=decimal_to_binary(decimal);
	f_octal=decToOct(decimal);
	f_hexadecimal=dec_to_hexa(decimal);
	return 0;
}


int decimal_to_binary(int decimalvalue){

	int x=0;
	int y=0;
	int binary[WINTWAR];
	while (decimalvalue!=0){
		binary[x]=decimalvalue%2;
		decimalvalue=decimalvalue/2;
		x++;
	}
	printf("The binary value is: ");
	for(y=x-1; y>=0; y--){
		printf("%d",binary[y]);
	}
}
	
int decToOct(int decimalvalue2){
	
	int e=0;
	int z=0;
	int octal[WINTWAR]={0};
	while (decimalvalue2!=0){
		octal[e]=decimalvalue2%8;
		decimalvalue2=decimalvalue2/8;
		e++;
	}
	puts("");
	printf("The octal value is: ");
	for(z=e-1; z>=0; z--){
		printf("%d",octal[z]);	
	}

}

int dec_to_hexa(int decimalvalue3){
	
	int h=0;
	int w=0;
	int hexa[WINTWAR]={0};
	while (decimalvalue3!=0){
		hexa[h]=decimalvalue3%16;
		decimalvalue3=decimalvalue3/16;
		h++;	
	}
	puts("");
	printf("The hexadecimal value is; ");
	for(w=h-1; w>=0; w--){
		if (hexa[w]>9){
			printf("%c",hexa[w]+55);		
		}
		else{
			printf("%d",hexa[w]);
		}
	}
}


//Checked 