#include<iostream>
using namespace std;
int main()
{ int x,y;
   cout<<"please enter the no. of rows" ;
   cin>>x;
   cout<<"please enter the no. of columns";
   cin>>y;
   for(int j=1;j<=x;j++){
    for(int i=65;i<=y+64;i++){
        cout<<char(i)<<" ";
        }
    cout<<endl;
    }
} 