// move all negative numbers to end and positive to beggining with constant extra space
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(-8);
    v.push_back(-1);
    v.push_back(3);
    v.push_back(-3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(-7);
    v.push_back(1);
    v.push_back(-9);
    
    int extraValue = 1;
    for(int i = 0; i < v.size() - 1; i++){
        int j = v.size() - extraValue;
        if(v[i] < 0){
            while(j > i && v[j] < 0){
                j--;
                extraValue++;
            }
        }
        if(v[i] < 0 && v[j] > 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
        if(i>=j){
            break;
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}