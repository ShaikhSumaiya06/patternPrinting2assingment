/*
Print the following pattern
Input: n = 4
Output:
      A 
    B A B
  C B A B C 
D C B A B C D
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<"  ";
        for(int k=i;k>0;k--) cout<<(char)(k+64)<<" ";
        for(int r=1;r<=i-1;r++) cout<<(char)(r+65)<<" ";
        cout<<endl;
    }
}