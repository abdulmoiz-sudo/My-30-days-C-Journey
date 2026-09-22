#include<iostream> 
using namespace std;
int main()
{
    
    cout<<"--------------------------------------------------\n";
    cout<<"         Welcome to Coffee Express \n";
    cout<<"--------------------------------------------------\n";


    float coffee;
    cout<<"Enter price for 1 cup of coffee :: ";
    cin>>coffee;

    int quantity;
    cout<<"Enter the quantity of coffee you want to buy :: ";
    cin>>quantity;

    float subtotal = coffee * quantity;
    cout<<"Subtotal for "<<quantity<<" cups of coffee is :: "<<subtotal<<endl;

    float tax = subtotal * 0.05;
    cout<<"Tax for "<<quantity<<" cups of coffee is :: "<<tax<<endl;

    cout<<"--------------------------------------------------\n";
    float total = subtotal + tax;
    cout<<"Total amount to be paid for "<<quantity<<" cups of coffee is :: "<<total<<endl;

      return 0;

}