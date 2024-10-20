#include<iostream>
using namespace std;
void display(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
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
    display(v1);
    cout<<endl<<"Values in second vector: ";
    display(v2);
    return 0;
}