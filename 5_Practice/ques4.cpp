// display this ap 4,7,10,13,16..... upto n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number till where you want to print this ap: ";
    cin>>n;
    for(int i = 4; i <= n; i+=3){
        cout<<i<<endl;
    }

    return 0;
}