#include <iostream>
using namespace std;

int main() {
    int X , numOfDay , i;
    cin >> X >> numOfDay;
    int arrayDays[numOfDay];
    int arraySize = sizeof(arrayDays)/sizeof(arrayDays[0]);
    if((X>=0 && X<=20) && (numOfDay>=0 && numOfDay<=100))
    {
        if (arraySize == 0 )
        {
            X = 20;
            cout << X;
        }
        if (arraySize == 7)
        {
            cout << X;
        }
        if(arraySize > 7 || (arraySize > 0 && arraySize < 7))
        {
            X = X - arraySize;
            if(X<0)
            {
                X = 0;
                cout << X;
            }
            else
            {
                cout << X;
            }
        }
    }
    else
    {
        ///invalid numbers for day and point
    }
    return 0;
}