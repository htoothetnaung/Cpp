/* 
// File Writing 
fputc(char, file pointer)
fputs(str, file pointer)

fprintf(filePointer, format, variable lists)


*/

#include<stdio.h>
int main(){
	char str[]="We are Programmers";
	FILE *fptr;
	fptr=fopen("naunggye.txt","w");
	
	if(fptr==NULL){
		printf("We cannot handle the file!!");
	}
	else{
		int i=0;
		for (i=0; str[i]!='\n'; i++){
			fputc(str[i],fptr);		
		}
	}

	printf("All data are stored complete");


return 0;
}