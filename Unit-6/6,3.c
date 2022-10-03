/* 
Using ASCII Table
Program to check Alphabet
we have to condition

*/
// A>>65 ,Z >> 90, a >> 97, z >> 122 (From Ascii Table)
#include<stdio.h>

int main(){
	
	char word; 
	printf("Please enter character: ");
	scanf("%c",&word);
	
	// big (word >= 'A' AND word <= 'Z')  // 65 to 90
	//small (word >= 'a' AND word <='z')  // 97 to 122
	
	if ((word>='A' && word<='Z') || (word>='a' && word<='z')){
		printf(" %c It is alphabet!",word);
	}
	else{
	
		printf("%c It is not alphabet",word);	
	}


	return 0;
}11