#include<iostream>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    vector<int> v2(v1.size());
    int temp = 0;
    for(int i = v1.size() - 1; i >= 0; i--){
        v2[temp] = v1[i];
        temp++;
    }
    cout<<"Values in first vector: ";
    for(int i = 0; i < v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl<<"Values in second vector: ";
    for(int i = 0; i < v2.size(); i++){
        cout<<v2[i]<<" ";
    }

    return 0;
}