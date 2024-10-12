#include<iostream>
using namespace std;

int main(){

    cout<<"Variable and their declaration: "<<endl;
    
    int x;
    x = 7;
    cout<<x<<endl; // 7
    x = 10;
    cout<<x<<endl; // 10

    int y;
    y = 10;
    y = 15;
    y = 20;
    cout<<y<<endl; // 20
    y = y + 10;
    cout<<y<<endl; // 30
    y+=5;
    cout<<y<<endl; // 35

    int z = 29; // another way to assign value to variables
    z = z * 2;
    cout<<z<<endl; // 58
    
    return 0;
}