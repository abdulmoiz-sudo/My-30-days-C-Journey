#include<iostream>
using namespace std;
int main()
{
    // bool isAdult;

    // int age;
    // cout<<"Enter your age :: ";
    // cin>>age;

    // isAdult = age>=18? true : false;
    // cout<<"Result :: "<<isAdult<<endl;
   
    // int islarge;
    // int num1;
    // cout<<"Enter your first number :: ";
    // cin>>num1;

    // int num2;
    // cout<<"Enter your second number :: ";
    // cin>>num2;
     
    // islarge = num1>num2? num1:num2;
    // cout<<"Result :: "<<islarge<<endl;

    int num1;
    cout<<"Enter your number :: ";
    cin>>num1;

    int result = num1%2==0? true:false;

    cout<<"Number is 0 mean odd and 1 mean even  "<<result<<endl;
    
    return 0;
}