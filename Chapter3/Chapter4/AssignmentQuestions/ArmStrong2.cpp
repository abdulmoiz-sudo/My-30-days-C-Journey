#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    // Steo1: Taking three digit number from user seprately 
    int n1,n2,n3;
    cout<<"Enter your digit 1 :: ";
    cin>>n1;

    cout<<"Enter your digit 2 :: ";
    cin>>n2;

    cout<<"Enter your digit 3 :: ";
    cin>>n3;
     
    // Step2: Saving it to another valiable 
    int num = (n1*100)+(n2*10)+n3;

    int cube= pow(n1,3) + pow(n2,3) + pow(n3,3);

     if(cube=num){
        cout<<"Its an armstrong number";
     }
     else {
        cout<<"Its not a armstrong number";
     }

}