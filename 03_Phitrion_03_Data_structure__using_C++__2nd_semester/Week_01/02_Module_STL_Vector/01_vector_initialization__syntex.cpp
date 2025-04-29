//vector syntex

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   //vector<int>v;//type 1->output->size=0

   //vector<int>v(5);//type 2
   
   //vector<int>v(5,10);//type 3//5=index of vector & 10=all index value

   //vector<int>v2(5,100);//type 4
   //vector<int>v(v2);//type 4

   //int a[5]={1,2,3,4,5};//type 5
   //vector<int>v(a,a+5);

   vector<int>v={1,2,3,4,5};//type 6

   for(int i=0;i<v.size();i++)
   {
     cout<<v[i]<<" ";
   }
   cout<<endl;
   cout<<v.size()<<endl;
    
    return 0;
}