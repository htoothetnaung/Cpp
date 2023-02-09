#include<iostream>

using namespace std;

struct Shirt{

	double collarSize;
	double sleeveLength;

};

struct Pants{

	double waistSize;
	double inSeam;

};

void displayClothingFacts(Shirt &object){

	cout << "Here's a fun fact about hoodies:" << endl;

}
void displayClothingFacts(Pants &object){
	cout << "Here's a fun fact about pants:" << endl;


}

int main(){

	Shirt obj1;
	Pants obj2;
	
	obj1.collarSize = 10.5;
	obj1.sleeveLength = 6.6;
	
	obj2.inSeam = 20;
	obj2.waistSize = 29.5;
	
	displayClothingFacts(obj1);
	displayClothingFacts(obj2);

return 0;
}