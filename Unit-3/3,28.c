
//Scope rule
//two types of variables
//local variable {code} and global variable outside {}
//local variable >> bl function yae code block ahtel mhr shi tae variable
// global variable >> bl function htel mhr mha shi m nay tae variable
//local variable twy ko thu function ahtel mhr pl pyn call tone loh ya ml
#include<stdio.h>
    int war=100; //global variable
    
int wint();
int main(){

    int aung=0; //local variable
    printf("%d\n",aung);
    printf("Main Function Global Var %d\n",war);
    wint();
//local variable nk global variable nk name tuu kae yin local variable overwrite global variable in the function




    return 0;
}
int wint(){

    printf("Wint Fun Global Var %d\n",war);

}
