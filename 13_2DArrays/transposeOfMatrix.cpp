#include<iostream>
using namespace std;
int main(){
    int rows, columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    int arr[rows][columns];
    int newArr[columns][rows];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            newArr[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            cout<<newArr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}