

#include<stdio.h>
#include<time.h> // time twy ko twet htote mhr moh
int main(){
	int start,stop;
	start=clock(); // to record start time 
	
	for (register int i=0; i<100000; i++){
	
			
	}
	stop=clock();
	double cps=CLOCKS_PER_SEC; //double so tr float 
	double time=(stop-start)/cps;
	printf("time = %lf",time);  // lf ka double ko pya poh 



	return 0;
}