

#include<iostream>

using namespace std;
	
class Con{   // Class name yae asa ko Capital letter nk kyay nyr tint cuz of naming convention 
	
public:
	float x,y;
	Con(int a,int b){  // Con=Constructor because constructor nk class name ka tuu loh 
		
		x=a;
		y=b;
		

	}  // constructor do not return any value

	void print(){
		cout << x <<","<<y<< endl;
	}

};

int main(){

	Con conObj(10,20);   // constructor get direct access do not need con.functionname
	conObj.print();
	
return 0;
}

/* Main difference between constructor and member function
1. Constructor has the same name as class
2. It does not return any value 
3. It gets direct access to the class (i.e by building object for the class we can call the class)


*/







