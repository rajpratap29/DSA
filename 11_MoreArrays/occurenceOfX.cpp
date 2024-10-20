#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
    int value;
    int found;
    bool flag = false;
    cout<<"Enter the value you want to check at which position last appeared: ";
    cin>>value;
    for(int i = 0; i < v.size(); i++){
        if(value == v[i]){
            found = i;
            flag = true;
        }
    }
    if(!flag){
        cout<<"Given value is not present in an vector array.";
    }
    else{
        cout<<"Value found at position: "<<found;
    }

    return 0;
}