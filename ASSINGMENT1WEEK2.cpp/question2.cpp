// Given the radius of the circle, predict whether numerically area>cicum
#include<iostream>
using namespace std;
int main(){
    float radius,area,circumference;
    cout<<"enter radius=";
    cin>>radius;
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    if(area>circumference){
        cout<<"area is greater than circumference"<<endl;
    }
    else {
        cout<<"circumference is greater than area"<<endl;
    }
    return 0;
}