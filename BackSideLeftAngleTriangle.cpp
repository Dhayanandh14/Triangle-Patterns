#include <iostream>
using namespace std;

int main()
{
   int a,k,j;
   char b;
   cout<<"Enter Number of line: ";
   cin>>a;
   cout<<"Enter Character: ";
   cin>>b;
   int space = 1;
for(int i=a;i>0;i--){
    for(j=0;j<i;j++){
        cout<<b;
    }
    cout<<endl;
    
    for(k=0;k<space;k++){
        cout<<" ";
    }
     space = space +1;
    
     
}
}
// *****
//  ****
//   ***
//    **
//     *                          