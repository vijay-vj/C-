
#include "stack.h"

int main()
{
    int size,data;
    cout<<"\nEnter size of stack:";
    cin>>size;
    Stack s(size);
    cout<<"\nEnter the no. of elements you wanna enter :";
    cin>>size;
    for(int i=0;i<size;i++)
    {
            cout<<"\nEnter data:";
            cin>>data;
            s.push(data);
            s.display();
            }
    cout<<"\nEnter no.of elements  you wanna search for:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
            cout<<"\nEnter data:";
            cin>>data;
            s.search(data);
            s.display();
            }
    cout<<"\nEnter no.of elements you wanna pop out:";
    cin>>size;
    for(int i=0;i<size;i++) s.pop();
    s.display();
    system("pause");
    return 0;
}
     
