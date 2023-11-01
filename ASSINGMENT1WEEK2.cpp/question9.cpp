// Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character=";
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122 )
    {
        cout<<"it is a alphabet"<<endl;
    }
    else if( ascii>=48 && ascii<=58){
        cout<<"it is a digit"<<endl;
    }
    else {
        cout<<"it is special character"<<endl;
    }
    return 0;
}