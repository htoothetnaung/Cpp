#include<iostream>

using namespace std; 

int main(){

    int dog_size=0; 
    int num_of_days=0; 
    float total=0.0;

    cout << "Enter a dog's weight: "; 
    cin >> dog_size; 

    cout << "Enter number of days per month needing care: "; 
    cin >> num_of_days; 

    if(dog_size<10){
        if(num_of_days>=1 && num_of_days<=10){
            cout << "Daily Rate: $12" << endl;
            total = 12 * num_of_days;
            cout << "Total amount: " << total << endl;
        }
        else{
            cout << "Daily Rate: $10" << endl;
            total = 10 * num_of_days;
            cout << "Total amount: " << total << endl;
        }
    }
    else if (dog_size>=10 && dog_size<35)
    {
        if (num_of_days >= 1 && num_of_days <= 10)
        {
            cout << "Daily Rate: $16" << endl;
            total = 16 * num_of_days;
            cout << "Total amount: " << total << endl;
        }
        else
        {
            cout << "Daily Rate: $13" << endl;
            total = 13 * num_of_days;
            cout << "Total amount: " << total << endl;
        }
    }
    else{
        if (num_of_days >= 1 && num_of_days <= 10)
        {
            cout << "Daily Rate: $19" << endl;
            total = 19 * num_of_days;
            cout << "Total amount: " << total << endl;
        }
        else
        {
            cout << "Daily Rate: $17" << endl;
            total = 17 * num_of_days;
            cout << "Total amount: " << total << endl;
        }
    }
    


    



    return 0;
}