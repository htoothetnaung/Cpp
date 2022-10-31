
// emplace function is used to add element at the specific position or add new element to the vector 
// two parameter >> one for position and one for element

#include<iostream> 
#include<vector>

using namespace std; 

int main(){

	vector<int> myvector = {10,20,30,40,50};
	auto it=myvector.emplace(myvector.begin(),100);  // adding 100 at the beginning of the vector
	
	cout << "All the vector elements are ";
	for (auto it=myvector.begin(); it != myvector.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	it=myvector.emplace(myvector.begin()+2,99);
	
	cout << "All the vector elements are ";
	for (auto it=myvector.begin(); it != myvector.end(); it++)
	{
		cout << *it << " ";
	}
	

return 0;
}