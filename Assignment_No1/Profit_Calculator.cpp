#include<iostream>
using namespace std;
int main()
{
    cout<<"------------------------------------------------------\n";
    cout<<"    Welcome to Islamic Sharih Profit Calculator\n";
    cout<<"------------------------------------------------------\n";

    double amount;
    cout<<"Enter the amount deposited in the bank :: ";
    cin>>amount;

    cout<<"Profit rate for this month is  :: 15%"<<endl;
    cout<<"Days in month are  :: 30 "<<endl;

    double profit = (amount *0.15*30)/365.0;
    double finalamount = amount + profit;
    cout<<"Profit for this month is :: "<<profit;
    cout<<"\nFinal amount after profit is :: "<<finalamount;

    return 0;

}