/* random number counting */

#include<stdio.h> // m htae ll ya tl standard input output m pr loh
#include<stdlib.h>

int main(){
	int One=0;
	int Two=0;
	int Three=0;
	int Four=0;
	int Five=0;
	int total=0;
	for (int i=1; i<=5000; i++){
		int number =1+(rand()%5);
		switch(number){
		case 1:
			One++;
			break;

		case 2:
			Two++;
			break;

		case 3:
			Three++;
			break;

		case 4:
			Four++;
			break;

		case 5:
			Five++;
			break;

		}
	}

	total=One+Two+Three+Four+Five;
	printf("The total counting is %d\n",total);
	printf("%s%20s\n","Number","Frequent");
	printf("1%22d\n",One);
	printf("2%22d\n",Two);
	printf("3%22d\n",Three);
	printf("4%22d\n",Four);
	printf("5%22d\n",Five);
	return 0;
}