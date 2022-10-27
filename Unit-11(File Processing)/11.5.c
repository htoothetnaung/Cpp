// Reading data from a file
// File reading with fgetc
/*
fgetc(FilePointer)				EOF=end of file 
fgets(buffer,number,filePointer) 
// buffer = data store loke mae location 
// number = numberofdata to read
fscanf(filePointer, Format, Address of Var to store)


*/

#include<stdio.h>


int main(){

	FILE *fptr;
	fptr=fopen("naunggye.txt","r++");
	
	char c;
	printf("________Reading all data from specific file_________\n");
	if (fptr==NULL){
		printf("We cannot read the file");	
	}
	else{
		while((c=fgetc(fptr)) != EOF){
			printf("%c",c);		
		}
	}	
	printf("All Data are read successfully");
return 0; 
}