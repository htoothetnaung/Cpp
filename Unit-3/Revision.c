#include <stdio.h>  // rand() random function and rand() counting 
#include <stdlib.h>
int main(){
	
	for (int i=1; i<=25; i++){
		printf("%10d",1+(rand()%8));
		if (i%5==0){
			puts("");		
		}
	}
	
	int one=0;
	int two=0;
	int three=0;
	int four=0;
	int five=0;
	int number=0;
	int total=0;
	for (int i=1; i<=5000; i++){
		int number=(1+(rand()%5));
		switch(number){
			
		case 1:
		one++;
		break;
		
		case 2:
		two++;
		break;
		
		case 3:
		three++;
		break;
		
		case 4:
		four++;
		break;
		
		case 5:
		five++;
		break;
		
		}
		
	}
	printf("%s%20s\n","Number","Frequency");
	printf("%d%23d\n",1,one);
	printf("%d%23d\n",2,two);
	printf("%d%23d\n",3,three);
	printf("%d%23d\n",4,four);
	printf("%d%23d\n",5,five);
	total=one+two+three+four+five;
	printf("The total counting is %d",total);
	

	return 0;

}
	