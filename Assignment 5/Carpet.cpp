#include<iostream>

using namespace std;

struct Carpet{

	double lengthInFeet;
	double widthInFeet;

};

void displayArea(Carpet &object){

	double area;
	area = object.lengthInFeet * object.widthInFeet;
	cout << "The area of your entered length and width: " << area << "square feet " << endl;
}


int main(){

	Carpet obj1;
	
	obj1.lengthInFeet = 12;
	obj1.widthInFeet = 5.3;
	displayArea(obj1);

return 0;
}