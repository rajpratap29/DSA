#include<iostream>
using namespace std;

int fact(int value){
    int factorial = 1;
    for(int i = 1; i <= value; i++){
        factorial *= i;
    }
    return factorial;
}

int combination(int n, int r){
    int ncr = fact(n) / (fact(r) * fact(n-r));
    return ncr;
}

int main(){
    int n;
    cout<<"Enter number of lines: ";
    cin>>n;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}