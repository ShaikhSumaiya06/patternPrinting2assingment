
/*
Print the following pattern
Input: n = 5
Output:
        *         
      * * *       
    *   *   *     
  *     *     *   
* * * * * * * * * 
  *     *     *   
    *   *   *     
      * * *       
        *         
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"No. of rows : ";
    cin>>n;  
    int m=2*n-1;
    int a=m/2;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==a || j==a || abs(i-j)==a|| i+j==a || i+j==3*a) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
   
}