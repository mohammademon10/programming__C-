/*
input:
3+2+1
output:
1+2+3
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i+=2){
        for(int j=0;j<n-i-2;j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
