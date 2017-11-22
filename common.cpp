#include<iostream>
using namespace std;
class LinkedList
{
      private:
                int size;
                int data;
                int count;
      public:
      struct node
       {
       int val;
       node *next;
       } *head,*tail;
       node *p;
             LinkedList();
             void insert(int data);
             void compare(LinkedList l1,LinkedList l2);
             void display();
             };
LinkedList::LinkedList()
{
                         size=0;
                        }
void LinkedList::insert(int data)
{
     if(size==0)
     {
                node *temp;
                temp=new node;
                temp->val=data;
                temp->next=NULL;
                head=temp;
                tail=head;
                size++;
                cout<<endl;
                return;
                }
          else
          {
              node *temp;
              temp=new node;
              temp->val=data;
              temp->next=NULL;
              tail->next=temp;
              tail=temp;
              size++;
             
              cout<<endl;
              return;
              }
              }                   
 void LinkedList::compare(LinkedList l1,LinkedList l2)
 { 
  count=0;
  node *a,*b;
  a=l1.head;
  //cout<<"a val is"<<" "<<a->val;
  
  while(a!=NULL)
  {
                b=l2.head;
                while(b!=NULL)
                {
                              if(a->val==b->val)
                              {
                                                //cout<<a->val;
                                                  insert(a->val);
                                                  
                                                  }
                                                  b=b->next;
                                                  }
                                                  a=a->next;
                                                  }
                                                  return;
                                                  }
  void LinkedList::display()
  {    p=head;
       while(p!=NULL)
       {  
         cout<<p->val;
         p=p->next;
         }
         }
         int main()
         {
             int req,req1,data;
         LinkedList l1,l2,l3;
         cout<<"enter how many numbers do u need :";
         cin>>req;
         cout<<"enter data fr first ll:";
         for(int i=0;i<req;i++)
         {
                 cin>>data;
                 l1.insert(data);
                 }
                  l1.display();
                  cout<<"how many elements in second ll:";
                             cin>>req1;
           cout<<"enter data fr second ll:";
         
         for(int i=0;i<req1;i++)
         {
                 cin>>data;
                 l2.insert(data);
                 }
         l2.display();
         l3.compare(l1,l2);
         l3.display();
         system ("pause");
         return 0;
         }
