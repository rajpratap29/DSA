#include<iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cout<<"Enter first side of triangle: ";
    cin>>side1;
    cout<<"Enter second side of triangle: ";
    cin>>side2;
    cout<<"Enter third side of triangle: ";
    cin>>side3;

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)){
        cout<<"This is valid triangle.";
    }
    else{
        cout<<"This is not a valid triangle.";
    }

    return 0;
}