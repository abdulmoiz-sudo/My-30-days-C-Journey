#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter your first number :: ";
    cin>>num1;
    cout<<"Enter your second number :: ";
    cin>>num2;
    cout<<"Enter your third number :: ";
    cin>>num3;

    int originalnumber;
    cout<<"Enter your original number alltogather :: ";
    cin>>originalnumber;

    if(originalnumber>=100 && originalnumber<=999){
        int result = pow(num1,3)+pow(num2, 3)+pow(num3, 3);

        if(result==originalnumber){
            cout<<"Number is a Armstrong number ";
        }
          else{
        cout<<"Not a Armstrong number";
    }
    }
    else{
        cout<<"Invalid Number";
    }
    return 0;
}