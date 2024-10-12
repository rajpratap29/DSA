#include<iostream>
using namespace std;
int main(){
    int i = (4 + 7 / 5 * 6 * 6 + 9) % 100;
    // 4 + 1 * 6 * 6 + 9
    // 4 + 36 + 9
    // 49
    // after modulus still 49
    cout<<i;
    
    return 0;
}