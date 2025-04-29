#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
};
int main()
{
    Node a,b;//creating two nodes a and b

    a.data=10;//assigning value to a
    a.next=&b;//linking a to b

    b.data=20;//assigning value to b
    b.next=NULL;//b is the last node so it is pointing to NULL
    
    cout<<a.data<<" "<<b.data<<endl;//printing the data of a and b
   
    cout<<(*a.next).data<<endl;//printing the address of next node of a.  (a.next->data)           
    
    return 0;
}