#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,523,23,4,24,3422,32,23,4,23,423,342,3,24,23,23,32};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Size of array is: "<<size;

    return 0;
}