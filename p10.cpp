#include <iostream>
using namespace std;

void pattern(int n) {
    for (int i = 1; i <= n * 2; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        for (int j = n; j >= 1; j--) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of iterations: ";
    cin >> n;
    cout << endl;
    
    pattern(n);  // Pass n as parameter
    
    return 0;
}
