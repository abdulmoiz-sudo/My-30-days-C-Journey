#include<iostream>
using namespace std;
int main()
{
    int n=4;
    // Outer Loop 
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