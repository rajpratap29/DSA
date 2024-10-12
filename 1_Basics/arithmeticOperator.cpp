#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 2;
    cout<<x/y<<endl;
    cout<<x*y<<endl;
    cout<<x+y<<endl;
    cout<<x-y<<endl;

    cout<<"Increament and Decreament operator: "<<endl;
    int a = 10;
    a++;
    cout<<a<<endl; // 11
    a--;
    a--;
    cout<<a<<endl; // 9 

    int b = 5;
    cout<<b++<<endl; // 5 post increament 
    int c = 5;
    cout<<++c<<endl; // 6 pre increament

    return 0;
}