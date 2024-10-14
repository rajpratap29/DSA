#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number whose table to want to print: ";
    cin>>num;
    for(int i = 1; i <= 10; i++){
        int temp = num * i;
        cout<<temp<<endl;
    }

    return 0;
}