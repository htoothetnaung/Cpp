
/*What is array?
collection of data or item
*/



#include<stdio.h>
int main(){

	int arr_name[10]={10,11,12,13,14,15,16}; //array // array size htae ll ya tl m htae ll ya tl
				//  0   1  2  3  4  5
	//array access
	printf("%d\n",arr_name[6]);
	
	//accessing data of the array
	printf("%d\n",arr_name[0]);
	printf("%d\n",arr_name[1]);
	printf("%d\n",arr_name[2]);
	printf("%d\n",arr_name[3]);
	printf("%d\n",arr_name[4]);
	printf("%d\n",arr_name[5]);
	printf("%d\n",arr_name[6]);
	for (int i=0; i<10; i++){
	
		printf("%d\n",arr_name[i]);	
	}
	

	return 0;
}