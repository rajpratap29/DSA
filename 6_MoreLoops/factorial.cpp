#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number factorial you want to find: ";
    cin>>num;
    int factorial = 1;
    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
    }
    cout<<"The factorial of: "<<num<<" is: "<<factorial;

    return 0;
}