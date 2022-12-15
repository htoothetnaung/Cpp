#include<stdio.h>
#include<stdlib.h>
#include "time.h"

char alphabet[26];
void insertingdata();
int counting();
void printingdata();

int main(){

    insertingdata();
    counting();
    printingdata();

return 0;
}

void insertingdata(){

    FILE *fptr;
    fptr=fopen("ass4.txt","w");
    fclose(fptr);
    FILE *fptr1;
    fptr1=fopen("ass4.txt","a");
    if (fptr==NULL){
        printf("The file cannot be opened!");
        exit(1);
    }
    else{
        srand(time(NULL));
        int i=0;
        while(i<1000){
            int data=rand()%123;
            if(data>96){
                fprintf(fptr1,"%c\n",data);
                i++;
            }
        }
        fclose(fptr1);
    }

}

int counting(){

    FILE *fptr1;
    fptr1=fopen("ass.txt","r");
    char c;
    int fgetc(FILE *fptr1);
    c=fgetc(fptr1);
    int index=0;
    do{
        printf("Data %d\n",c);
        index=c-97;
        alphabet[index]=alphabet[index]+1;

        printf("Index %d\n",index);
        c=fgetc(fptr1);
        if(feof(fptr1)){
            exit(1);
        }
    }while(1);
    printf("Hello");
    fclose(fptr1);
}

void printingdata(){
    int alpha=97;
    for(int i=0; i<26; i++){
        printf("Data from Array %c : %d\n",alpha,alphabet[i]);
        alpha++;
    }
}
