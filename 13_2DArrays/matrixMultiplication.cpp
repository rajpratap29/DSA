#include<iostream>
using namespace std;
int main(){
    int row1, column1, row2, column2;
    cout<<"Enter number of rows for first matrix: ";
    cin>>row1;
    cout<<"Enter number of columns for first matrix: ";
    cin>>column1;
    cout<<"Enter number of rows for second matrix: ";
    cin>>row2;
    cout<<"Enter number of columns for second matrix: ";
    cin>>column2;

    if(column1 == row2){
        int firstMatrix[row1][column1];
        int secondMatrix[row2][column2];
        int newMatrix[row1][column2];
        cout<<"Enter values of first matrix: "<<endl;
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column1; j++){
                cin>>firstMatrix[i][j];
            }
        }
        cout<<"Enter values of second matrix: "<<endl;
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < column2; j++){
                cin>>secondMatrix[i][j];
            }
        }

        // loop for creating new matrix
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column2; j++){
                newMatrix[i][j] = 0;
                for(int k = 0; k < row2; k++){
                    newMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }
        
        cout<<"Multiplication of two matrices is: "<<endl;
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < column2; j++){
                cout<<newMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Multiplication of matrix is not possible.";
    }

    return 0;
}