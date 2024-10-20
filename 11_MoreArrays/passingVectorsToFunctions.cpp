#include<iostream>
using namespace std;
void change(vector<int> &a){ 
    // it creates copy of vector and does not change in real vector
    // it is diff. from array if we give address using '&' then it will change original vector
    a[0] = 100;
}
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(6);
    v.push_back(5);
    v.push_back(1);
    v.push_back(7);
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for (int i = 0; i < v.size(); i++){ 
        cout<<v[i]<<" ";
    }

    return 0;
}