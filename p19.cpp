
#include<iostream>
using namespace std;

class pattern {
public:
    void printpattern(int n) {

        // Upper parṇt
        for (int i = 0; i < n/2; i++) {

            for (int j = 0; j < n/2 - i; j++) {
                cout << "*";
            }

            for (int j = 0; j < 2 * i; j++) {
                cout << " ";
            }

            for (int j = 0; j < n/2 - i; j++) {
                cout << "*";
            }

            cout << endl;
        }

        // Lower part
        for (int i = n/2 - 1; i >= 0; i--) {

            for (int j = 0; j < n/2 - i; j++) {
                cout << "*";
            }

            for (int j = 0; j < 2 * i; j++) {
                cout << " ";
            }

            for (int j = 0; j < n/2 - i; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    pattern p;
    p.printpattern(n);

    return 0;
}
