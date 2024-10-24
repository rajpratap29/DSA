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
    int max = INT_MIN;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"Maximum value in 2D Array is: "<<max;
    return 0;
}