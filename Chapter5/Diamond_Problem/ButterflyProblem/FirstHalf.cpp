#include<iostream>
using namespace std;
int main()
{
     int n=4;
    //  Outer loop
    for(int i=1;i<=n;i++){
        // Inner Loop 1.
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        // Inner Loop 2.
        for(int k=1;k<=2*(n-i);k++){
            cout<<" ";
        }

        // Inner Loop3.
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
       for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        // Inner Loop2.
        for(int l=1;l<=2*(n-i);l++){
            cout<<" ";
        }
        // Inner Loop3.
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
  

}