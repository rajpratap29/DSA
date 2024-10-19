#include<iostream>
using namespace std;
int main(){

    // int x,y;
    // cout<<"Enter first value: ";
    // cin>>x;
    // cout<<"Enter second value: ";
    // cin>>y;
    // int *p1 = &x;
    // int *p2 = &y;
    // cout<<*p1 + *p2;

    int x,y;
    int *p1 = &x;
    int *p2 = &y;
    cout<<"Enter first value: ";
    cin>>*p1;
    cout<<"Enter second value: ";
    cin>>*p2;
    cout<< *p1 + *p2;


    return 0;
}