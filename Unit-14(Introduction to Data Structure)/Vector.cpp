#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	vec.push_back(10);  //push back function insert elements at the end
	vec.push_back(11);
	vec.push_back(12);
	
	cout << vec.front() << endl;  // access first element    
	cout << vec.back() << endl; 	// accesss last element 
	// front and back function has no parameter it will return first and last element of the vector 
	cout << vec.at(1) << endl;
	
	return 0;
}