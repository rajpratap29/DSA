// take to alphabet input and find difference between them
#include<iostream>
using namespace std;
int main(){
    char ch1, ch2;
    cout<<"Enter first alphabet: ";
    cin>>ch1;
    cout<<"Enter second alphabet: ";
    cin>>ch2;
    int a = (int)ch1;
    int b = (int)ch2;
    int c;
    if(a > b){
        c = a - b;
    }
    else{
        c = b - a;
    }
    cout<<"Difference between two alphabet is: "<<c;

    return 0;
}