#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check if a number is three digit: ";
    cin>>n;
    if(n >= 100 && n <= 999){
        cout<<"The given number: "<<n<<" is three digit number.";
    }
    else{
        cout<<"The given number: "<<n<<" is not three digit number.";
    }

    return 0;
}