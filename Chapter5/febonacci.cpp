#include<iostream>
using namespace std;
int main()
{
    int num1=0;
    int num2=1;
    int n;
    cout<<"Enter the end number you want in the series :: ";
    cin>>n;
    int third=num1;

    for(int i=2;i<=n;i++){
        third=num1+num2;
        num1=num2;
        num2=third;
         cout<<third<<" ";

    }
    cout<<" "<<endl;

    return 0;
}