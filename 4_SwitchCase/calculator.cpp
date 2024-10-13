#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    char operation;
    cout<<"Enter operation which you want to perforf(+,-,*,/): ";
    cin>>operation;
    float temp;
    switch (operation)
    {
    case '+':
        temp = num1 + num2;
        cout<<"Addition of two number is: "<<temp;
        break;
    case '-':
        temp = num1 - num2;
        cout<<"Subtration of two number is: "<<temp;
        break;
    case '*':
        temp = num1 * num2;
        cout<<"Multiplicaion of two number is: "<<temp;
        break;
    case '/':
        temp = num1 / num2;
        cout<<"Division of two number is: "<<temp;
        break;
    
    default:
        cout<<"Please enter valid operation.";
        break;
    }

    return 0;
}