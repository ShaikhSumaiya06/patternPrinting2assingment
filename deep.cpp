/*
Print the following pattern
Input: n = 5
Output:
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
  
    for(int i=1;i<n;i++){
      // spaces
      for(int j=1;j<=i-1;j++) cout<<"  ";
      // stars
      cout<<"* ";
      // spaces
      int m=2*(n-i);
      for(int k=1;k<m;k++)cout<<"  ";
      //stars
      cout<<"* ";
      cout<<endl;
    }
    // printing the last number
    for(int i=1;i<n;i++) cout<<"  ";
    cout<<"* ";
}