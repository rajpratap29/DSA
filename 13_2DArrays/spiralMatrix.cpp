// Printing matrix in spiral form 
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
    int minr = 0;
    int minc = 0;
    int maxr = rows - 1;
    int maxc = columns - 1;

    while(minr <= maxr && minc <= maxc){
        // Right
        for(int j = minc; j <= maxc; j++){
            cout<<matrix[minr][j]<<" ";
        }
        minr++;
        if(minr > maxr || minc > maxc) break;

        //Down
        for(int i = minr; i <= maxr; i++){
            cout<<matrix[i][maxc]<<" ";
        }
        maxc--;
        if(minr > maxr || minc > maxc) break;

        //Left
        for(int j = maxc; j >= minc; j--){
            cout<<matrix[maxr][j]<<" ";
        }
        maxr--;
        if(minr > maxr || minc > maxc) break;

        //Up
        for(int i = maxr; i >= minr; i--){
            cout<<matrix[i][minc]<<" ";
        }
        minc++;
    }

    return 0;
}