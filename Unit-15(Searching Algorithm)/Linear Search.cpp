#include<iostream>

using namespace std;

int linearSearch(int nums[],int arrsize,int key)
{
	int i = 0;
	for (int i=0;i < arrsize; i++)
	{
		if (nums[i]==key){
			return i;
		}
	}
	return -1;
}
int main()
{

	int key = 0;
	
	int nums[] = { 2,8,9,15,17,23,34,56,58,60};
	cout << "Please enter a number to find : ";
	cin >> key;

	int arrsize = sizeof(nums) / sizeof(nums[0]);
	
	int indexfound = linearSearch(nums,arrsize,key);

	if (indexfound == -1)
	{
		cout << "Number not found!";
	}
	else
	{
		cout << "Number found at index " << indexfound << endl;
	}

	return 0;
}
	