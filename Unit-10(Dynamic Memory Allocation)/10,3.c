// callo() continguous allocation 
//creating multiple memory block 

// int *ptr=calloc(n,sizeof(int)); // n= number of blocks

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int i=0;
	int sum=0;
	int *ptr;
	
	ptr=calloc(5, sizeof(int));
	printf("Created memory of each block size %d\n",sizeof(ptr));
	
	if(ptr==NULL){
		printf("Something wrong with memory allocation!!");
	}
	else{
	
		for(i=0; i<6; i++){
			*(ptr+i)=i;      // this might be confusing line 25 and line 26
			sum+= *(ptr+i);
			printf(" %d : value is %d\n",i,sum);		
		}	
	}
	printf("The sum of all values at each block = %d\n",sum);
	free(ptr);   //de-allocation
	printf("Memory was de-allocated");




getch();
return 0;
}