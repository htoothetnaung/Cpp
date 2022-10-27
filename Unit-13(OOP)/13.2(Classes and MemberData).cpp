

#include<iostream>
#include<string>

using namespace std;

class shweyee{

public:
	void realName(string x){
	
		name=x;  // name ka private pay mk class htel mhhr top call toneloh ya tl 
	
	}
	string fname(){  // br loh return name ko function thet" kwel yay ll so tr nout unit mhr sat pyw 
		return name;   
	}

private:  // br loh private nk htr ll so top data member twy akone lone ko private nk htr tr akg sone ma loh pr 
			// in short because of security 
	string name;

};

int main(){

	shweyee wh;
	wh.realName("Green Hackers");
	cout << wh.fname();
	
return 0;
}



