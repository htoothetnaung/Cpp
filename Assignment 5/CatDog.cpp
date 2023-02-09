#include<iostream>

using namespace std; 

struct Dog{

	string dog_name;
};

struct Cat{

	string cat_name;
};

void speak(Dog &object){
	
	cout << "Dog name: " << object.dog_name < endl;
	cout << "Spot says woof  " << endl;
}
void speak(Cat &object){
	
	cout << "Cat name: " << object.cat_name < endl;
	cout << "Tiger says meow  " << endl;
}
int main(){

	Dog obj1;
	Cat obj2;
	
	obj1.dog_name = "Aung Nat"; 
	obj2.cat_name = "Pussy Cat";
	
	speak(obj1);
	speak(obj2);
	
	


return 0;
}