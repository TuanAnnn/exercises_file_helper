#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of SIM slots: ";
    cin >> n;
    
    string code[100];
    string phone[100];
    string carrier[100];
    
    cout << "Enter information for " << n << " slots (code phone carrier):" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Slot " << i+1 << ": ";
        cin >> code[i];
        cin >> phone[i];
        cin >> carrier[i];
    }
    
    string searchPhone;
    cout << "Enter phone number to find slots with same carrier: ";
    cin >> searchPhone;
    
    char searchPrefix[4];
    searchPrefix[0] = searchPhone[0];
    searchPrefix[1] = searchPhone[1];
    searchPrefix[2] = searchPhone[2];
    searchPrefix[3] = '\0';
    
    cout << "\nSlots with same carrier:" << endl;
    for(int i = 0; i < n; i++) {
        char slotPrefix[4];
        slotPrefix[0] = phone[i][0];
        slotPrefix[1] = phone[i][1];
        slotPrefix[2] = phone[i][2];
        slotPrefix[3] = '\0';
        
        bool isMatch = true;
        for(int j = 0; j < 3; j++) {
            if(searchPrefix[j] != slotPrefix[j]) {
                isMatch = false;
                break;
            }
        }
        
        if(isMatch == true) {
            cout << code[i] << ":" << phone[i] << ":" << carrier[i] << endl;
        }
    }
    
    return 0;
}