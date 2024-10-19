// Not recommended
#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;

}

int main(){
    int a = 10, b = 5;
    swap(a, b);
    cout<<"a = "<<a<<", b = "<<b;

    return 0;
}