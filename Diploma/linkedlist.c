#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data; 
    struct node *next; 
   
};


int main(){

    struct node *head=NULL; 
    struct node *one=NULL;
    struct node *two=NULL; 
    struct node *three=NULL; 

    one = malloc(sizeof(struct node ));
    two = malloc(sizeof(struct node)); 
    three = malloc(sizeof(struct node)); 

    one->data=10; 
    two->data=20; 
    three->data=30; 

    one->next=two; 
    two->next=three; 
    three->next=NULL; 
   
   printf("Linked list %d\n",three->data);
    
    return 0; 
}