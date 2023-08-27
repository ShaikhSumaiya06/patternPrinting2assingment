
/*
Print the following pattern
Input: n = 4
Output:
* * * * * * * 
* * *   * * *
* *       * *
*           *
*           * 
* *       * * 
* * *   * * * 
* * * * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows : ";
    cin>>n;  

    // upper bridge
    for(int i=1;i<2*n;i++) cout<<"* ";
    cout<<endl;
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++) cout<<"* ";
        for(int k=1;k<2*i;k++) cout<<"  ";
        for(int r=1;r<=n-i;r++) cout<<"* ";
        cout<<endl;
    }
    //lower reverse bridge
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++) cout<<"* ";
        for(int k=1;k<2*(n-i);k++) cout<<"  ";
        for(int r=1;r<=i;r++) cout<<"* ";
        cout<<endl;
    }
    for(int i=1;i<2*n;i++) cout<<"* ";
    cout<<endl;
   
}