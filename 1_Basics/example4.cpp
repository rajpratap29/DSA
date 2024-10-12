// calculating simple interest
#include<iostream>
using namespace std;
int main(){
    float principal = 10000, ROI = 5, time = 2, si;
    si = (principal * ROI * time) / 100;
    cout<<si;

    return 0;
}