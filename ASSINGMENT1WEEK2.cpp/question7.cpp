// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x=";
    cin>>x;
    cout<<"enter y=";
    cin>>y;
    if(x!=0 && y==0)
    {
        cout<<"point will lies on x-axis"<<endl;
    }
    else if (x==0 && y!=0){
        cout<<"point will lies on y-axis"<<endl;
    }
    else if (x==0 && y==0)
     {
        cout<<"point will lies at the origin"<<endl;

    }
    else {
        cout<<"point will lies on the plane"<<endl;
    }
    return 0;
}