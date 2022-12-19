#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void insertAfter(struct node *prevnode,int data_for_newnode); 
void printData(struct node* myNode);

struct node{

    int data; 
    struct node *next; 
};

void insertAfter(struct node *prevnode,int data_for_newnode){
    if(prevnode==NULL){
        printf("Previous node is Null!"); 
        return; 
    }
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data_for_newnode; 
    new_node->next = prevnode->next; 
    prevnode->next = new_node; 
}

void printData(struct node *myNode){
    while(myNode != NULL){
        printf("Data %d\n",myNode->data);
        myNode = myNode->next; 
    }
}
int main(){

    struct node *head=NULL;
    struct node *one=NULL; 
    struct node *two=NULL;
    struct node *three=NULL;

    one = static_cast<node *>(malloc(sizeof(struct node))); 
    two = malloc(sizeof(struct node)); 
    three = malloc(sizeof(struct node)); 
    
    one->data=10;
    two->data=20; 
    three->data=30;

    one->next=two; 
    two->next=three;
    three->next=NULL;
    printf("\n"); 

    printData(one); 
    insertAfter(one,15); 
    printf("After Inserting New Data \n");
    printData(one); 
    

    return 0; 
}