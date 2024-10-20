// Leetcode question
#include<iostream>
using namespace std;
void display(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void reversePart(int i, int j, vector<int> &v){
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(8);
    int k;
    cout<<"Enter value how many steps you want to rotate array: ";
    cin>>k;
    int n = v1.size();
    if(k>n){
        k = k % n;
    }
    if(k < 0){
        cout<<"Please enter positive value of k.";
        return 0;
    }

    reversePart(0,n-k-1,v1);
    reversePart(n-k,n-1,v1);
    reversePart(0,n-1,v1);

    display(v1);
    return 0;
}