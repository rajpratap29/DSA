// Take two integer input a and b and find the remainder when a is divided by b
#include<iostream>
using namespace std;
int main(){
    // Using Modulus Operator
    int a = 5;
    int b = 2;
    int c = a % b;
    cout<<c<<endl; // 1

    // Now solving using math
    int x = 5; // x is dividend
    int y = 2; // y is divisor
    int q = x/y; // q is quotient
    int r; // r is remainder
    r = x - (y*q);
    cout<<r<<endl;

    return 0;
}