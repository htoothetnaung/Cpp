

#include<iostream> 
#define WINTWAR 50; // symbolic constant 
using namespace std; 

int main(){

	// finding the area of the circle
	
	const float pi=3.1415; 
	int radius=0; 
	float area=0;
	
	cout<< "Please enter radius: ";
	cin >> radius;
	
	area =  pi*radius*radius; 
	cout << "The area of the circle is: " << area << endl; 
	

return 0; 
}