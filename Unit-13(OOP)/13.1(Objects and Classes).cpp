/* 
 a powerful features of C++ is that we can create our own data types called classes

 a class is a user defined data-type (eg int,char) which has data members and member functions 
 
 an object is an instance of a class. When a class is defined, no memory is allocated but when it is
 instantiated(i.e. an object is created) memory is allocated. 
 */
 
 #include<iostream>
 
 using namespace std;
 
 // access identifier htae yay pay mha call thone loh ya ml 
 // 3 types >> public private protected 
 class htn{  // class so tr ko pine data ta khu ko create loke lyk tr 
 	
 public:
 	void print(){  //member function
 	
 		cout << "This is public member function from class" << endl;
 	
 	}
 	
 private: 
 	void win(){
 		
 		cout << "This is private function" << endl;
 		
 	}

 };
 int main(){
 
 	htn gh; // gh=object   ( we cant get access to class directly we need object)
						// (therefore class is like a data type and object is like a variable)
						
 	gh.print();  // gh now represents the whole htn class thats why we can access to the class 

 
 
 
 return 0;
 }
 
 
 
 
 
 
 
 
 
 