#include<iostream>
using namespace std;
int main(){
    int square;
    cout<<"Enter side of square: ";
    cin>>square;
    for(int i = 1; i <= square; i++){
        for(int j = 1; j <= square; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}