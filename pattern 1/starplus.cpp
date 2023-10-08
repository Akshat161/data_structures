#include <iostream>
using namespace std;
int main()

{int x;
cout<<"enter no. of rows and columns";
cin>>x;
for(int j=1;j<=x;j++)
{
    for(int i=1;i<=x;i++){
      if((j==(x+1)/2)){
        cout<<"*";
      }
      else if(i==(x+1)/2){
        cout<<"*";
      }
      else{cout<<" ";
      }
}
cout<<endl;
}
return 0;
}