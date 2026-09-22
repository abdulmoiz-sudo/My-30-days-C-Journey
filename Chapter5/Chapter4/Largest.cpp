#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter your first number :: ";
    cin>>num1;
    
    int num2;
    cout<<"Enter your second number :: ";
    cin>>num2;

    if(num1>num2){
        cout<<num1<<" "<<"is greater then "<<" "<<num2;

    }
    else{
        cout<<num2<<" Second number is Greater";
    }
    return 0;

}