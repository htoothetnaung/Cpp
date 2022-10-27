// File writing with fprintf()

#include<stdio.h>
int main(){
	
	FILE *ptr;
	ptr=fopen("naunggye.txt","a+");
	
	int account=102;
	char name[]="Htoo Thet";
	double balance=300.67;
	
	if(ptr==NULL){
	
		printf("We cannot handle the file");
			
	}
	else{
	
		fprintf(ptr, "%d %s %.2f\n", account , name, balance );	
		printf("All data added successfully !");
	}
	fclose(ptr);

return 0; 
}