#include <iostream>
using namespace std;
int main() {
 int a;
 char b;
 cout<<"Enter Number Of Line: ";
 cin>>a;
 cout<<"Enter Character: ";
 cin>>b;
 for(int i=0;i<a;i++){
   for(int j=0;j<i+1;j++){
     cout<<b;
   }
   cout<<endl;
 }

}