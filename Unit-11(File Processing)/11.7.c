// File reading fscanf

#include<stdio.h>

int main(){

	FILE *fptr;
	fptr=fopen("naunggye.txt","r++");
	
	char data2[20],data4[20];
	int code=0;
	float balance=0.0; 
	
	printf("________Reading data phrase by phrase from specific file____________\n");
	fscanf(fptr, "%d  %s  %f  %s",&code,data2,&balance,data4);
	
	printf("Reading data from file 1 %d\n",code);
	printf("Reading data from file 2 %s\n",data2);
	printf("Reading data from file 1 %.2f\n",balance);
	printf("Reading data from file 1 %s\n",data4);
	fclose(fptr);

return 0;
}