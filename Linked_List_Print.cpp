#include<stdio.h>
#include<stdlib.h>
#include <iostream>



using namespace std;

struct node 
{
	int data; 
	node *next; 
}; 

struct node *head = NULL; 
struct node *current = NULL; 

//void printlist(struct node*a )
//{
//	struct node *ptr = NULL; 
//	
//	while(ptr != NULL){
//		cout << ptr->data; 
//		ptr = ptr->next;
//	}
//	
//	
//}
//
//void addNode(struct node *pt1, int dat)
//{
//	
//}


int main()
{

struct node *a = NULL; 
struct node *b = NULL; 
struct node *c = NULL; 

a = (struct node*) malloc(sizeof(struct node)); 
b = (struct node*) malloc(sizeof(struct node)); 
c = (struct node*) malloc(sizeof(struct node)); 


int n; 
cout << "Enter the value that needs to be added: "; 
cin >> n; 

a->data = n; 
a->next = b;
cout << "Enter the second value that needs to be added: "; 
cin >> n; 

b->data = n; 
b->next = c;

cout << "Enter the Third value that needs to be added: "; 
cin >> n; 

c->data = n; 
c->next = NULL;


head = a; 

//do {
//cout << "Value is: " << head->data; 
//head = head->next; 
//}while(head= NULL); 

// Reverse 
 while (a != NULL)
  {
     cout << " value is: " << a->data << endl;
     a = a->next;
  }

   struct node *p  = head; 
   
   node *q, *r, *s; 
   q = p; 
   s = NULL; 
   
   while (q!= NULL) 
   { 
   r =s; 
   s = q;
   q = q->next; 
   s->next = r; 
   
   }
   
   head = s; 
   
    while (head != NULL)
  {
     cout << " value is: " << head->data << endl;
     head = head->next;
}

// Search Operation 
head= s; 

struct node *h = head; 
int x = 10 ; 
while (h != NULL) 
{
	if (h->data == x) 
	{ 
	cout <<"Data entered: " << x << "Found !!!" << endl; 
	break; 
	}
	
	h= h->next; 
}

// Delete 
  try {
struct node *k = head; 
struct node *i = NULL; 
//h = head; 
	if (k->data == x) { 
		i = k; 
cout<<"ENter 1"		; 
		k = k->next; 
cout<<"ENter 2"		; 
		//delete i; 
} 
else 
{ 
p = NULL; 
while (h != NULL) 
{

		if (h->data == x) 
	{ 
	cout <<"Data entered: " << x << "is here and its time to delete" << endl; 
	p->next = h->next; 
	break; 
	
	}
	p= h; 
	h= h->next; 
}
}

    while (head != NULL)
  {
     cout << " value is: " << head->data << endl;
     head = head->next;
}

} 
catch (const char* msg) {
     cout << msg << endl;
   }


system("pause");
return 0; 
	
}
