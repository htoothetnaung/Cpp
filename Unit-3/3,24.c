// 24 +25 (Unit-3)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	int SysNum=0;
	int humannum=0;


	do{
		time_t tm;
		srand(time(&tm));
		SysNum=(rand()%10)+1;

		printf("Please enter number 1 to 10: ");
		scanf("%d",&humannum);
		if (SysNum < humannum){
			printf("Sys: %d Human:%d\n System Number is less than Human Number\n ",SysNum,humannum);
		}
		else if(SysNum>humannum){
			printf("Sys: %d Human:%d\n Human Number is lower than System Number\n ",humannum,SysNum);
		}

		}

		while(SysNum != humannum);

		printf("***They are the same value***");


	return 0;
}
