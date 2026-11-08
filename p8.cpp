#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= (i - 1); j++)
        {
            cout << " ";
        }

        for (int star = 1; star <= 2 * n - (2 * i + 1); star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}