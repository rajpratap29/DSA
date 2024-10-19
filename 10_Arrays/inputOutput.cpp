#include<iostream>
using namespace std;
int main(){
    int arr[7];
    for(int i = 0; i <= 6; i++){
        cout<<"Enter value for: "<<i<<"th index: ";
        cin>>arr[i];
    }
    for(int i = 0; i <= 6; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}