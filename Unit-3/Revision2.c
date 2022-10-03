#include<stdio.h>
#include<stdlib.h> //srand program and srand fix game
#include<time.h>

int main(){
	int humannum=0;
	int sysnum=0;
	
	do{
		time_t tm;
		srand(time(&tm));
		sysnum=(1+(rand()%10));
		printf("Please enter number 1 to 10: ");
		scanf("%d",&humannum);
		
		printf("SysNum = %d           HumanNum=%d\n",sysnum,humannum);
	if (sysnum>humannum){
		printf("System Number is greater than Human Number!\n");
	}
	else if (sysnum<humannum){
		printf("system Number is less than Human Number!\n");	
	}

			
	
}
	while(sysnum!=humannum);
		
	printf("###They are the same now###");

	return 0;
}