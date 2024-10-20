#include<iostream>
using namespace std;
void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int arr[]){
    arr[0] = 9;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    // accessing the elements of array in another function
    // updation, pass by value / reference ?
    display(arr, size);
    change(arr);
    display(arr, size);

    return 0;
}