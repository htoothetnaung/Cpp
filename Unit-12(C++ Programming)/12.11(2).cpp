
#include<iostream> 
using namespace std; 

int main(){

	int myan=0; 
	int eng=0; 
	int math=0;
	int chem=0;
	int phy=0;
	int bio=0; 
	int total=0; 
	
	
	cout << "Please enter Myanmar mark: " << endl;
	cin >> myan; 
	
	cout << "Please enter English mark: " << endl;
	cin >> eng; 
	
	cout << "Please enter Maths mark: " << endl;
	cin >> math; 
	
	cout << "Please enter Chemistry mark: " << endl;
	cin >> chem; 
	
	cout << "Please enter Physics mark: " << endl;
	cin >> phy; 
	
	cout << "Please enter Biology mark: " << endl;
	cin >> bio; 
	
	total = myan+eng+math+chem+phy+bio; 
	cout << "Your total marks: " << total << endl; 
	
	if( (myan > 39) && (eng > 39) && (math > 39) && (chem > 39) && (phy > 39) && (bio > 39) ){
		cout << "You pass the exam"; 	
	}
	else{
	
		cout << "You lose the exam";
	}

return 0;
}