/*
Print the following pattern
Input: n = 4
Output:
A B C D E F G 
A B C   E F G
A B       F G
A           G 
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++) cout<<(char)(i+64)<<" ";
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        char ch='A';
        for(int j=1;j<=n-i;j++){
             cout<<ch<<" ";
             ch++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"  ";
            ch++;
        }
        for(int r=1;r<=n-i;r++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}