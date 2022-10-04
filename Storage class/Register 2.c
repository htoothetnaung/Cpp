#include<stdio.h>
int main(){
	register int x=10;		//register duration=1.62s 
	register int y=10;
	register int z=x+y;
	printf("%d",z);





	return 0;
}