// MALLOC()
// int *ptr = malloc(5*sizeof(*ptr))


#include<stdio.h>
#include<stdlib.h>

int main(){

	int *ptr;
	ptr= malloc(10*sizeof(ptr));
	
	if(ptr != NULL){
	
		printf("Memory block created at %d\n",ptr);
		*(ptr+0)=10;	// value adding in the created memory block `
		*(ptr+1)=20;	
		*(ptr+2)=30;	
		*(ptr+3)=40;	
		*(ptr+4)=50;	
	}
	else{
		printf("Cannot create ;");	
	}
	int i=0; 
	for(i=0; i<5; i++){
	
		printf("The %d value is %d\n",i,*(ptr+i));	
	}
	free(ptr);  // memory de-allocation 
	printf("Memory was de-allocated");
	

return 0;
}