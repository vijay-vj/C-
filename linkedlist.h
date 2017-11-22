#include<iostream>
using namespace std;
struct node
{
       int val;
       node *next;
       };
class LinkedList
{
                int size;
                node *head,*tail;
      public:
             LinkedList();
             void insert(int &data);
             void delet(int &data);
             void search(int &data);
             void sort();
             void reverse();
             void update(int &old, int &data);
             };
               void LinkedList::reverse()
                    { 
                                         node *p=head;
                         node *q,*r,*s;
                         q=p;
                         r=NULL;
                    while(q!=NULL)
                    {
                         s=r;
                         r=q;
                         q=q->next;
                         r->next=s;
                         }
                         p=r;
                         node *temp=p;
                         while(temp!=NULL)
                         {
                                          cout<<temp->val<<" ";
                                          temp=temp->next;
                                          }
                         }
LinkedList::LinkedList()
{
                         size=0;
                        head=tail=NULL;
                        }
void LinkedList::insert(int &data)
{
     if(size==0)
     {
                head =new node;
                head->val=data;
                head->next=NULL;
                tail=head;
                size++;
                return ;
                }
     if(data<head->val)
     {
                       node *temp;
                       temp=new node;
                       temp->val=data;
                       temp->next=head;
                       head=temp;
                       size++;
                       return;
                       }
     else if(data>tail->val)
     {
          node *temp;
          temp=new node;
          temp->val=data;
          temp->next=NULL;
          tail->next=temp;
          tail=temp;
          size++;
          return ;
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
void LinkedList::search(int &data)
{
     node *temp=head;
     while(temp!=NULL)
     {
                      if(temp->val==data) 
                      {
                                          cout<<"\nFound";
                                          return ;
                                          }
                      if(temp->val>data)
                      {
                                        cout<<"\nNO need to search more it's NOT in LIST.";
                                        return ;
                                        }
                      temp=temp->next;
                      }
     }
void LinkedList::delet(int &data)
{
     if(head==NULL) 
     {
                    cout<<"\nNOthing to delete:";
                    return ;
                    } 
     node *temp=head;
     node *t;
     if(head->val==data) 
     {
                         head=head->next;
                         delete temp;
                         size--;
                         return ;
                         }
 /*    else if(size==1)
     {
          cout<<"\nNOT found:";
          return ;
          }*/
    
    else
    { temp=head->next;
     t=head;
     while(temp!=NULL)
     {
                if(temp->val==data)
                {
                                   t->next = temp->next;
                                   delete temp;
                                   size--;
                                   return ;
                                   }
                temp=temp->next;
                t=t->next;
                }
     cout<<"\nNOThing is going to be deleted:";
     }
}
void LinkedList::sort()
{
     cout<<"\nSorting order in Ascending:"<<endl;
     node *temp=head;
     while(temp)
     {
                cout<<temp->val<<"\t";
                temp=temp->next;
                }
}
void LinkedList::update(int &old,int &data)
{
     delet(old);
     insert(data);
     }      
     
                                
          
