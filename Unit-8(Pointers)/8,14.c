// Array treated as pointer

// In C, array parameters are always treated as pointers. So following two statements have the same meaning. 
// void fun(int arr[])
// void fun(int *arr)

// array pointer always point index 0 
// use this formula >> array size = size of array / size array index 0

#include<stdio.h>
#include<conio.h>
int main(){

	int i=0;
	int arr[4]={10,20,30,40};
	fun(arr);
	size_t sz = sizeof(arr) / sizeof(arr[0]);

getch();
return 0;
}

void fun(int arr[]){
	int i=0;
	int arr_size=0;
	printf("The array size is %d\n",sizeof(arr));
	printf("The size of index 0 of array is %d\n",sizeof(arr[0]));
	arr_size = sizeof(arr) / sizeof(arr[0]);
	printf("The size of array is %d\n",arr_size);
	
	for (i=0; i<arr_size; i++){
	
		printf("The value is %d\n",arr[i]);	
	}
}