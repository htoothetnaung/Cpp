

#include<iostream> 
#include<vector> 

#define WINTWAR 10 
 using namespace std; 
 
 int main(){
	vector<int> myvector(WINTWAR);
	for (int i=0; i<WINTWAR; i++){
		myvector[i]=i;
	}
	cout << "Vector size initially: " << myvector.size() << endl;
	
	cout << "Vector elements are: ";
	for(int i=0; i<WINTWAR; i++){
		cout << myvector[i] << " ";
	}
	myvector.resize(5);
	
	cout << endl;
	cout << endl;
	cout << "Vector size after resize: "<< myvector.size() << endl;
	
	cout << "Vector elements after resizing: ";
	for(int i=0; i<WINTWAR; i++){
		cout << myvector[i] << " ";	
	}
	myvector.shrink_to_fit();
	
	cout << endl;
	cout << endl;
	cout << "Vector size after shrink to fit: " << myvector.size() << endl;
	
	cout << "Vector elements after shrink to fit: ";
	for(int i=0; i<WINTWAR; i++)
	{
		cout << myvector[i] << " ";
	}	
	cout << endl;
 
 
 return 0; 
 }