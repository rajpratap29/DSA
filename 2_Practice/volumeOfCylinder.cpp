//Program for volume of cylinder when taking radius and height as input

#include<iostream>
using namespace std;
int main(){

    float pi = 3.1415;
    float radius;
    float height;
    float volume;

    cout<<"Enter radius of cylinder: ";
    cin>>radius;
    cout<<"Enter height of cylinder: ";
    cin>>height;

    volume = pi * radius * radius * height;
    cout<<"Volume of cylinder is: "<<volume;

    return 0;
}