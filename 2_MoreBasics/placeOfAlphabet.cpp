#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character whose place you want to find(Enter in capital letter): ";
    cin>>ch;
    int finder = (int)ch - 64;
    cout<<"The place of letter in alphabet is "<<finder;

    return 0;
}