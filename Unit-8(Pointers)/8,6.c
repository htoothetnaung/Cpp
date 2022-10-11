
//Arithmetic pointer
#include<stdio.h>
#include<conio.h>

int main(){
	int *p1;
	int *p2;
	int *p3;
	int a=20;
	int b=30;
	int c=0;
	
	p1=&a;
	p2=&b;
	printf("address of p1 or a is %d\n",p1);
	printf("address of p2 or b is %d\n",p2);
	
	c=*p1+*p2; // value 
	printf("*p1 + *p2 =%d\n",c);
	
	p3=p1-p2;    // address
				// memory address twy ko direct calculation twy lr loke loh m ya wo 
				// akhu lo new pointer variable 1 khu nk lr kan pay ya ml 
				
				
	// printf("p1+p2 = %d",p1+p2) di lo twy lone wa m ya pr
	
	
	printf(" p1 - p2 = %d\n",p3);  // important to note that value will not display simple p1-p2
									// the value of p1-p2 will be divided by the size of the data type it stores(in this case integer)

	p1++;   //+1 loh yay htr pay mk +4 lr + mhr because p1 stores integer data type which is 4 byte
	printf("p1++ = %d\n",p1);
	
	p2--;  // -1 m hoke wo -4 lr loke mhr 
	printf("p2-- = %d",p2);
	

getch();
return 0;
}