#include <iostream>
using namespace std;
int main()
{int x;
cout<<"enter no. of rows";
cin>>x;

for(int j=1;j<=x;j++){

    for(int i=1;i<=2*j-1;i++){    //here the no.of element in the row is same as the row no. so, 1+(j-1)d was used as last term of odd ap.
    if(i%2!=0){
        cout<<i<<" ";
    }
}
cout<<endl;

}


return 0;
}