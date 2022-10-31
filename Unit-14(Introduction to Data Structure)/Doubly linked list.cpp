

#include<iostream> 

using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node* prev;
};

void append(Node**head_ref, int new_data)
{
	
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=NULL;
	
	if(*head_ref==NULL)  // if linked list is empty 
	{
		new_node->prev = NULL;
		*head_ref=new_node; 
		return;
	}
	else
	{
		Node* last=*head_ref;
		while(last->next != NULL)
		{
			last=last->next;
		}
		last->next = new_node;
		new_node -> prev = last; 
		return;
	}
}
void printlist(Node* n)
{
	while (n != NULL){
		cout << n->data << " ";
		n = n ->next;	
	}
}
int main(){
	Node* head=NULL;
	append(&head,1);
	printlist(head);
	



return 0;
}