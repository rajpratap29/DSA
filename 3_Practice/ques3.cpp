// Leap year
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year to check leap number: ";
    cin>>year;
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                cout<<year<<" is leap year.";
            }
            else{
                cout<<year<<" is not leap year.";
            }
        }
        else{
            cout<<year<<" is leap year.";
        }
    }
    else{
        cout<<year<<" is not leap year.";
    }

    return 0;
}