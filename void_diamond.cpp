
/*
Print the following pattern
Input: n = 5
Output:
        * 
      *   *
    *       * 
  *           * 
*               * 
  *           *
    *       *
      *   * 
        * 
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows : ";
    cin>>n;
    
    // printing first star
    for(int i=1;i<n;i++) cout<<"  ";
    cout<<"* "<<endl;
    //printing upper part
    for(int i=1;i<n-1;i++){
      for(int j=1;j<n-i;j++) cout<<"  ";
      cout<<"* ";
      for(int k=1;k<=2*i-1;k++) cout<<"  ";
      cout<<"* ";
      cout<<endl;
    }
    //printing lower part
    for(int i=1;i<n;i++){
      for(int j=1;j<=i-1;j++) cout<<"  ";
      cout<<"* ";
      int m=2*(n-i);
      for(int k=1;k<m;k++) cout<<"  ";
      cout<<"* ";
      cout<<endl;
    }
    // print last star
    for(int i=1;i<n;i++) cout<<"  ";
    cout<<"* ";
    
}