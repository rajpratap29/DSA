#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number whose digit you want to count: ";
    cin>>num;
    int temp = num;
    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    if(temp == 0){
        cout<<"Total digits: "<<"1";
    }
    else{
        cout<<"Total digits: "<<count;   
    }

    return 0;
}