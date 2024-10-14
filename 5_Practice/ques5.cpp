// display this gp 3,12,48.....upto n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n till where you want to print gp: ";
    cin>>n;
    for(int i = 3; i <= n; i*=4){
        cout<<i<<endl;
    }

    return 0;
}