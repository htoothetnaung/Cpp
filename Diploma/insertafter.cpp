#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void insertAfter(struct node* prevnode, int data_for_newnode);
void printData(struct node* myNode);
int searching(struct node* myNode,int data);
struct node* insert_at_the_beginning(struct node* myNode, int data2);
void insert_beginning_ref(struct node **myNode, int data);

struct node
{

    int data;
    struct node *next;
};

int searching(struct node* myNode,int data){
    if(myNode == NULL) {
        printf("Node is NULL!");
        return -1;
    }
    while(myNode!=NULL){
        if (myNode->data == data){
            return 1;
        }
        else{
            myNode=myNode->next;
        }
    }

}

void insertAfter(struct node* prevnode, int data_for_newnode)
{
    if (prevnode == NULL)
    {
        printf("Previous node is Null!");
        return;
    }
    struct node *new_node = static_cast<node *>(malloc(sizeof(struct node)));
    new_node->data = data_for_newnode;
    new_node->next = prevnode->next;
    prevnode->next = new_node;
}

void printData(struct node* myNode)
{
    while (myNode != NULL)
    {
        printf("Data %d\n", myNode->data);
        myNode = myNode->next;
    }
}
// First method for inserting data at the beginning
// using struct function
struct node* insert_at_the_beginning(struct node* myNode, int data2){
    if(myNode==NULL){
        printf("LInked List is empty");
    }
    else{
        struct node *new_node2=static_cast<node *>(malloc(sizeof(struct node)));
        new_node2->data = data2;
        new_node2->next=myNode;

        myNode=new_node2;
        return myNode;

    }
}

// second method for inserting data at the beginning
// pass by reference
void insert_beginning_ref(struct node **myNode, int data){
    struct node *begin_node=static_cast<node *>(malloc(sizeof(struct node)));
    begin_node->data=data;
    begin_node->next = (*myNode);
    (*myNode) = begin_node;
}
int main()
{

    struct node *head = NULL;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = static_cast<node *>(malloc(sizeof(struct node)));
    two = static_cast<node *>(malloc(sizeof(struct node)));
    three = static_cast<node *>(malloc(sizeof(struct node)));

    one->data = 10;
    two->data = 20;
    three->data = 30;

    one->next = two;
    two->next = three;
    three->next = NULL;
    printf("\n");

    printData(one);
    insertAfter(one, 15);
    printf("After Inserting New Data \n");
    printData(one);
    int result=searching(one,89);
    if(result==1){
        printf("Data Found!");
    }
    else{
        printf("Not found");
    }
    printf("\n");
    //struct node *new_Link_list=insert_at_the_beginning(one,5);
    printf("After inserting Data at the beginning\n");
    insert_beginning_ref(&one, 5);
    printData(one);
    return 0;
}