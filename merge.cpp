#include<iostream>
#include<conio.h>
using namespace std;
class list
{
struct node
{
int data;
node *next;
};
node *front,*rear;
public:
list()
{
front=rear=NULL;
}
void insert(int x)
{
node *t;
t=new node();
t->data=x;
t->next=NULL;
if(front==NULL)
{
front=t;
rear=t;
front->next=NULL;

}
else
{
rear->next=t;
rear=rear->next;
}
}

node *findp(int x,list &a)
{
node *t;
t=a.front;
while(t->next->data!=x)
t=t->next;
return t;
}
void display()
{
node *t;
for(t=front;t!=NULL;t=t->next)
cout<<t->data<<" ";
}
void merge(list &a,list &b)
{
node *t,*p,*q;
t=b.front;
p=a.front;
while(t!=NULL)
{
if(t->data<p->data)
{
q=findp(p->data,a);
q->next=t;
t->next=p;
t=t->next;
}
else if(t->data>p->data)
p=p->next;
else
t=t->next;
}
}
};
int main()
{
list a,b,c;
int x,i ;
cout<<"\nenter the elements in the first list";
for(i=0;i<6;i++)
{
cin>>x;
a.insert(x);
}
cout<<endl;
a.display();
cout<<"\nenter the elements in the second list";
for(i=0;i<5;i++)
{
cin>>x;
b.insert(x);
}
cout<<endl;
b.display();
c.merge(a,b);
a.display();
system ("pause");
return 0;
}
