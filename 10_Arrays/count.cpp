#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int count = 0;
    int checkDigit;
    for(int i = 0; i < n; i++){
        cout<<"Enter value of "<<i<<"th index: ";
        cin>>arr[i];
    }
    cout<<"Enter value to check how many times present in array: ";
    cin>>checkDigit;
    for(int i = 0; i < n; i++){
        if(checkDigit == arr[i]){
            count++;
        }
    }
    if(count > 0){
        cout<<"The given digit is present in array: "<<count<<" times.";
    }
    else{
        cout<<"The given digit is not present in array not a single time.";
    }

    return 0;
}