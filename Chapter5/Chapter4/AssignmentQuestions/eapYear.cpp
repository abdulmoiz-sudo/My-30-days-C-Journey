#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter a year :: ";
    cin>>num1;

    if((num1%4==0 && num1%100!=0) || (num1%400==0)){
        cout<<"Its a leap year";
    }
  else{ 
        cout<<"Not a leap year";
    }
    return  0;
}
