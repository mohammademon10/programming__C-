//q1.

#include <bits/stdc++.h>
using namespace std;
void fun(int *p){
    *p = 20;
}
int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr << endl;
    return 0;
}
//output: 20

//q2.
#include <bits/stdc++.h>
using namespace std;
void fun(int *p){
    p = NULL;
}
int main(){
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr << endl;
    return 0;
}
//output: 10


//q3.
#include <bits/stdc++.h>
using namespace std;
void fu(int *&p){
    p = NULL;
}
int main() {
    int val = 10;
    int *ptr = &val;
    fu(ptr);
    cout << *ptr << endl;
    return 0;
}
//output: Segmentation fault

