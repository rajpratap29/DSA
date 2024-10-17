#include<iostream>
using namespace std;
void starPattern(int a){
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    starPattern(3);
    starPattern(4);
    starPattern(5);

    return 0;
}