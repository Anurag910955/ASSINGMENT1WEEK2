// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    float a,b,c; // a,b,c are the sides of triangle
    cout<<"enter a=";
    cin>>a;
    cout<<"enter b=";
    cin>>b;
    cout<<"enter c=";
    cin>>c;
    if(a==b && b==c && c==a){
        cout<<" Triangle is equilateral"<<endl;
    }
    else if(a==b || b==c || c==a){
        cout<<"Triangle is scalene"<<endl;

    }
    else {
        cout<<"Triangle is isosceles"<<endl;
    }
return 0;
}