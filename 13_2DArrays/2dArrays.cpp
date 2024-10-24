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
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}