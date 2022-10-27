/*
	File handling mechanism
	fopen()
	mode read,write,append
	fclose()
	
	FILE  *pointer
	pointer=fopen("file name","mode");
	
	if file can be opened successfully, it will return the pointer value
	if not, it will return the null 

*/
#include<stdio.h>
int main(){

	FILE *fptr;
	fptr=fopen("lee.txt","r"); // r= reading mode

	if(fptr==NULL){
		printf("We cannot handle the file!");
		exit(0);
	}
	else{
		printf("We can handle the file");	
	}

return 0; 
}