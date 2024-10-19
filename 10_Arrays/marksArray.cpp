#include<iostream>
using namespace std;
int main(){
    int students;
    cout<<"Enter how number of students: ";
    cin>>students;
    int marks[students];
    for(int i = 0; i < students; i++){
        cout<<"Enter marks for "<<i<<"th student: ";
        cin>>marks[i];
    }
    for(int i = 0; i < students; i++){
        if(marks[i] < 35){
            cout<<"Marks of "<<i<<" is less than 35."<<endl;
        }
    }

    return 0;
}