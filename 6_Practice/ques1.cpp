//Program to print sum of digit of all even digits
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number whose sum digit you want: ";
    cin>>num;
    int temp;
    int sum = 0;
    while(num > 0){
        temp = num % 10;
        if(temp % 2 == 0){
            sum = sum + temp;
        }
        num = num / 10;
    }
    cout<<"The sum of even digits is: "<<sum;

    return 0;
}