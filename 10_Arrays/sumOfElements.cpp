#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cout<<"Enter value of "<<i<<"th index: ";
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    cout<<"The addition of elements of array is: "<<sum;

    return 0;
}