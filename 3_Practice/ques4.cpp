// compare rectangle area and perimeter
#include<iostream>
using namespace std;
int main(){
    int length, breadth, area, perimeter;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    cout<<"Enter breadth of rectangle: ";
    cin>>breadth;

    area = length * breadth;
    perimeter = (length+breadth) * 2;

    if(area > perimeter){
        cout<<"Area of rectangle is greater than perimeter.";
    }
    else{
        cout<<"Perimeter of rectangle is greater than area.";
    }

    return 0;
}