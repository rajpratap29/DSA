// display this gp 1,2,4,8,16,32 ... upto n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number till where you want gp series: ";
    cin>>n;
    for(int i = 1; i <= n; i*=2){
        cout<<i<<"\t";
    }

    return 0;
}