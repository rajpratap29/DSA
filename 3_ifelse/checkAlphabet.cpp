#include<iostream>
using namespace std;
int main(){
    char ch;
    int temp;
    cout<<"Enter an character to check alphabet: ";
    cin>>ch;
    temp = (int)ch;
    if(temp >= 65 && temp <= 90){
        cout<<"Character: "<<ch<<" is capital alphabet.";
    }
    else if(temp >= 97 && temp <= 122){
        cout<<"Character: "<<ch<<" is small alphabet.";
    }
    else if(temp >= 48 && temp <= 57){
        cout<<"Character: "<<ch<<" is number.";
    }
    else{
        cout<<"Character: "<<ch<<" is not a alphabet.";
    }

    return 0;
}