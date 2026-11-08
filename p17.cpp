#include<iostream>
using namespace std;

class pattern
{
    public:
    void printpattern(int n)
    {
        char alp = 'A';
        for(int i=1; i<=n; i++)
        {
            for(int j = 1; j<=(n-i); j++)
            {
                cout <<" ";
                
            }

            for(int j = 1; j<=i; j++) //increasing alphabet
            {
                cout << alp ;
                alp++;
            }

            alp = alp - 2;
            for(int j = 1; j<i; j++) //decreasing alphabet
            {
                cout << alp ;
                alp--;
            }

            cout << endl ;
            alp = 'A';
            
        }
    }
};

int main()
{
    pattern p;
    p.printpattern(5);
    return 0;
}