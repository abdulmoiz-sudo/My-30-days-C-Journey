#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Enter a number to print the pattern sries :: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){   //also can be done by n+1 for update
            cout<<i<<" ";
        }
        
    cout<<endl;  
    }
    cout<<i<<endl;
    
    return 0;
}