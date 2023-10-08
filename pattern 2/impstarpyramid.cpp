#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of rows";
    cin>>n;
    int j;
    for( j=1;j<=n;j++){
       /*for(int i=1;i<=n-j;i++){
        cout<<" ";
       }*/

        for(int i=n;i>=j;i--){
            cout<<" ";
        }

            for(int k=1;k<=2*j-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
        
    }
        
    
