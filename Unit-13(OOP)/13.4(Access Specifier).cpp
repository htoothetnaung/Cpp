// Small project (Bookshop application)
// function twy apyin mhr thet" yay mae hrr

#include<iostream> 

using namespace std;
// class ta khu out mhr yay htr tae function twy ko method loh call tl 
// function name nk class name nk lone wa differ pyit nay ya ml 
// function name = class name >> constructor 
// class control loke htr yin method
// independent yat ti nay tae hrr twy so function 

class Book{

private: 
	int year; 
	int price; 
	
public:
	string title;
	void printBook();  // ,method
	void setPrice(double P);	// method 
	void setYear(int y); 	// method 

};
// method twy ko apyin mhr thet" kwel yay ml why error tat yin trace lyk ya tr twy br twy shoke loh

void Book::setPrice(double p){  // ;: =  scope resolution operator
	price=p; 
}

void Book::setYear(int y){

	year=y; 
}

void Book::printBook(){
	cout<<"Title of the Book: " << title << endl; 
	cout << "Price of the Book: " << price << endl;
	cout << "Year of the Book: " << year << endl;
}

int main(){

	Book book; 
	int bPrice=0; 
	int bYear=0;
	cout << "Please enter the title of the book: "; 
	cin >> book.title;
	cout << "Please enter the price of the book: " ;
	cin >> bPrice; 
	cout << "Please enter the year of the book: ";
	cin >> bYear; 
	
	book.setPrice(bPrice); 
	book.setYear(bYear);
	book.printBook();


return 0;
}




