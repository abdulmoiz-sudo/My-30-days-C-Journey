#include<iostream>
#define PI 3.1415
using namespace std;
 int main()
 {
    double  rad;
   
    cout<<"Ener the value of radius in a circle :: ";
    cin>>rad;

      double area = PI * rad * rad;
      cout<<"Area of circle is :: "<<area;

    return 0;
 }