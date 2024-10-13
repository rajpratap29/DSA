#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check even or odd: ";
    cin>>n;
    if(n % 2 == 0){
        cout<<"The number: "<<n<<" is even.";
    }
    else{
        cout<<"The number: "<<n<<" is odd.";
    }

    return 0;
}