#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks :: ";
    cin>>marks;

    if(marks>=90){
        cout<<"You pass with Grade A";
    }
    else if(marks>=80){
        cout<<"You pass with Grade B";
    }
    else{
        cout<<"C";
    }

    return 0;
}