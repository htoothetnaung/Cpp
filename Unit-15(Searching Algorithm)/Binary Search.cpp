// binary search yin array ka sorted pyit htr ya ml (big to small or small to big)
// binary search is dividing sorted array into equal 2 portions and check middle , 
//if the answer is low than mid, find the left side
// if the answer is high than mid, find the right side
// iter method
#include<iostream> 

using namespace std; 

int BinarysearchIter(int nums[],int arrsize,int key)
{
	
	int low=0;
	int high=arrsize-1;
	
	while(low <=high)
	{
		int mid=(low+high)/2;
		if (key==nums[mid])
		{
			return mid; 
		}
		else if(key<nums[mid])
		{
			high=mid-1;
		}
		else{
			low=mid+1;		
		}
	}
	
	return -1;
}
int main()
{
	int key=0;
	int arrsize=0;
	int indexfound=0;
	int nums[]={2,8,9,15,17,23,34,56,58,60};
	cout << "Please enter a number to find : ";
	cin >> key;
	
	arrsize = sizeof(nums)/sizeof(nums[0]);
	
	indexfound=BinarysearchIter(nums,arrsize,key);
	
	if(indexfound==-1)
	{
		cout << "Number not found!";
	}
	else
	{
		cout << "Number found at index " << indexfound << endl;
	}
	
	
	return 0;
}