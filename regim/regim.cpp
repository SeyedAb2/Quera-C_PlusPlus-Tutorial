#include <iostream>
#include <cstring>  
using namespace std;

int main ()
{
    string str;
    cin >> str;
    int Red=0,Green=0,Yellow=0;
    for(int i=1; i<=5;i++)
    {
        if(str[i-1] == 'R')
        {
            Red++;
        }
        else if (str[i-1] == 'G')
        {
            Green++;
        }
        else if (str[i-1] == 'Y')
        {
            Yellow++;
        }
    }
    //cout <<Red<<Green<<Yellow;
    if((Red>=3) || (Red>=2 && Yellow>=2) || (Green==0))
    {
        cout << "nakhor lite";
    }
    else
    {
        cout << "rahat baash";
    }
    return 0;
}