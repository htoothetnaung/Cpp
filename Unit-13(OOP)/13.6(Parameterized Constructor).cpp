
/*

Constructor 3 types
1. Default   (no parameter)
2. Parameterized (parameter pr tl) 
3. Copy (Copy the existing the object)


*/
#include<iostream> 

using namespace std;

class Parent{

public: 
	string name;
	int age;
	float weight; 
	
	Parent(string dName,int dAge, float dWeight){
	
		name=dName;
		age=dAge;
		weight=dWeight;
	}
} ;

int main(){
	string sName="Wint War"; 
	int sAge=18;
	float sWeight=3.3;
	
	Parent parent(sName,sAge,sWeight);
	
	cout << "Name is :" << parent.name << endl; 
	cout << "Age is :" << parent.age << endl;
	cout << "Weight is :" << parent.weight << endl;



return 0; 
}







