#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter how many value you want to enter in a vector: ";\
    cin>>n;
    for(int i = 0; i < n; i++){
        int value;
        cout<<"Enter value to enter in an vector: ";
        cin>>value;
        v.push_back(value);
    }
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}