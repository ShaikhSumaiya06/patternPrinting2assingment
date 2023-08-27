
/*
Print the following pattern
Input: n = 5
Output:
      1
    2  2
  3      3
4          4
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows : ";
    cin>>n;  
    
    for(int i=1;i<n;i++) cout<<"  ";
    cout<<1<<" "<<endl;
    for(int i=1;i<n;i++){
        int a=i+1;
        for(int j=1;j<n-i;j++) cout<<"  ";
        cout<<a<<" ";
        for(int k=1;k<=2*i-1;k++) cout<<"  ";
        cout<<a<<" ";
        cout<<endl;
    }
   
}