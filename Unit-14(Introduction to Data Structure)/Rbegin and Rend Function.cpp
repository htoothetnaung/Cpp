
// rbegin = reverse begin  >> reverse element and return first element after reversing 

#include<iostream> 
#include<vector> 

using namespace std; 

int main()
{

	vector<int> myvector; 
	
	myvector.push_back(1);
	myvector.push_back(2); 
	myvector.push_back(3); 
	myvector.push_back(4); 
	myvector.push_back(5);  
	
	cout << "The vector elements in the reverse order are:\n"; 
	for(auto it=myvector.rbegin(); it != myvector.rend(); it++)
	{
		cout << *it << " ";
	}


return 0; 
}