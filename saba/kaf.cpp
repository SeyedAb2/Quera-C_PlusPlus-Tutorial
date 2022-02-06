
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double num;
    int term;
    cin >> num>>term;
    if((num >= (-1)*2000000 && num <=2000000) && (term>=0 && term <=50))
    {
        for (int i=1;i<=term;i++)
        {
            num /=2;
        }
        if (num <0 && num != int(num))
        {
            num -=1;
            cout << int(num);
        }
        else
        {
            cout << int(num);
        }
    }
    else
    {
        ////invalid number
    }
    return 0;
}