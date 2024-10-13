#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check divisible by 5 or 3: ";
    cin>>n;
    if(n % 5 == 0 || n % 3 == 0){
        cout<<"The number is divisible by either 5 or 3.";
    }
    else{
        cout<<"The number is not divisible by either 5 or 3.";
    }

    return 0;
}