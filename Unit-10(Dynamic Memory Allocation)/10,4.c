// reallo() re allocation 

// ptr = (char *)realloc(ptr,20) // 20 ka how many  20=5* sizeof(int)

// strcpy and strcat 
// cpy ka string sentence ko di tine htae lyk mhr (copy taball myoe)
// cat ka string twy ko + lyk mhr

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	char *ptr;
	ptr= (char*)malloc(10);  // sizeof(char) ka 1 pl moh m yay top tr
	strcpy(ptr,"re-allocation");
	
	printf(" %s , address at : %d\n",ptr,ptr);
	
	ptr=(char*)realloc(ptr,50);  // same here di mhr ka size of char ka 1 so top 50= 50 *1 ma loh sizeof(char) ko m yay tr pr 
									// Program 10.5 kya yay tr twae pr late ml
	strcat(ptr,"htn");
	
	printf("data is : %s , address = %d\n",ptr,ptr);
	
	free(ptr);
	printf("Memory was de-allocated");




getch();
return 0; 
}