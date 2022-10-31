#include<iostream>
#include "cmath"
using namespace std; 

int jumpsearch(int nums[],int arrsize, int key)
{
	int start=0; // for linear search 
	int jumpsize = sqrt(arrsize);   // how we should jump in the array 
	
	while(nums[jumpsize]<=key && jumpsize < arrsize )
	{
		start = jumpsize;   // linear search 
		jumpsize += sqrt(arrsize);
		if(jumpsize > arrsize-1)  // index number nk check 
		{
			jumpsize=arrsize; 
		}
	}
	for(int i=start; i<jumpsize; i++)
	{
		if(nums[i]==key)
		{
			return i;
		}
	}
	
	return -1;
}
int main()
{
	int key=0;
	int indexfound=0;
	int nums[]={2,5,10,11,15,16,17,19,25,30,40};
	cout << "Please enter a number to find: ";
	cin >> key;
	
	int arrsize= sizeof(nums) / sizeof (nums[0]);
	indexfound = jumpsearch(nums,arrsize,key);
	
	if(indexfound==-1)
	{
		cout << "Number not found!";
	}
	else{
		cout << "Number is found at index: " << indexfound << endl;	
	}
	
	
	return 0;
}