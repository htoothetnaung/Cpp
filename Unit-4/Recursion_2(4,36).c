/* 
Recursion = function call itself

main function call another function // typical 
***terminating point htae pay ya ml *** otherwise stack overflow pyit twr ml
0!=1;
1!=1;
2!=2*1=2;
3!=3*2*1=6;
4!=4*3*2*1=24
5!=5*4*3*2*1=120;
n!=n*(n-1)
*/
#include<stdio.h>
int recur(int n);
int main(){
	int num=0;
	printf("Please enter a number: ");
	scanf("%d",&num);
	printf("%d",recur(num));
	


	return 0;
}
int recur(int n){

	if (n==0){
		return 1;
	}
	return n*recur(n-1);


}
/* Tracing 
	Please enter a number: 4
	in the recur function,
		4*recur(3);
		4*3*recur(2)
		4*3*2*recur(1)
		4*3*2*1*recur(0)
		4*3*2*1*1 (because n==0 >> return 1);
		24
		*/
		
		
		