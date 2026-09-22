#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cout<<"Enter a natural number :: ";
    // cin>>n;

    // int n;
    // cout<<"Enter a number :: ";
    // cin>>n;
    //  int sum = 0;
    // for(int i=2;i<=n;i+=2){
      
    //      sum+=i;
    //     cout<<sum<<endl;

    int n;
    int sum =0;
    cout<<"Enter a Number :: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
        cout<<sum<<endl;
    }

    }
