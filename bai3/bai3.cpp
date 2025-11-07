#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double xa, ya, xb, yb, xc, yc;
    
    cin >> xa >> ya;
    
    cin >> xb >> yb;
    
    cin >> xc >> yc;
    
    cout << "(" << xa << "," << ya << ") ";
    cout << "(" << xb << "," << yb << ") ";
    cout << "(" << xc << "," << yc << ")" << endl;
    
    double distAB = sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
    double distAC = sqrt((xc-xa)*(xc-xa) + (yc-ya)*(yc-ya));
    double distBC = sqrt((xc-xb)*(xc-xb) + (yc-yb)*(yc-yb));
    
    cout << fixed << setprecision(3);
    cout << distAB << endl;
    cout << distAC << endl;
    cout << distBC << endl;
    
    double area = 0.5 * abs((xb-xa)*(yc-ya) - (xc-xa)*(yb-ya));
    
    if(area < 0.001) {  
        cout << "-1" << endl;
    }
    else {
        double perimeter = distAB + distAC + distBC;
        
        cout << area << endl;
    }
    
    return 0;
}