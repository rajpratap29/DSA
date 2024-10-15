// 1 - 2 + 3 - 4 + 5 - 6 upto ... n
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number till where you want this series to run: ";
    cin>>num;
    int sum = 0;
    for(int i = 1; i <= num; i++){
        if(i % 2 != 0){
            sum = sum - i;
        }
        else{
            sum = sum + i;
        }
    }
    cout<<"The sum is: "<<sum;

    return 0;
}