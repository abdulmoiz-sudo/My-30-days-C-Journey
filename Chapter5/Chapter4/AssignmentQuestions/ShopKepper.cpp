#include<iostream>
using namespace std;
int main()
{

    cout<<"-----------------------------------------------\n";
    cout<<"  Welcome to Ibn-Sina Store \n";
    cout<<"-----------------------------------------------\n";

    double totalAmount;
    double discount;
    double total;
    cout<<"Enter your total Amount in RS :: ";
    cin>>totalAmount;
    
    char isMember;
    cout<<"Tell you are a Member or not. Reply with (Y/N):: ";
    cin>>isMember;
     
    double card;
    switch(isMember){
        case 'Y':
        cout<<"Enter your card member :: ";
        cin>>card;
        if(card>=100 && card<=456)
        {
        if(totalAmount>=1000){
             discount = totalAmount*0.20;
             total = totalAmount-discount;
            cout<<"Your total Amount is "<<total<<endl;
        }
        
    
        else if(totalAmount<1000){
             discount = totalAmount*0.05;
             total = totalAmount-discount;
             cout<<"Non Member total bill is "<<total<<endl;
        }
    }

        else{
            cout<<"Enter a Valid Number";
        
        }
    
         break;
        case'N':
         if(totalAmount>=1000){
            discount = totalAmount*0.10;
             total = totalAmount-discount;
            cout<<"Your total Amount is "<<total<<endl;
         }
            else{
            cout<<"Total BIll :: "<<totalAmount<<endl;
            }
        
        }
return 0;
}