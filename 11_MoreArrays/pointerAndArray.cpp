#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int *ptr = arr;
    cout<<ptr[0]<<endl;
    ptr[0] = 8;
    cout<<ptr[0]<<endl;
    for(int i = 0; i <= 3; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;

    return 0;
}