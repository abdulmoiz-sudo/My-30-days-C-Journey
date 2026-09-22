#include<iostream>
using namespace std;
int main()

{
    float math;
    cout<<"Enter your marks in Mathmatics :: ";
    cin>>math;

    float computer;
    cout<<"Enter your marks in computer :: ";
    cin>>computer;

    float science;
    cout<<"Enter your marks in Science :: ";
    cin>>science;

    float avg = (math + computer + science)/3;
    cout<<"Average of three marks is :: "<<avg<<endl;

    return 0;
     
}