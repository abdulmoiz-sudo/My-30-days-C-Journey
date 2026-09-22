#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int Integer=66;
    float Decimal = 1.45678907657;
    char Character = 77;
    bool isAngle= true;
    double BigDecimal = 1.45678907657;

    cout<<"Size of Int is :: "<<sizeof(Integer)<<endl;
    cout<<"Int used to store Whole number "<<Integer<<endl;

    cout<<"Size of  Float is ::"<<sizeof(float)<<"\n";
    cout<<setprecision(13)<<"float is used to store Decimal number "<<Decimal<<"\n";

    cout<<"Size of char is ::"<<sizeof(char)<<"\n";
    cout<<"char is used to store single character"<<Character<<"\n";

    cout<<"Size of bool is ::"<<sizeof(bool)<<"\n";
    cout<<"bool is used to store true or false "<<isAngle<<"\n";

    cout<<"Size of double is ::"<<sizeof(double)<<"\n";
    cout<<setprecision(13)<<"double is used to store large decimal numbers "<<BigDecimal<<"\n";


    return 0;
}