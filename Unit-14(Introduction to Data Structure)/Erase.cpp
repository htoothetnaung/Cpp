
//use either one or two parameter
// one for position and one for range

#include<iostream>
#include<vector>

using namespace std; 

int main(){

	vector<int> myvector; 
	
	for(int i=1; i<=10; i++)	
	{
		myvector.push_back(i);
	}
	myvector.erase(myvector.begin(),myvector.begin()+3);
	myvector.erase(myvector.begin()+5);
	
	cout << "Myvector contains: ";
	//The unsigned keyword is a data type specifier, that makes a variable only represent non-negative integer numbers 
	//(positive numbers and zero). It can be applied only to the char , short , int and long types.
	for (unsigned i=0; i<myvector.size(); i++)
	{
		cout << " " << myvector[i];
	}
	cout << endl;

return 0;
}