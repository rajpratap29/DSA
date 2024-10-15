#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number whose sum digit you want: ";
    cin>>num;
    int sum = 0;
    while(num > 0){
        sum = sum + (num % 10);
        num = num / 10;
    }
    cout<<"The sum of digits is: "<<sum;

    return 0;
}