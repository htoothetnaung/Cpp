/*

Username and Password Program 

1. -strcmp()   =String compare  (important)

	syntax:    strcmp(string1, string2); if differ - or + int will appear // if same, 0 will appear

	Return:    identical equal () another + int or - int (depend on ascii value)
	
	To Note:    must declare <string.h>
	
*/
#include<stdio.h>
#include<string.h>

int main(){
	char string1[]="wintwar";
	char string2[]="wintwar";
	
	int result=strcmp(string1,string2);  
// W ka ascii value po kyee tl compare tae akar mhr ashae ka kg po kyee yin -1, anout ka kg po kyee yin +1 
	printf("The result is %d", result);



	return 0;
}