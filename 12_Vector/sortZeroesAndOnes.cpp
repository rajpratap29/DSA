#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort(v.begin(), v.end()); 
    // different method

    int noz = 0;
    int noo = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0){
            noz++;
        }
        else{
            noo++;
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(i < noz){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}