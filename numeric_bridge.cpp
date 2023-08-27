/*
Print the following pattern
Input: n = 4
Output:
1 2 3 4 5 6 7 
1 2 3   3 2 1 
1 2       2 1 
1           1 
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++) cout<<i<<" ";
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        
        for(int j=1;j<=n-i;j++){
             cout<<j<<" ";
             
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"  ";
            
        }
        for(int r=n-i;r>0;r--){
            cout<<r<<" ";
            
        }
        cout<<endl;
    }
}