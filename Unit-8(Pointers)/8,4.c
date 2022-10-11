 // pointer and array
 
 #include<stdio.h>
 #include<conio.h>
 
 int main(){
 
 	int arr[5]={1,2,3,4,5};
 	int *p;
 	*p=arr;
 	int i=0;
 	for(i=0; i<5; i++){
	
		printf("The address of arr[%d] is %d\n",i,&arr[i]); 	
 	}
 	printf("The size of one integer is %d bytes",sizeof(int));
 
 	// Key takeaway array htel mhr shi tae element twy yae address twy m tuu kya wo but in consecutive memory address
 getch();
 return 0;
 }