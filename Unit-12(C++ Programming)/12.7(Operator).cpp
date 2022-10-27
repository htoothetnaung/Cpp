/*
Statement
1) expression statements
2) compound statements
3) selection statements
4) iteration statements
5) jump statements
6) declaration statements

3) Selection statements
if, if else
	if (condition) (statement)
	
if ( condition ) (statement) else (statement) 

Operator 
 
 operator_precedence
 Program
 */
 
 #include<iostream> 
 using namespace std; 

 int main(){
 	int a=0;
 	cout << "Please enter a number: ";
 	cin >> a; 
 	if(a>10){
		cout << "a value is greater than 10"; 	
 	}
 	else{
		cout << "wrong condition";
 	}
 
 return 0; 
 }