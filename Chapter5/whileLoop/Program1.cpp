#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter a Number to check ";
    cin>>age;
    while(age<18){
        cout<<age<<endl;
        age++;
    }

    return 0;
}