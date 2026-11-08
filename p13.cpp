// Program only
/*
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int num =1;

    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
*/

// Programme using a function
/*
#include <iostream>
using namespace std;

void printpattern(int n)
{
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}
int main()
{
    printpattern(500000);

    return 0;
}
*/

//Programme using class and function

#include<iostream>
using namespace std;

class pattern{
    public:
    void printpattern(int n)
{
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
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