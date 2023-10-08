#include <iostream>
using namespace std;
int main()
{int x,y;
cout<<"enter no. of rows";
cin>>x;
cout<<"enter no. of columns";
cin>>y;
for(int j=1;j<=x;j++)
{
    for(int i=1;i<=y;i++){
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}
