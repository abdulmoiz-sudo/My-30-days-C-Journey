#include<iostream>
using namespace std;
int main()
{
    int n=1;

    for(int i=7;i>=1;i--){
        for(int j=1;j<=(n+i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}