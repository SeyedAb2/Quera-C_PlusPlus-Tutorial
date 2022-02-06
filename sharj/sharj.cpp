#include <iostream>
using namespace std;

int main() {
    int i=0,chargePercent,chargeTime=0,totalTime=0;
    cin >> chargePercent;
    if(chargePercent >=1 && chargePercent <=100)
    {
        for(i;i<chargePercent;i++)
        {
            chargeTime++;
            totalTime = totalTime + chargeTime;
        }
        cout << totalTime;
    }
    else
    {
        ///invalid number
    }
    return 0;
}