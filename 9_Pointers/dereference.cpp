#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;
    cout<<*p<<endl; // it is dereference operator

    cout<<x<<endl; // 10
    *p = 6;
    cout<<x<<endl; // 6

    return 0;
}