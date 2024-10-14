// display this ap 1,3,5,7,9,11 upto n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number till where you want ap series: ";
    cin>>n;
    for(int i = 1; i <= n; i+=2){
        cout<<i<<"\t";
    }

    return 0;
}