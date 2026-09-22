#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout<<"Enter your marks :: ";
    cin>>marks;

    if(marks>33){
        cout<<"Congratulation you have passed the exam.";
    }
    else{
        cout<<"Unlucky, you didnot succeed this time. but you can do it keep the pace a bit up.";
    }
    return 0;
}