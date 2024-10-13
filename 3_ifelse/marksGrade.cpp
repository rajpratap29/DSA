#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks between 0 and 100: ";
    cin>>marks;
    if(marks > 100){
        cout<<"Please enter marks between 0 to 100.";
    }
    else{
    if((marks >= 91) && (marks <= 100)){
        cout<<"Excelent.";
    }
    else if((marks >= 81) && (marks <= 90)){
        cout<<"Very Good.";
    }
    else if((marks >= 71) && (marks <= 80)){
        cout<<"Good.";
    }
    else if((marks >= 61) && (marks <= 70)){
        cout<<"Can do better.";
    }
    else if((marks >= 51) && (marks <= 60)){
        cout<<"Average.";
    }
    else if((marks >= 40) && (marks <= 50)){
        cout<<"Below Average.";
    }
    else{
        cout<<"Fail.";
    }
    }
    return 0;
}