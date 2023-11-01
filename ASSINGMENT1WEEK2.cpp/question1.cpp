// Take 2 integers input and print the greatest of them
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number=";
    cin>>a;
    cout<<"enter second number=";
    cin>>b;
    if(a>b){
        cout<<"first number "<<a<<" is largest"<<endl;
    }
    else {
        cout<<"second number "<<b<<" is largest"<<endl;
    }
    return 0 ;
}