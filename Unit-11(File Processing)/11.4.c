


#include<stdio.h>
int main(){

	FILE *fptr;
	fptr=fopen("naunggye.txt","w");
	
	if(fptr==NULL){
		printf("We cannot handle the file!");
	}
	else{
	
		fputs("We are crazy coders\n",fptr);
		fputs("We love programming\n",fptr);	
	}
	printf("All data added successfully");
	fclose(fptr);
return 0; 
}