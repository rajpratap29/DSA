#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // v.push_back(6);
    // v.push_back(1);
    // v.push_back(9);
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";

    v.push_back(6);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    return 0;
}