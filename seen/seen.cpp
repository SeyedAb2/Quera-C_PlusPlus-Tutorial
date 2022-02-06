#include <iostream>
using namespace std;

int main ()
{
    string seen[8] = {"sib","somagh", "samanoo", "senjed", "serke", "seke", "sabze", "saat"};
    
    int m;
    cin >> m;
    if(m>=1 && m<=7)
    {
        for (int i = 1; i <= m; i++) {
            cout << seen[i-1] << endl;
        }
    }
    else
    {
        /// invalid number
    }
    return 0;
}