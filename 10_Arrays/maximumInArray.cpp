#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int max;
    for(int i = 0; i < n; i++){
        cout<<"Enter value of "<<i<<"th index: ";
        cin>>arr[i];
    }
    max = arr[0];
    for(int i = 1; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Max value present in array is: "<<max<<endl;
    int secondMax = arr[0];
    for(int i = 1; i < n; i++){
        if((arr[i] != max) && (secondMax < arr[i])){
            secondMax = arr[i];
        }
    }
    cout<<"Second Max value present in array is: "<<secondMax<<endl;

    return 0;
}