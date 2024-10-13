// compare radius and circumference of circle to check bigger
#include<iostream>
using namespace std;
int main(){
    float pi = 3.14;
    float radius, area, circumference;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    if(area > circumference){
        cout<<"Area is greater than circumference.";
    }
    else{
        cout<<"Circumference is greater than circler.";
    }

    return 0;
}