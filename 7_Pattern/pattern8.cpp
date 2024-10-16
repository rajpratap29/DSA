#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to print pattern: ";
    cin>>n;
    char ascii = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<ascii;
            ascii++;
        }
        ascii = 'A';
        cout<<endl;
    }

    return 0;
}