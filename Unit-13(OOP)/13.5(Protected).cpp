
#include<iostream>

using namespace std; 

class Parent{  // main class
protected:
	int data;


};

class Child: public Parent{   // inherent main class 
public: 
	void setData(int id){
	
		data=id;
	}
	void print(){
		
		cout << "Protected data is: "<< data<<endl;
	
	}

};
int main(){
	
	int realdata=0; 
	Child child; 
	cout << "Please enter data: ";
	cin >> realdata;
	
	child.setData(realdata);
	child.print(); 


return 0;
}













