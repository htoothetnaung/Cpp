#include<iostream>
#include<time.h>

using namespace std; 

int main(){

    int userGuess, randomNumber;
    int count = 0;

    srand(time(0));
    randomNumber = rand() % 100;
    

do{
    cout << "Guess a number from 1 to 100: ";
    cin >> userGuess; 
    cout << "Random Number: " << randomNumber << endl;
    if((userGuess-randomNumber)>10){
        cout << "Your Guess was too high !" << endl;
    }
    else if((userGuess-randomNumber)<-10){
        cout << "Your Guess was too low ! " << endl;
    }
    count++;    
}while(userGuess != randomNumber);

    cout << "Congratulations! Your guess was exactly correct" << endl;
    cout << "The number of counts that you take to guess correctly: " << count << endl;
    return 0;
}