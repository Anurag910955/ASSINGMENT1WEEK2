// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    float  length,breadth,area , perimeter;
    cout<<"enter length=";
    cin>>length;
    cout<<"enter breadth=";
    cin>>breadth;
    area=length+breadth;
    perimeter= 2*(length+breadth);
    if(area>perimeter){
        cout<<"area is greater than perimeter"<<endl;
    }
    else {
        cout<<"perimeter is greater than area"<<endl;
    }
    return 0;
}