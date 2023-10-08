#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of side of rhombus ";
    cin>>n;
    for(int j=1;j<=n;j++){
        for(int i=n-1;i>=j;i--){
            cout<<" ";
        }
for(int k=1;k<=n;k++ ){
    cout<<"* ";
}
cout<<endl;
    }


}