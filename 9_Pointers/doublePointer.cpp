#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *ptr = &x;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;
    cout<<x<<endl; // 5
    cout<<*ptr<<endl; // 5
    cout<<**ptr2<<endl; // 5
    cout<<***ptr3<<endl; // 5

    // ** double pointer in used to store address of pointer
    // *** triple pointer in used to store address of pointer of adress of pointer 😭
    // **** four pointer and so on ..................

    return 0;
}