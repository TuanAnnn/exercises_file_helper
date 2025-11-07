#include <iostream>
using namespace std;

int calculateWaterBill(int quantity) {
    int amount = 0;
    
    if (quantity <= 16) {
        amount = quantity * 7000;
    } 
    else if (quantity <= 50) {
        amount = 16 * 7000 + (quantity - 16) * 8500;
    } 
    else {
        amount = 16 * 7000 + 34 * 8500 + (quantity - 50) * 100000;
    }
    
    return amount;
}

int main() {
    int u;
    
    cout << "Enter water quantity (units): ";
    cin >> u;
    
    int result = calculateWaterBill(u);
    
    cout << "Water bill to pay: " << result << " VND" << endl;
    
    return 0;
}