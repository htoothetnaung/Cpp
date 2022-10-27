

#include<iostream> 
 
 using namespace std; 
 
 int main(){
 	cout << sizeof(int) << " bytes" << endl;  // +-
 	cout << sizeof(signed int) << " bytes" << endl;  // --
 	cout << sizeof(unsigned int) << " bytes" << endl; // ++
 	
 	int x = 2147483645;
 	cout << "Normal int " << x << endl; 
 	
 	int y = -2147483653; 
 	cout << "Normal int " << y << endl;
 	
 	signed int xx = -429496729; // - 
 	cout << "Signed int " << xx << endl;
 	
 	unsigned int yy = 4294967299; 
 	cout << "Unsigned int " << yy << endl;
 	
 	cout << sizeof(long) << "Long size" << endl;
 	
 }
 // size of int >> 4 bytes
 /* 1 byte = 8 bit 
 	4 byte = 32 bit // size n 
 	2^n (n=size_interms of bits)
 	2^32 = 4294967296
 	4294967296/2= 2147483648
 	*/