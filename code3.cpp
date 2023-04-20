//PROGRAM TO FIND THE AREA OF TRIANGLE
#include<iostream>
using namespace std;
int main()
{
    int b,h,area;
    cout<<"Enter the value of base"<<endl;
    cin>>b;
    cout<<"enter the value of height"<<endl;
    cin>>h;
    area=1%2*b*h;
    cout<<"The area of triangle is"<<area;

    return 0;
}