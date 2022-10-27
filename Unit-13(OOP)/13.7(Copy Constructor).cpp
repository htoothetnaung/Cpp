

#include<iostream> 

using namespace std; 

class Copyconstructor{
private:	
	int data1;
	int data2; 
public: 
	Copyconstructor(int x1,int x2){
		data1=x1;
		data2=x2;
	
	}
	Copyconstructor(const Copyconstructor &cp){
		data1=cp.data1+10; 
		data2=cp.data2+10;
	}
	void display(){
		cout << data1 << "  " << data2<< endl;
	}

};

int main(){
	int mdata1=0;
	int mdata2=0;
	cout<<"Please enter data to test: ";
	cin >> mdata1; 
	cout <<"Please enter data2 to test: ";
	cin >> mdata2;
	
	Copyconstructor obj1(mdata1,mdata2);
	Copyconstructor obj2=obj1;
	Copyconstructor obj3=obj2;
	
	cout << "Normal constructor: ";
	obj1.display(); 
	cout << "Copy constructor 2: ";
	obj2.display(); 
	cout << "Copy constructor 3: ";
	obj3.display(); 


return 0; 
}