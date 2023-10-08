#include<iostream>
using namespace std;

int main(){
    int  n;
    cout<<"enter the no. of lines ";
    cin>>n;
   int m=n/2+1;
   
for(int i=m;i>=1;i--){
    for( int j=0;j<m-i;j++){
        cout<<" ";
    }
    


   
     for(int j =2*i-1;j>=1;j--){
        if(j%2!=0){
            cout<<"1";
        }
        else{cout<<"0";}
       }
        cout<<endl;
     }


int p=n/2-1;
for(int i=1;i<=p;i++){
    for(int j=p;j>=i;j--){
        cout<<" ";
    }

    for(int j=1;j<=2*i+1;j++){
        if(j%2!=0){
            cout<<"1";
        }
        else{cout<<"0";}
       }
        cout<<endl;

    }

}

