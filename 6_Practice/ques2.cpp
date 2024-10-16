// Program to print sum of number and its reverse example input 12 = 12+21
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number whose reverse you want to find: ";
    cin>>num;
    int sum = 0;
    int store = num;
    int reverse = 0;
    int lastDigit;
    while (num > 0)
    {
        reverse = reverse * 10;
        lastDigit = num % 10;
        reverse = reverse + lastDigit;
        num = num / 10;
    }
    sum = reverse + store;
    cout<<"The addition of number and its reverse is: "<<sum;

    return 0;
}