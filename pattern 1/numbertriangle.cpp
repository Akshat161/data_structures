#include <iostream>
using namespace std;
int main()
{int x;
cout<<"enter no. of rows";
cin>>x;
for(int j=1;j<=x;j++)
{
    for(int i=1;i<=j;i++){
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}
