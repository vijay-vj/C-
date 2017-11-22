#include<stdlib.h>
#include<stdio.h>
#include <iostream>

struct node { 
int data; 
node * next; 
};


 node *head = NULL; 
 
int n; 
int size =0; 
void insert(){ 

// Insert starts 
std::cout<< "Enter the number :";
std::cin >> n;
if(head == NULL)
{
	head =new node;
	std::cout<< "Enter3" << std::endl;

	head->data = n; 
	head->next = head;
	std::cout<< "Enter4" << std::endl;
	size++; 
}
else 
{ 
	node *h = head; 
//	while(h!=NULL){
//		h= h->next;
//	}
for(int i=0; i<= size; i++) 
{
	h=h->next; 
}
node *k = NULL; 
k = new node; 
k->data = n; 


h->next = k; 	
k->next = head;
size ++;
}

}

void print() {
	node *h = NULL; 
	h = head; 
//	while(h!=NULL) { 
//	std::cout<<"Value is: "<<h->data << std::endl; 
//	h= h->next; 
//	}
	for(int i=0; i < size;i++)
	{
		std::cout<<"Value is: "<<h->data << std::endl; 
	h= h->next; 
	}
}

void insert_after(int x, int n){
	
	node *h = head; 
	 node *p, *q, *a  = NULL; 
	  p = new node; 
	  q = new node; 
	  a = new node; 
	
	for(int i= 0; i<size; i++) 
	{
		if(h->data == x) { 
	p = h; 
	q = h->next; 
	a->data = n; 
	a->next = q; 
	p->next = a; 
	size++; 
	break; 	
	
	}

	}
	
	}


	
void delete_nu(int x) { 
node *h = head; 
node *curr = head; 


// Deleting the first node 
 	if(curr->data == x && curr == head ) 
 	{ 
 	
 	while(curr->next!= head)
 	{
 	curr=curr->next; 	
	 }
	 curr->next = head->next; 
	 head= head->next;
	 size--; 
	 //break;
	 }
int f=0; 
// Deleting the middle one  
while(curr->next!=head) { 

if(curr->data == x ) {
	h->next = curr->next; 
	f=1;
	size --; 
	break; 
}
h=curr; 
curr = curr->next;
}
std::cout<<"here with vlaue of f: "<< f<<std::endl;
if (f==0)
{
	std::cout<<"Value of h here is: "<< h->data<<std::endl;
	h->next = head; 
	size --; 
}
// Deleting the last 

}

int main() {

std::cout<< "Enter1" << std::endl;
for(int i=0;i<3;i++)

{
	insert(); 
	print(); 
}
std::cout<< "Enter2" << std::endl;
print(); 
std::cout<< "Center Insert" << std::endl;
insert_after(10,85); 
print();
std::cout<< "Deleting the first number" << std::endl;
delete_nu(30);
print();

std::cout<< "Enter3" << std::endl;
system("pause");
return 0; 

}
