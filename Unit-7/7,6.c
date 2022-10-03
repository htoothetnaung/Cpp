//Hexadecimal to Binary
/*
Hexa >> Decimal >> Binary


*/
// very very important this program exam mhr pr nain
// exam >> oral test pow so tr br ll dot br dot
// write
// project

//exam how pow works

#include<stdio.h>
#include<math.h> //pow student homework
#define WinHtut 20
int main(){
	int remainder[WinHtut];
	char hexa[WinHtut];
	int i=0;
	int x=0;
	int y=0;
	int decimal=0;
	printf("Please enter your Hexadecimal number: ");
	gets(hexa);

	for(i=0; hexa[i]!='\0';i++){
		
		
		if (hexa[i]>='0' && hexa[i]<='9') // for exam  need explanation oral test
			decimal += (hexa[i]-48)*pow(16,i);  // -48 loh m htae pl -0 loh tr yay yin decimal number mhr p why??!!1
													// because hexdecimal array ko character anay nk store loke htr loh decimal pyn htwet chin yin pyn subtract loke pay ya ml
													
		if (hexa[i]>='A' && hexa[i]<='F')
			decimal += (hexa[i]-55)*pow(16,i);
			
		if (hexa[i]>='a' && hexa[i]<='f')
			decimal += (hexa[i]-87)*pow(16,i);
		}
	
	printf("The decimal value is %d\n",decimal);

	while(decimal!=0){
	
		remainder[x]=decimal%2;
		decimal=decimal/2;
		x++;	
	}

	printf("The size of the binary array is %d\n",x); // size of the array 
	printf("The final value of the binary number is = ");
	
	for(y=x-1;y>=0;y--){
	
		printf("%d",remainder[y]);	
	}
	
	
	return 0;
}
 