#include<iostream>
using namespace std;

class pattern{
    public:
    void printpattern(int n)
    {
        char alp = 65;
        for(int i=1; i<=n; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                cout << alp << " ";
                
            }

            cout << endl ;
            alp++;
        }
    }
};

int main()
{
    int n=5;
    pattern p;
    p.printpattern(5);
    return 0;
}