#include<iostream>

using namespace std;

void movieData(string movie, int time=90){

	cout << "Movie name: " << movie << endl;
	cout << "Running time: " << time << "minutes " << endl;

}
int main(){

	
	
	cout << "Calling function with only string argument***" << endl; 
	movieData("Big Bang Theory");
	
	cout << "Calling function with both string and integer argument***" << endl;
	movieData("Friends",56);
	
	
return 0;
}