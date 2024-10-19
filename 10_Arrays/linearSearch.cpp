#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int value;
    bool flag = false;
    for(int i = 0; i < n; i++){
        cout<<"Enter value of "<<i<<"th index: ";
        cin>>arr[i];
    }
    cout<<"Enter the value which you want to find in array: ";
    cin>>value;
    for(int i = 0; i < n; i++){
        if(value == arr[i]){
            cout<<"Value found in array at position "<<i;
            flag = true;
            break;
        }
    }
    if(!flag){
        cout<<"Given value is not present in array.";
    }

    return 0;
}