// notes are in C++ notes file(note pad) 
/*
C++ Notes(national cybercity)

Recursion
Function ta khu ka nay ak function ko pyn call tae hrr ko recursion loh call tl 
void fun_recursive;
int main(){

	fun_recursive();

}
void fun_recursive(){

	fun_recursive();


}

recursion algroithms are commonly used in solving factorial problems,tower hynoid,
5!=5*4*3*2*1=120
0!=0
1!=1
n!=?
n!=n*(n-1)

*/

#include<stdio.h>
int main(){

	int number=0;
	printf("Please enter a number: ");
	scanf("%d",&number); 
	printf("%d",factorial(number));

	return 0;
}
int factorial(int n){

	if (n==0 || n==1){
	
		return 1;	
	}
	return n*factorial(n-1);
}
		

 