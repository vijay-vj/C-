#include<iostream>
using namespace std;
struct node
{
       int val;
       node *next;
       };
class Linkedlist
{
     node *head,*tail;
     node *f,*t;
     int size;
      public:
             Linkedlist();
             void insert(int data);
             void middle();
             void display();
             };
             Linkedlist::Linkedlist()
             {
                                     size=0;
                                     head=tail=NULL;
                                     }
                                     void Linkedlist::insert(int data)
                                     {
                                          if(size==0)
                                          {
                                                     head=new node;
                                                     head->val=data;
                                                     head->next=NULL;
                                                     tail=head;
                                                     size++;
                                                     }
                                          else if(head->val>data)
                                          {
                                                                node *t;
                                                                t=new node;
                                                                t->val=data;
                                                                t->next=head->next;
                                                                head=t;
                                                                size++;
                                                                }
                                                                else if(tail->val<data)
                                                                {
                                                                                    node *t;
                                                                                    t=new node;
                                                                                    t->val=data;
                                                                                    tail->next=t;
                                                                                    t->next=NULL;
                                                                                    tail=t;
                                                                                    size++;
                                                                                    }
                                                                                    else
                                                               {
                                                               node *temp,*t;
         temp=head;
         while(temp->next!=NULL)
         {
                                if(temp->val<data && data < temp->next->val)
                                {
                                                  t=new node;
                                                  t->val=data;
                                                  t->next=temp->next;
                                                  temp->next=t;
                                                  size++;
                                                  return ;
                                                  }
                                                  temp=temp->next;
                                                                                    }
                                                                                    }
                                                                                    }
                                     void Linkedlist::middle()
                                     {
                                          f=head;
                                          t=head;
                                          while(1)
                                          {
                                          if(f->next!=NULL)
                                          {
                                                           f=f->next;           
                                                            if(f->next!=NULL)
                                                           {
                                                                            f=f->next;
                                                                            t=t->next;
                                                           }
                                                                            else
                                                                            {cout<<t->val;break;}
                                                                            }
                                                           else
                                                           {cout<<t->val;break;}
                                                                            }
                                                                            }                               
                                          void Linkedlist::display()                    
                                          { 
                                               node *t;
                                               t=head;
                                             while(t!=NULL)
                                             {
                                                                 cout<<t->val;
                                                                 t=t->next;
                                                                 }
                                                                 }             
int main()
{
    int size,data;
    Linkedlist s;
    cout<<"\nEnter the no. of elements you wanna enter :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
            cout<<"\nEnter data:";
            cin>>data;
            s.insert(data);
            }
            s.display();
            s.middle();
            system ("pause");
            return 0;
            }
                                          
                                                                                                                                             
                                                                                    
                                                                                    
                
                                                
                                     
             

              
