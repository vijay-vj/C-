#include<stdio.h>
#include<stdlib.h>
#include <iostream>


struct node { 

node *prev; 
int data; 
node *next; 
};

struct node *head = NULL; 
void insert(struct node **r, int x) 
{ 
std::cout<<  "Entered the insert"; 
 node *h = NULL; 
 h =new node;

 if(*r == NULL) 
 { 
 h->data = x; 
 h->next = NULL; 
 h->prev = NULL;
 
 *r = h; 
 
 head = h; 
 
std::cout << "Check 1"<< head->data << " "<< std::endl; 
}
std::cout<<  "Exit the insert" << std::endl;  
}
void insert_End(struct node* h, int x)
 { 
 std::cout<< "test 1: " << head->data <<std::endl; 
 node *i = head; 
 
 i->data = x; 
 i->next = NULL; 
 i->prev = NULL;

node *k = head; 

while(k != NULL) 
 { 
 	
	k = k->next; 
 }
 
 i->prev = k; 
  

 }
void printing(struct node *r) 
{
	while(r!= NULL)
	{ 
	std::cout << "value is:" << r->data << std::endl; 
	r = r->next; 
	}
}

int main() 
{ 
struct node* q = NULL; 

std::cout<< " ENter 1"; 

insert(&q,10);
head = q; 
//printing(head);

insert_End(head,20);
printing(head);	
//insert_End(head,30);
//insert_End(head,40);


//printing(head);
system ("pause");
return 0; 

}
