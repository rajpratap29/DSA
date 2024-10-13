#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an alphabet to check vowel or constonant: ";
    cin>>ch;
    int temp;
    temp = (int)ch;
    if((temp >= 65 && temp <= 90) || (temp >= 97 && temp <= 122)){

        if(ch == 'a'  || ch == 'e'  || ch == 'i'  || ch == 'o'  || ch == 'u'  || ch == 'A'  || ch == 'E'  || ch == 'I'  || ch == 'O'  || ch == 'U'){
            cout<<"Alphabet is vowel.";
        }
        else{
            cout<<"Alphabet is constonant.";
        }
    }
    else{
        cout<<"Please enter a valid alphabet.";
    }

    return 0;
}