#include <iostream>
using namespace std;

int main() {
    int a_second,b_second,repeat_voice,totalTime = 0;
    cin >> a_second>>b_second>>repeat_voice;
    if((a_second>=1 && a_second <=1000) && (b_second>=1 && b_second <=1000) && (repeat_voice>=1 && repeat_voice <=1000))
    {
        for (int i = 1; i <= repeat_voice ; i++)
        {
            if(i%2 ==0)
            {
                totalTime += b_second;
            }
            else
            {
                totalTime += a_second;
            }
        }
        cout << totalTime;
    }
    else
    {
        ///invalid numbers
    }
    return 0;
}