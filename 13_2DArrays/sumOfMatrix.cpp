#include<iostream>
using namespace std;
int main(){
    int m1[2][3] = {1,2,3,4,5,6};
    int m2[2][3] = {7,8,9,10,11,12};

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            m1[i][j] = m1[i][j] + m2[i][j];
        }
    }

    cout<<"Addition of two matrices is: "<<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}