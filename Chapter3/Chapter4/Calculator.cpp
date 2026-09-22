#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter your first number :: ";
    cin>>num1;
    int num2;
    cout<<"Enter your second number :: ";
    cin>>num2;
     float result;
    char oper;
    cout<<"Choose an operator to perform :: ";
    cin>>oper;

    switch(oper){
        case '+':
        result = num1 + num2;
        cout<<"Result is :: "<<result<<endl;
        break;

        case '-':
        result = num1 - num2;
         cout<<"Result is :: "<<result<<endl;
        break;

        case '*':
          result = num1 * num2;
         cout<<"Result is :: "<<result<<endl;
        break;

        case '/':
         result = (float)num1/(float)num2;
         cout<<"Result is :: "<<result<<endl;
        break;
    }
    return 0;

}