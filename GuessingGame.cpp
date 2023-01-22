#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main()
{
    int randomNumber, userGuess;

    srand(time(0));
    randomNumber = rand() % 10;

    cout << "Guess a number between 0 and 9: ";
    cin >> userGuess;
    int range = userGuess - randomNumber; 
    cout << "Random Number is: " << randomNumber << endl;
    if (userGuess == randomNumber)
    {
        cout << "Exactly correct!" << endl;
    }
    else if (range >=-2 && range <=2)
    {
        cout << "Close! You were within 2 of the correct number." << endl;
    }
    else
    {
        cout << "Sorry, you were off by more than 2." << endl;
    }

    return 0;
}
