// File handling modes
/*
 File handling modes
 a-append (append loke mae file m shi ll file ko create loke twr)
 r-read (read loke mae file m shi yin null pointer return)
 w-write (write loke mae file m shi ll file automatic create loke twr)
 a+ = read and append
 r+
 w+ = write and read
 ab+
 rb+ - read in binary
 wb+ - write in binary 
 
 // append meaning add new data without deleting the former datas
 // while write mode add new data and deleting the old datas
 */
#include<stdio.h>
int main(){

	FILE *fptr;
	fptr=fopen("naunggye.txt","w"); // r= reading mode

	if(fptr==NULL){
		printf("We cannot handle the file!");
	}
	else{
		printf("We can handle the file");	
	}

return 0;  
}