#include<iostream>
using namespace std;
int main(){
    float x, y;
    cout<<"Enter the x-y coordinates of the point: ";
    cin>>x>>y;
    if(x == 0 && y == 0){
        cout<<"The point is on the origin.";
    }
    else if(x == 0 && y != 0){
        cout<<"The point lie on the y-axis.";
    }
    else if(x != 0 && y == 0){
        cout<<"The point lie on the x-axis.";
    }
    else{
        cout<<"The point lie on the plane.";
    }

    return 0;
}