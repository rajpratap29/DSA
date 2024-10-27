// it will only work for square matrix

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number of rows/columns for sqaure matix: ";
    cin>>n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(i!=j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    cout<<"Transpose of matrix is: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}