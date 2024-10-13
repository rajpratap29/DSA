#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number whose you want to check if div by both 5 and 3: ";
    cin>>n;
    if(n % 5 == 0 && n % 3 == 0){
        cout<<"The number: "<<n<<" is divisible by 5 and 3.";
    }
    else{
        cout<<"The number: "<<n<<" is not divisible by 5 and 3.";
    }

    return 0;
}