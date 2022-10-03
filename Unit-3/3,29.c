//Function calling
//Actual and Formal Parameter
//formal parameter ka function body htel mhr yay tae kg
//function ko hlan call tae achein mhr tone tae hrr ka actual paramter
#include<stdio.h>
void wintwar(int a);

int main(){
    int b=0;
    printf("Please enter a number: ");
    scanf("%d",&b);
    wintwar(b); // b=actual parameter

    return 0;
}
void wintwar(int a){ // int a=  formal parameter

    int z=a*a;
    printf("Wintwar function %d",z);

}
