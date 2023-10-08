/*#include<iostream> //normal variables
using namespace std;
int main(){
    int n;
 cout<<"enter the number";
 cin>>n;
 int lastdigit=n%10;
 while(n>9){
    n=n/10;
 }
 int firstdigit=n;
 cout<<"last digit "<<lastdigit<<endl;
 cout<<"first digit "<<firstdigit;
}*/

//using pointers
#include<iostream>
using namespace std;

int find(int n,int *ptr1,int *ptr2){
   
   *ptr2=n%10;
   while(n>9){
      n=n/10;
   }
   *ptr1=n;
   return 0;

}


int main(){
int lastdigit;
int firstdigit;
int n;
cin>>n;
  int* ptr2=&lastdigit;
  int* ptr1=&firstdigit;
  find(n,ptr1,ptr2);
  cout<<firstdigit<<" "<<lastdigit;
}