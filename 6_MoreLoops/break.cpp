#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to check prime: ";
    cin>>num;
    int temp = 1;
    for(int i = 2; i < (num-1); i++){
        if(num % i == 0){
            temp = 0;
            break;
        }
    }
    if(temp == 0){
        cout<<"Composite";
    }
    else if(num == 1){
        cout<<"Neither Prime nor composite";
    }
    else{
        cout<<"Prime";
    }

    return 0;
}