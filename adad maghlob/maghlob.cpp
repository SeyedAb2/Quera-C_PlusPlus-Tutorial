#include <iostream>
#include <string>
using namespace std;

int main(){
    int inputNumber , Number , rem , mines;
    int reverseNumber = 0;
    cin >> Number;
    inputNumber = Number;
    while(Number !=0)
    {
        rem=Number%10;    
        reverseNumber=reverseNumber*10+rem;    
        Number/=10;  
    }
    mines = reverseNumber-inputNumber;
    if(mines == 0)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
    return 0;
}