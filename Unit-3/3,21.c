/*Standard library Function lesson
rand() random number generator
*/

#include<stdio.h>
#include<stdlib.h> // standard library

int main(){

	for(int i=1; i<=20; i++){
		printf("%5d",1+(rand()%8));  //%5d %10d, 5 and 10 are nothing but space between words

		if (i%5==0){  // 5 lone ta line si pya chin loh
			puts("");  // line 1 kyaung sin chin loh 5
		}
	}




	return 0;
}