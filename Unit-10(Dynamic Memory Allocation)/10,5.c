//Dynamic array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int *dyn_arr=NULL;
	int element=2;
	int i=0;
	dyn_arr=calloc(element,sizeof(int));
	for(i=0; i<element; i++){
	
		dyn_arr[i]=i;	
	}
	/*for(i=0; i<element; i++){
	
		printf(" Dynamic Array [%d] = %d\n",i,dyn_arr[i]);	
	} */
	element=6;
	dyn_arr=realloc(dyn_arr,element*sizeof(int));
	printf("_______Dynamic Array________\n");
	for(i=2; i<element; i++){
		dyn_arr[i]=i;	
	}
	for(i=0; i<element; i++){
		printf("Dynamic Array[%d] = %d\n",i,dyn_arr[i]);
	}
	free(dyn_arr);    // di hrr m pr ll run loh ya pay mk memory waste pyit mhr soe loz free loke pay kae tr pr
	printf("Memory de-allocated");
	
getch();
return 0; 
}