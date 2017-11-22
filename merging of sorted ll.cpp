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
             void update(int &old, int &data);
             };
LinkedList::LinkedList()
{
                        int size=0;
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
                       return ;
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
int main()
{
    int size,data;
    LinkedList m,n;
    cout<<"\nEnter the no. of elements you wanna enter :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
            cout<<"\nEnter data:";
            cin>>data;
            s.insert(data);
            s.sort();
            }
    
    
