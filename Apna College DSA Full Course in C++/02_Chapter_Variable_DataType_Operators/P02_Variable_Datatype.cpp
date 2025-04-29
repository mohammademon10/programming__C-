//primitive data type-> int,float,double,char,bool etc.

#include <iostream>
using namespace std;
int main()
{
    // 8 Bits= 1 byts

    int age = 25; // int-> 4 byts & 32 bits

    float PI = 3.1415f; // float-> 4 byts

    double x = 5.698745631; // double-> 8 byts

    char grade = 'A'; // char-> 1 byts

    bool issafe = true; // bool -> true/false ->1 byts//

    cout << age << endl;
    cout << sizeof(age) << endl;

    cout << PI << endl;
    cout << sizeof(PI) << endl;

    cout << x << endl;
    cout << sizeof(x) << endl;

    cout << grade << endl;
    cout << sizeof(grade) << endl;

    cout << issafe << endl;
    cout << "bool size = " << sizeof(issafe) << endl; // true -> 1 & false -> 0

    return 0;
}