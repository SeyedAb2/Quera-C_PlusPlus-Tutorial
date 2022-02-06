#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int numbers , max = 0;
    for (int i=1;i<=n;i++)
    {
        cin >> numbers;
        if(max < numbers)
        {
            max = numbers;
        }
    }
    cout << max;
    
    return 0;
}



