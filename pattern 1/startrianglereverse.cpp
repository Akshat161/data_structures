#include <iostream>
using namespace std;
int main()
{int x;
cout<<"enter no. of rows";
cin>>x;
for(int j=x;j>=1;j--)
{
    for(int i=1;i<=j;i++){
    cout<<"*";
}
cout<<endl;
}
return 0;
}