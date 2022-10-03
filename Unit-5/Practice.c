//5.4 (finding frequency of random number from 1 to 10) 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define WINTWAR 1000
#define HTOO 11
int main(){

	int data[WINTWAR]={0};
	int frequency[HTOO]={0};
	int total=0;
	time_t tm;
	srand(time(&tm));
	for (int i=0; i<WINTWAR; i++){
	
		data[i]=(1+(rand()%10));
	}
	for (int i=0; i<WINTWAR; i++){
		printf("%5d",data[i]);
		if (i%10 == 0){
			puts("");		
		}
	}
	puts("");
	printf("The frequency of number 1 to 10 :\n");
	for (int i=0; i<WINTWAR; i++){
		frequency[data[i]]++;	// ** array[array[i]] ***
		
	}
	
	for (int i=1; i<HTOO; i++){
		printf("%s%20s\n","Number","Frequency");
		printf("%3d%18d\n",i,frequency[i]);
		total=total+frequency[i];
	}
	printf("The total number of frequency %d",total);
	
	return 0;
}







