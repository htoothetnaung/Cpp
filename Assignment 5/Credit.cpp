#include<iostream>

using namespace std;



void customerCreditLimit(double credit=500.0){
	
	cout << "The amount of credit: $" << credit << endl; 
}

int main(){

	cout << "Calling function without argument: "; 
	customerCreditLimit();

	cout << "Calling function with an argument: "; 
	customerCreditLimit(1000.45);

return 0;
}