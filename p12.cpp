#include <iostream>
using namespace std;

int pattern()
{
    
}

int main()
{
    int n = 9;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2*(2*n - 2*i) ; j++)
        {
            cout << " ";
        }
        for(int j = i; j>=1; j--){
        cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}