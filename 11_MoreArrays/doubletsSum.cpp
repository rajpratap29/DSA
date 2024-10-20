// Leetcode question
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    int value;
    cout<<"Enter the value whose sum you want to check if doublets make: ";
    cin>>value;
    for(int i = 0; i < v.size() - 1; i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] + v[j] == value){
                cout<<"The sum found at index: "<<i<<" and at index: "<<j<<endl;
            }
        }
    }
   

    return 0;
}