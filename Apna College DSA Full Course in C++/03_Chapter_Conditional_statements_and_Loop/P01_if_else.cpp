#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter The Age: ";
    cin>>age;

    if(age>=18)
    {
        cout<<"Eligible for vote"<<endl;
    }
    else
    {
        cout<<"Not Eligible"<<endl;
    }

    return 0;
}