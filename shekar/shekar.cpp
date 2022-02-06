#include <iostream>
using namespace std;

int main() {
    int rows,cols,starCounter=0;
    cin >> rows>>cols;
    char colsIndex[cols];

    for(int i = 0; i< rows;i++)
    {
        cin >> colsIndex;
        for (int j=0; j<cols;j++)
        {
            if(colsIndex[j] == '*')
            {
                starCounter++;
            }
        }
    }
    cout << starCounter;
    return 0;
}
