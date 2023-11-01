// If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.
#include<iostream>
using namespace std;
int main(){
    float A,B,C;
    cout<<"enter marks of student A=";
    cin>>A;
    cout<<"enter marks of student B=";
    cin>>B;
    cout<<"enter marks of student C=";
    cin>>C;
    if(A<B && A<C){
        cout<<" A has least marks"<<endl;
    }
    else if(B<A && B<C){
        cout<<"B has least marks"<<endl;
    }
    else if(C<B && C<A){
        cout<<"C has least marks"<<endl;
    }
    else {
        cout<<" All student has equal marks"<<endl;
    }
    return 0;
}