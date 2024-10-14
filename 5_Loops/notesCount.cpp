#include <iostream>
using namespace std;
int main() {
    int amount;
    cout << "Enter the amount of money: ";
    cin >> amount;
    int notes500 = 0, notes200 = 0, notes100 = 0, notes50 = 0;
    int notes20 = 0, notes10 = 0, notes5 = 0, notes2 = 0, notes1 = 0;

    while (amount > 0) {
        if (amount >= 500) {
            notes500 = amount / 500;
            amount %= 500;
        } else if (amount >= 200) {
            notes200 = amount / 200;
            amount %= 200;
        } else if (amount >= 100) {
            notes100 = amount / 100;
            amount %= 100;
        } else if (amount >= 50) {
            notes50 = amount / 50;
            amount %= 50;
        } else if (amount >= 20) {
            notes20 = amount / 20;
            amount %= 20;
        } else if (amount >= 10) {
            notes10 = amount / 10;
            amount %= 10;
        } else if (amount >= 5) {
            notes5 = amount / 5;
            amount %= 5;
        } else if (amount >= 2) {
            notes2 = amount / 2;
            amount %= 2;
        } else {
            notes1 = amount;
            amount = 0;
        }
    }


    cout << "You will need:\n";
    if (notes500 > 0) cout << notes500 << " notes of 500\n";
    if (notes200 > 0) cout << notes200 << " notes of 200\n";
    if (notes100 > 0) cout << notes100 << " notes of 100\n";
    if (notes50 > 0) cout << notes50 << " notes of 50\n";
    if (notes20 > 0) cout << notes20 << " notes of 20\n";
    if (notes10 > 0) cout << notes10 << " notes of 10\n";
    if (notes5 > 0) cout << notes5 << " notes of 5\n";
    if (notes2 > 0) cout << notes2 << " notes of 2\n";
    if (notes1 > 0) cout << notes1 << " notes of 1\n";

    return 0;
}
