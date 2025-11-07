#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[100];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j * j <= a[i]; j++) {
            if(j * j == a[i]) {
                cout << a[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    
    for(int i = 0; i < n; i++) {
        if(a[i] < 2) continue;  
        
        bool ok = true;
        for(int j = 2; j < a[i]; j++) {
            if(a[i] % j == 0) {
                ok = false;
                break;
            }
        }
        
        if(ok == true) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}