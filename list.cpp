#include "linkedlist.h"
int main()
{
    int size,data;
    LinkedList s;
    cout<<"\nEnter the no. of elements you wanna enter :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
            cout<<"\nEnter data:";
            cin>>data;
            s.insert(data);
            s.sort();
            }
    cout<<"\nEnter no.of elements  you wanna search for:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
            cout<<"\nEnter data:";
            cin>>data;
            s.search(data);
            s.sort();
            }
            cout<<"reverse order is:";
            s.reverse();
    cout<<"\nEnter no.of elements you wanna delete:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
            cout<<"\nEnter the element you wanna delete:";
            cin>>data;
             s.delet(data);
    s.sort();
}

    system("pause");
    return 0;
}
