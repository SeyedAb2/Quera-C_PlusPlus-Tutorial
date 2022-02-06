#include <iostream>
using namespace std;

int main() {
    int inputCount[1000];
    int value;
    int arrayLength=0;
    for (int i=0; i<1000;i++)
    {
        cin >> value;
        inputCount[i] = value;
        arrayLength +=1;
        if (inputCount[i] ==0)
        {
            break;
        }
    }
    for (int i=arrayLength-1;i>0;i--)
    {
        cout << inputCount[i-1] << endl;
    }
    
    return 0;
}