
#include<iostream> 

using namespace std; 

int BinarysearchRecur(int nums[],int low,int high,int key)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if (key==nums[mid])
		{
			return mid;
		}
		else if(key<nums[mid])
		{
			return BinarysearchRecur(nums,low,mid-1,key); // recursive function
		}
		else if(key>nums[mid])
		{
			return BinarysearchRecur(nums,mid+1,high,key);  // recursive function34
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
	int low=0;
	int high=arrsize-1;
	indexfound=BinarysearchRecur(nums,low,high,key);
	
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