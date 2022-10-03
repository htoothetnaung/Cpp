//Program to check vowels
// vowel check ( a e i o u) (A E I O U)

// if structure tone twr tr ly kyi** new pone san 
#include<stdio.h>

int main(){

	char word; 
	printf("Please enter character: ");
	scanf("%c",&word);
	
	int smallV,bigV;
	smallV=(word =='a' || word =='e' || word =='i' || word =='o' || word =='u'); //aeiou 
	// smallV htel ka condition ta khu" tr mhan twr yin 1
	
	bigV=(word =='A' || word =='E' || word =='I' || word =='O' || word =='U'); //AEIOU
	// bigV htel ka condition ta khu" tr mhan twr yin 1
	printf("Smallvowel is %d = \n Bigvowel is %d = \n",smallV,bigV);
	if (smallV||bigV){  // smallV yw bigV yw 0 pyit mha di if structure ka aloke m loke mhr
	
		printf("%c This is vowel! ",word);	
	}
	else{
		printf("%c This is not a vowel!!"); 
	}
	
	
	return 0;
}