#include <iostream>
using namespace std;
int main()
{int x;
cout<<"enter no. of rows";
cin>>x;   //remember the pattern of doing these questions index values i and j have to be observed and the pattern have to be set accordingly        
for(int j=1;j<=x;j++)
{
    for(int i=1;i<=j;i++){
    if((i%2!=0)&&(j%2!=0)){
        cout<<"1";
    }
    else if((i%2==0)&&(j%2==0))
    {
       cout<<"1"; 
    }
    else{
        cout<<"0";
    }
    
}
cout<<endl;
}
return 0;
}