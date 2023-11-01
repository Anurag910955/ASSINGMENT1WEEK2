// Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three points fall on one straight line.
#include<iostream>
using namespace std;
int main(){
float x1, y1,x2,y2,x3,y3;
cout<<"enter point (x1,y1)=";
cin>>x1>>y1;
cout<<"enter point (x2,y2)=";
cin>>x2>>y2;
cout<<"enter point (x2,y3)=11";
cin>>x3>>y3;
float slop1 ,slop2;
slop1 =(y2-y1)/(x2-x1);
slop2 =(y3-y2)/(x3-x2);
if (slop1==slop2){
    cout<<"all three points fall on one straight line"<<endl;
}
else {
    cout<<"points does not fall on one straight line"<<endl;
}
return 0;
    }