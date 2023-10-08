#include<iostream>
using namespace std;
int fact(int x){
if(x==1){
    return 1;
}
else{
    int f=x*fact(x-1);
    return f;
}
}
 int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int k= fact(n);
    cout<<k;

}
/*#include<iostream>
using namespace std;

int fact(int x){

if(x==1)
  {return 1;
   }
else{
   return x*fact(x-1);
   
}
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int f=fact(n);
    cout<<f;
     }*/