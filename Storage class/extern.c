/* 
extern storage class 
1.Global variable
2.We can be use by extern
3.extern (zero)
4.extern
5.syntax ( extern int var_name; )
6. declaration 
7.define   (declaration nk m tuu wo)



*/

#include <stdio.h>
int ext();
extern int a; // not allocated in memory // declare
int a; // allocated in memory // define 
int main(){
	a=15;
	printf("%d fun call %d",a,ext());





	return 0;
}
int ext(){

	a=20;
	
	return a;

}


