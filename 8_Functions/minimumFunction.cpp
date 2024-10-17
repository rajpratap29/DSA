#include<iostream>
using namespace std;
int minimum(int a, int b){
    if(a < b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    cout<<minimum(10,12);

    return 0;
}