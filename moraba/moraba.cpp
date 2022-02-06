#include <iostream>
using namespace std;
 
 
int main ()
{
    int c=0;
    int ctwo;
    int input;
    int inputwo;

    cin >> input;
 
    while (c < input)
    {
        cout << "*";
        ++c;
    };
    cout << "\n";
 
    c=0;
    inputwo=input;
    inputwo-=2;
    while (c < inputwo)
    {
        cout << "*";
        ctwo=0;
        while (ctwo < inputwo)
        {
            cout << " ";
            ++ctwo;
        }
 
        cout << "*" << "\n";
        ++c;
    };
     
    c=0;
    while (c < input)
    {
        cout << "*";
        ++c;
    };
     
}