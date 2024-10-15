#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to find nth fibonacci number: ";
    cin>>num;
    int fibo_1 = 1;
    int fibo_2 = 1;
    int fibo = 0;
    for(int i = 3; i <= num; i++){
        fibo = fibo_1 + fibo_2;
        fibo_1 = fibo_2;
        fibo_2 = fibo;
    }
    if(num == 1){
        cout<<"The nth fibonacci is: "<<fibo_1;
    }
    else if(num == 2){
        cout<<"The nth fibonacci is: "<<fibo_2;
    }
    else{
        cout<<"The nth fibonacci is: "<<fibo;
    }

    return 0;
}