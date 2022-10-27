//feof
// FEOF = end of file identifier 




#include<stdio.h>

int main(){

	FILE *fptr;
	int account=0;
	int age=0;
	char name[20];
	double balance=0.0; 
	
	if((fptr=fopen("cilents.txt","w"))==NULL){
		printf("File could not be opened");	
	}
	else{
		puts("Enter account, age, name, balance");
		puts("Enter EOF key to exit input");
		printf(">:");
		scanf("%d%d%s%lf",&account,&age,name,&balance);
		
		while(!feof(stdin)){  // stdin = standard input(user input mae hrr twy akone) window  crtl+z / mac ctrl + d >> feof key
			fprintf(fptr, "%d	%d	%s	%.2f\n",account,age,name,balance);
			printf(">:");
			scanf("%d%d%s%lf",&account,&age,name,&balance);	
		}
	}


fclose(fptr);
return 0; 
}