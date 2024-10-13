#include<iostream>
using namespace std;
int main(){
    int n;
    int temp;
    cout<<"Enter a integer number whose absolute you want to find: ";
    cin>>n;
    if(n < 0){
        temp = n * -1;
        cout<<"Absolute of: "<<n<<" is: "<<temp;
    }
    else{
        cout<<"Absolute of: "<<n<<" is: "<<n;
    }

    return 0;
}