// insert function takes at least two arguments
// first argument is vector position and second one is element that has to insert
// insert function ko three arguments nk tone ml so yin ll ya tl  
// vector.insert(vector.begin(), 5,88) means that 88 will be inserted 5 time at the start of the vector

#include<iostream> 
#include<vector> 

using namespace std; 

int main()
{
	vector<int> myvector = {1,2,3,4,5,6};
	auto it = myvector.insert(myvector.begin(), 3,11);
	myvector.insert(it,22);
	cout << "The vector elements are: " << endl;
	for(auto it=myvector.begin(); it != myvector.end(); it++)
	{
		cout << *it << " ";
	}
	
	
	
	return 0;
}