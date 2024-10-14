#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number for how many times you want to print hello: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cout<<"Hello"<<endl;
    }

    return 0;
}