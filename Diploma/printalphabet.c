#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int forcount[26]; 

void generatechar(); 
void counting();
void printingdata(); 
int main(){

    generatechar(); 
    counting();
    printingdata(); 


    return 0; 
}

void generatechar(){

    FILE *fptr; 
    fptr= fopen("Character.txt","w"); 
    fclose(fptr); 
    FILE *fptr1; 
    fptr1 = fopen("Character.txt","a"); 
    
    srand(time(NULL)); 
    int i=0; 
    while(i<1000){
        int data=rand()%122; 
        if(data>96){
            fprintf(fptr1,"%c\n",data);
            i++; 
        }
    }
    fclose(fptr1); 


}

void counting(){

    FILE *fptr;
    fptr=fopen("Character.txt","r");
    char c; 
    c=fgetc(fptr); 
    int index=0; 
    while(!feof(fptr)){
        printf("Data %d\n",c); 
        index=c-97; 
        forcount[index] = forcount[index]+1; 

        printf("Index %d\n",index); 
        c=fgetc(fptr); 
        if(feof(fptr)){
            return; 
        }
    }
    printf("Hello World!"); 
    fclose(fptr); 

}
void printingdata(){
    int alpha=97; 
    for(int i=0;i<26;i++){ 
        printf("Data from Array %c : %d\n",alpha,forcount[i]); 
        alpha++; 
    }
}