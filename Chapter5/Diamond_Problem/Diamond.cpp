#include<iostream>
using namespace std;
int main()
{
    int n=6;

    // First Half Phyramid from 1 to 7 in odd digit. 

    for(int i=1;i<=n;i++){

        // first inner loop for number of spaces. 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // second and last inner loop for printe the stars.
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Second Half Phyramid. 
    for(int i=n;i>=1;i--){
         // first inner loop for number of spaces. 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // second and last inner loop for printe the stars.
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}