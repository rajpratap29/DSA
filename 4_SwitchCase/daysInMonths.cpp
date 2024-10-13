#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;
    int month;
    cout<<"Enter month number: ";
    cin>>month;
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                switch (month)
                {
                case 1:
                    cout<<"Number of days: 31";
                    break;
                case 2:
                    cout<<"Number of days: 29";
                    break;
                case 3:
                    cout<<"Number of days: 31";
                    break;
                case 4:
                    cout<<"Number of days: 30";
                    break;
                case 5:
                    cout<<"Number of days: 31";
                    break;
                case 6:
                    cout<<"Number of days: 30";
                    break;
                case 7:
                    cout<<"Number of days: 31";
                    break;
                case 8:
                    cout<<"Number of days: 31";
                    break;
                case 9:
                    cout<<"Number of days: 30";
                    break;
                case 10:
                    cout<<"Number of days: 31";
                    break;
                case 11:
                    cout<<"Number of days: 30";
                    break;
                case 12:
                    cout<<"Number of days: 31";
                    break;
                default:
                    cout<<"Enter a valid month.";
                    break;
                }
            }
            else{
                switch (month)
                {
                case 1:
                    cout<<"Number of days: 31";
                    break;
                case 2:
                    cout<<"Number of days: 28";
                    break;
                case 3:
                    cout<<"Number of days: 31";
                    break;
                case 4:
                    cout<<"Number of days: 30";
                    break;
                case 5:
                    cout<<"Number of days: 31";
                    break;
                case 6:
                    cout<<"Number of days: 30";
                    break;
                case 7:
                    cout<<"Number of days: 31";
                    break;
                case 8:
                    cout<<"Number of days: 31";
                    break;
                case 9:
                    cout<<"Number of days: 30";
                    break;
                case 10:
                    cout<<"Number of days: 31";
                    break;
                case 11:
                    cout<<"Number of days: 30";
                    break;
                case 12:
                    cout<<"Number of days: 31";
                    break;
                default:
                    cout<<"Enter a valid month.";
                    break;
                }
            }
        }
        else{
            switch (month)
                {
                case 1:
                    cout<<"Number of days: 31";
                    break;
                case 2:
                    cout<<"Number of days: 29";
                    break;
                case 3:
                    cout<<"Number of days: 31";
                    break;
                case 4:
                    cout<<"Number of days: 30";
                    break;
                case 5:
                    cout<<"Number of days: 31";
                    break;
                case 6:
                    cout<<"Number of days: 30";
                    break;
                case 7:
                    cout<<"Number of days: 31";
                    break;
                case 8:
                    cout<<"Number of days: 31";
                    break;
                case 9:
                    cout<<"Number of days: 30";
                    break;
                case 10:
                    cout<<"Number of days: 31";
                    break;
                case 11:
                    cout<<"Number of days: 30";
                    break;
                case 12:
                    cout<<"Number of days: 31";
                    break;
                default:
                    cout<<"Enter a valid month.";
                    break;
                }
        }
    }
    else{
        switch (month)
                {
                case 1:
                    cout<<"Number of days: 31";
                    break;
                case 2:
                    cout<<"Number of days: 28";
                    break;
                case 3:
                    cout<<"Number of days: 31";
                    break;
                case 4:
                    cout<<"Number of days: 30";
                    break;
                case 5:
                    cout<<"Number of days: 31";
                    break;
                case 6:
                    cout<<"Number of days: 30";
                    break;
                case 7:
                    cout<<"Number of days: 31";
                    break;
                case 8:
                    cout<<"Number of days: 31";
                    break;
                case 9:
                    cout<<"Number of days: 30";
                    break;
                case 10:
                    cout<<"Number of days: 31";
                    break;
                case 11:
                    cout<<"Number of days: 30";
                    break;
                case 12:
                    cout<<"Number of days: 31";
                    break;
                default:
                    cout<<"Enter a valid month.";
                    break;
                }
    }

    return 0;
}