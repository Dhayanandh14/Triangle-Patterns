#include <iostream>
using namespace std;
void BackSideLeftAngleTriangle(){
   int a,k,j;
   char b;
   cout<<"Enter Number of line: ";
   cin>>a;
   cout<<"Enter Character: ";
   cin>>b;
   int space = 1;
   for(int i=a;i>0;i--){
     for(j=0;j<i;j++){
        cout<<" "<<b;
      }
      cout<<endl; 
      for(k=0;k<space;k++){
        cout<<" ";
      }
      space = space +1;
    }
    cout<<endl;
}
void BackSideRightAngleTriangle(){
    int a;
    char b;
    cout<<"Enter Number of line: ";
    cin>>a;
    cout<<"Enter Character: ";
    cin>>b;
    for(int i=a;i>0;i--){
       for(int j=0;j<i;j++){
          cout<<" "<<b;
        }
        cout<<endl;
    }
    cout<<endl;
}
void BackSideTriangle(){
       int a,k,j;
    char b;
    cout<<"Enter Number of line: ";
    cin>>a;
    cout<<"Enter Character: ";
    cin>>b;
    int space = 1;
    for(int i=a;i>0;i--){
       for(j=0;j<i;j++){
          cout<<" "<<b;
        }
        cout<<endl;
        for(k=0;k<space;k++){
           cout<<" ";
        }
        space = space +1;
    }
    cout<<endl;
}
void LeftAngleTriangle() {
    int a;
    char b;
    int k,j;
    cout<<"Enter Number Of Line: ";
    cin>>a;
    cout<<"Enter Character: ";
    cin>>b;
    for(int i=0;i<a;i++){
       for(k=0;k<a-i;k++){
          cout<<' ';
        }
       for(j=0;j<i+1;j++){
           cout<<" "<<b;
        }
        cout<<endl;
    }
    cout<<endl;
}
void RightAngleTriangle(){
    int a;
    char b;
    cout<<"Enter Number Of Line: ";
    cin>>a;
    cout<<"Enter Character: ";
    cin>>b;
    for(int i=0;i<a;i++){
       for(int j=0;j<i+1;j++){
          cout<<" "<<b;
        }
        cout<<endl;
    }
    cout<<endl;
}
void FullTriangle(){
    int a;
    char b;
    int k,j;
    cout<<"Enter Number Of Line: ";
    cin>>a;
    cout<<"Enter Character: ";
    cin>>b;
    for(int i=0;i<a;i++){
       for(k=0;k<a-i;k++) {
          cout<<' ';
        }
        for(j=0;j<i+1;j++){//write like for(j<k+i)
           cout<<" "<<b;
        }
        cout<<endl;
    }
}
int main()
{
    BackSideLeftAngleTriangle();
    BackSideRightAngleTriangle();
    BackSideTriangle();
    LeftAngleTriangle();
    RightAngleTriangle();
    FullTriangle();
}
//BackSideLeftAngleTriangle
// *****
// ****
// ***
// **
// *
//BackSideRightAngleTriangle
// *****
//  ****
//   ***
//    **
//     *
//BackSideTriangle
//  * * * * *
//   * * * *
//    * * *
//     * *
//      * 
//RightAngleTriangle
//     *
//    **
//   ***
//  ****
// *****
//LeftAngleTriangle
// *
// **
// ***
// ****
// *****
//Full Triangle
//     *
//    * *
//   * * *
//  * * * *
// * * * * *  

    