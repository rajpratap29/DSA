// Take input in integer and get half of number
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter an integer number whose half you want to check: ";
    cin>>x;
    float y = (float)x;
    float result = y / 2;
    cout<<"Half of "<<x<<" is: "<<result;

    return 0;
}