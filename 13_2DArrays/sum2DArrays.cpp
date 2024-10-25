#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    int columns;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    int arr[rows][columns];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<<"Enter value for "<<i<<"th row and "<<j<<"th column: ";
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of 2D Array is: "<<sum;
    return 0;
}