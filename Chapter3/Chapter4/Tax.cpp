#include<iostream>
using namespace std;
int main()
{
    cout<<"----------------------------------------\n";
    cout<<"   Welcome to Income Tax Calculator.     \n";
    cout<<"----------------------------------------\n";
    
    float income;
    float add;
    float final;
    cout<<"Enter your montly income :: ";
    cin>>income;

    if(income<=500000){
        cout<<"You are charge 0% tax. income is low.";
    }

    else if(income<=1000000){
        add = income*0.2;
         final = income-add;
        cout<<"You are above average 20% tax applied."<<add<<endl;
        cout<<"Your final amount after tax is :: "<<final<<endl;
    }
    
    else{
        add = income*0.3;
         final = income-add;
        cout<<"You are above average 30% tax applied."<<add<<endl;
        cout<<"Your final amount after tax is :: "<<final<<endl;
    }
    return 0;
}