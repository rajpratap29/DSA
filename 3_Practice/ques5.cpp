// Check wether triangle is equilateral, scalene, or isosceles 
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
        if((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1)){
            cout<<"The triangle is isosceles triangle.";
        }
        else if(side1 != side2){
            if(side2 != side3){
                cout<<"The triangle is scalene triangle.";
            }
        }
        else{
            cout<<"The triangle is equilateral triangle.";
        }
    }
    else{
        cout<<"This is not a valid triangle.";
    }
    return 0;
}