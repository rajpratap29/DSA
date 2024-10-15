#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter number to find power: ";
    cin>>num;
    float power;
    cout<<"Enter power(exponent) for a number: ";
    cin>>power;
    float powerOfNum = 1;
    bool flag = true;
    if(power < 0){
        flag = false;
        power = -power;
    }
    for(int i = 1; i <= power; i++){
        powerOfNum = powerOfNum * num;
    }
    if(flag == false){
        powerOfNum = 1 / powerOfNum;
        power = -power;
        cout<<"The power of: "<<num<<" raise to: "<<power<<" is: "<<powerOfNum;
    }
    else
    {
        cout<<"The power of: "<<num<<" raise to: "<<power<<" is: "<<powerOfNum;
    }
    return 0;
}