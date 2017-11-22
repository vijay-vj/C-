#include<iostream>
using namespace std;
class queue
{
      struct node
      {
             int val;
             node *next;
             }*head,*tail;
             node *temp;
             public:
                    queue();
                    void en(int num);
                    void de();
                    };
                    queue::queue()
                    {
                                  size=0;
                                  head=tail=NULL;
                                  }
                    void queue::en(int num)
                    {
                         if(size==0)
                         {
                               node *t;
                               head->next=NULL;
                               head->data=num;
                               t=head;
                               tail=head;
                               
                               size++;
                               return;
                               }
                               else
                               {
                                   tail=new node;
                                 temp=new node;
                                 temp->val=num;
                                 temp->next=NULL;
                                 tail->next=temp;
                                 size++;
                                 return;
                                 }
                                 }
                               void queue::de()
                               {
                                    if(size==0)
                                    cout<<"ntng to remove";
                                    else
                                    {  temp=head;
                                        while(t!=NULL)
                                    {
                                     cout<<head->val;
                                     head=t->next;
                                     t=head;
                                     
                                 
                                 
                         
