#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter number whose fractional part you want to seperate: ";
    cin>>x;
    int y = (int)x;
    if(y<0){
        y = y - 1;
    }
    x = x - y;
    cout<<x;

    return 0;
}