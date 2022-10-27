// File Reading with fgets

#include<stdio.h>

int main(){

	FILE *fptr;
	fptr=fopen("naunggye.txt","r+");
	char data_buffer[50];
	
	printf("_______Reading one line from specific file____________\n");
	fgets(data_buffer,20,fptr);
	printf("%s\n",data_buffer);
	
	
	fclose(fptr);


return 0; 
}