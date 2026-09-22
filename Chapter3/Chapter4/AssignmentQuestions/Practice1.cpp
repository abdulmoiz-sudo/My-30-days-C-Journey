#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter a  number :: ";
    cin>>num1;

    if(num1>0){
        cout<<"Number is Positive.";

    }
    else if(num1<0){
        cout<<"Number is negaitve";
    }else{
        cout<<"Number is zero";
    }
    return 0;
}