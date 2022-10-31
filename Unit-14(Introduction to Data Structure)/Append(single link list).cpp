
// two parameter >> memory address and data

/* Steps in adding new data to Singly Linked list
1. Create Append function (2 parameter >> memory address and new data)
2. Create memory block for new node 
3. Reading data from user to enter in new node->data and give new->next = NULL first
 // if user entered memory address is NuLl, that new node we created in 2nd step is one and only node in the linked list
 4. if memory address is not null and contains data, we have to read until it reaches the null. 
 	And if we reach that null(last node)  , we have to connect it with the new node we created. last->next= new_node

 */
 
#include<iostream> 

using namespace std;
 
class Node{
public: 
	int data; 
	Node* next; 
};
void print(Node* n){
	while (n != NULL){
		cout << n->data << " ";
		n = n ->next;	
	}
}
void push(Node** head_ref, int new_data)  // two parameter , position and data
{
	Node* new_node= new Node();
	
	new_node -> data = new_data;
	
	new_node -> next = (*head_ref);
	
	(*head_ref) = new_node; // ** ptr move to new node
	
}
void append(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	
	Node* last= *head_ref;
	
	new_node->data = new_data;
	new_node -> next = NULL; // last node
	
	if(*head_ref == NULL)
	{
		*head_ref=new_node;
	}
	while (last->next != NULL)
	{
		last=last->next;
	}
	last->next = new_node; // connect
}
void insertAfter(Node* prev_node, int new_data)
{
	if(prev_node==NULL)
	{
		cout << "You cannot enter the last node: " << endl;
		return;
	}
	else{
	
		Node* new_node= new Node();
		
		
		new_node->data = new_data;
		new_node->next = prev_node -> next;
		prev_node -> next = new_node;
		
	}
}
int main(){

	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	
	head= new Node();
	second=new Node();
	third=new Node();
	
	head->data = 1;
	head->next = second; 
	second->data=2; 
	second->next=third; 
	third->data=3; 
	third->next=NULL; 
	
	cout << "Original Linked List:" << endl;
	print(head);
	
	push(&head, 99);
	cout << endl;
	cout << endl;
	cout << "After Inserted A new Data: "<< endl;
	print(head);
	
	append(&head,77);
	cout << endl;
	cout << endl;
	cout << "After Appended new Data: " << endl;
	print(head);
	cout << endl;
	
	insertAfter(second,69);
	cout<<endl;
	cout<< endl;
	cout << "After adding new data after a given node; "<<endl;
	print(head);


return 0; 
}