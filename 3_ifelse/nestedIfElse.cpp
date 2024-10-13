#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number to check if divisible by 5 or 3 but not by 15: ";
    cin>>number;
    if(number % 5 == 0 || number % 3 == 0){
        if(number % 15 != 0){
            cout<<"The number: "<<number<<" is divisible by 5 or 3 but not by 15.";
        }
        else{
            cout<<"The number: "<<number<<" is divisible by 5 or 3 and also div by 15.";
        }
    }
    else{
        cout<<"The number: "<<number<<" is not divisible by either 5 or 3.";
    }

    return 0;
}