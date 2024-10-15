#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number whose reverse you want to find: ";
    cin>>num;
    int reverse = 0;
    int lastDigit;
    while (num > 0)
    {
        reverse = reverse * 10;
        lastDigit = num % 10;
        reverse = reverse + lastDigit;
        num = num / 10;
    }
    cout<<reverse;

    return 0;
}