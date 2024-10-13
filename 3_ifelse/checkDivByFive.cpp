#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to divisible by five: ";
    cin>>n;
    if(n % 5 == 0){
        cout<<"The number: "<<n<<" is divisible by five.";
    }
    else{
        cout<<"The number: "<<n<<" is not divisible by five.";
    }

    return 0;
}