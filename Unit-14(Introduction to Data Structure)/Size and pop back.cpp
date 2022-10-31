
// size function return the number of elements in the vector container
// pop_back function remove the last element of the vector 

#include<iostream> 
#include<vector> 

using namespace std; 

int main()
{
	vector<int> myvector;
	cout << "0. size: " << myvector.size() << endl;
	
	for(int i=0; i<10; i++)
	{
		myvector.push_back(i); 
	}
	
	cout << "1. size: " << myvector.size() << endl;
	
	myvector.insert(myvector.end(), 10,100); 
	cout << "2.  size: " << myvector.size() << endl; 
	
	myvector.pop_back();
	cout << "3.  size: " << myvector.size() << endl;
	
	cout << "All the elements in the vector container are: "<< endl;
	for(auto it=myvector.begin(); it != myvector.end(); it++)
	{
		cout << *it << " ";
	}
	
	
	return 0; 
}