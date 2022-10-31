// cbegin points first element and return const_iterator 
// cend points last element and return const_iterator 

#include<iostream>
#include<vector>
#include<iterator>


using namespace std; 

int main()
{
	
	vector<int> vec;
	
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	
	vector<int>::iterator ptr;
	cout << "Contents of the vector:" << endl; 
	for(ptr=vec.begin(); ptr != vec.end(); ptr++)
	{
		*ptr=12;  // we can only edit value because we write with begin and end // with cbegin and cend you cannot run 
		cout << *ptr << endl; 
	}
	
	
	return 0;
}