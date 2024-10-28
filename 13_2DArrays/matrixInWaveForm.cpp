#include<iostream>
using namespace std;
int main(){
    int rows, columns;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;
    int matrix[rows][columns];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin>>matrix[i][j];
        }
    }

    for(int row = 0; row < rows; row++){
        int i = 0;
        int j = columns - 1;
        if(row % 2 != 0){
            while(i<=j){
                int temp = matrix[row][i];
                matrix[row][i] = matrix[row][j];
                matrix[row][j] = temp;
                i++;
                j--;
            }
        }
    }

    cout<<"The matrix in wave form is: "<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}