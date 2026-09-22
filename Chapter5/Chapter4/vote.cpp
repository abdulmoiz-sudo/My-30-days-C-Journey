#include<iostream>
using namespace std;
int main()
{
    int age;

    cout<<"Enter your age :: ";
    cin>>age;

    if(age>=18){
        cout<<"Adult, Congragulation you are eligibel for vote. ";

    }
    else{
        cout<<"Not an Adult, You are not Eligibel for vote. ";
    }
      
    return 0;
}