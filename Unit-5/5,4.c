//important
//Array frequency Problem (Counting Frequency of a array using srand());
/*
To understand this problem, try running the problem

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define WINTWAR 100
#define HTN 11

int main(){
	int data[WINTWAR];
	int frequency[HTN]={0}; //0 loh tr m htr kae yin plps number twy htwet lr mhr
	time_t tm;
	srand(time(&tm));
	for (int i=0; i<WINTWAR; i++){
		data[i]=1+(rand()%10);
		
	}
	for (int z=0; z<WINTWAR; z++){
		printf("%5d",data[z]);
	if (z%10==0){  // not necessary!!! just to beautify 
		puts("");	
		}
	
	}
	puts("");
	for (int k=0; k<WINTWAR; k++){
		frequency[data[k]]++;	//4/8/4/4/3/10/2
		// frequency[2]     //frequency[11]=[0,0,1,1,3,0,0,0,1,0,1] Example format of //4/8/4/4/3/10/2
			
	}
	printf("The FREQUENCY of number 1 to 10 is: \n ");
	for (int j=1; j<HTN; j++){
	
		printf("Number   Frequency\n%3d%10d\n",j,frequency[j]);	
	}

	//not necessary just to check
	int total=0;
	for (int x=1; x<HTN; x++){
	
		total=total+frequency[x];	
	}
	printf("The total times of frequency is %d",total);
	return 0;
}