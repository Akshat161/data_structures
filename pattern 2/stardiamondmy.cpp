#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the no. of rows";
    cin>>m;
    int j;
    int n=(m+1)/2;
    for( j=1;j<=n;j++){
       

        for(int i=n-1;i>=j;i--){
            cout<<" ";
        }

            for(int k=1;k<=2*j-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
for(int q=1;q<=n;q++){
    for(int t=1;t<=q;t++){
        cout<<" ";
    }
    for(int r=2*n-3;r>=2*q-1;r--){
        
                cout<<"*";
                
            }



    cout<<endl;
}
}
        
    
