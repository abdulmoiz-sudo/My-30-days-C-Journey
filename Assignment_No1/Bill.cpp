#include<iostream>
using namespace std;
int main()
{
    cout<<"---------------------------------------------\n";
    cout<<"  Welcome to the Bill Calculator Program\n ";
    cout<<"---------------------------------------------\n";

    float pencil;
    cout<<"Enter the price of the pencil :: ";
    cin>>pencil;

    float eraser;
    cout<<"Enter the price of the eraser :: ";
    cin>>eraser;

    float pen;
    cout<<"Enter the amount of the pen :: ";
    cin>>pen;

    float total = pencil + eraser + pen;
    float gst = total *0.18;
    float finalamount = total + gst;
    cout<<"Total amount is :: "<<total<<endl;

    cout<<"----------------------------------------------\n";
    cout<<"    GST amount is 18%:: "<<gst<<endl;
    cout<<"    Total :: "<<finalamount<<endl;
    cout<<"----------------------------------------------\n";

    return 0;
}
