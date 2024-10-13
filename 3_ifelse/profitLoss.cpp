#include<iostream>
using namespace std;
int main(){
    int costPrice, sellingPrice, profit, loss;
    cout<<"Enter cost price of item: ";
    cin>>costPrice;
    cout<<"Enter selling price of item: ";
    cin>>sellingPrice;
    if(sellingPrice > costPrice){
        profit = sellingPrice - costPrice;
        cout<<"The seller has made: "<<profit<<" Rs. profit.";
    }
    else if(sellingPrice < costPrice){
        loss = costPrice - sellingPrice;
        cout<<"The seller has made: "<<loss<<" Rs. loss.";
    }
    else{
        cout<<"Neither profit nor loss.";
    }

    return 0;
}