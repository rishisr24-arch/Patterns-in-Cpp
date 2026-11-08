#include <iostream>
using namespace std;

class pattern
{
public:
    void printpattern(int n)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << char('E' - i + j) << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    pattern p;
    p.printpattern(5);
    return 0;
}