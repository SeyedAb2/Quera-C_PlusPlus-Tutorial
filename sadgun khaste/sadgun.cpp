#include <iostream>
using namespace std;

int main() {
    int num1,num2,temp1,temp2,rem1,rem2;
    int revers1=0,revers2 = 0;
    cin >> num1 >> num2;
    temp1 = num1;
    temp2 = num2;
    if(num1 >=100 && num2 >=100)
    {
        while(num1 !=0)
        {
            rem1=num1%10;    
            revers1=revers1*10+rem1;    
            num1/=10;  
        }
        while(num2 !=0)
        {
            rem2=num2%10;    
            revers2=revers2*10+rem2;    
            num2/=10;  
        }
        if(revers1 == revers2)
        {
            cout << temp1<< " = "<< temp2;
            //cout << " = ";
            //cout << temp2;
        }
        if(revers1 < revers2)
        {
            cout << temp1<< " < " <<  temp2;
            //cout << " < "; 
            //cout <<  temp2;
        }
        if(revers2 < revers1)
        {
            cout << temp2<< " < "<< temp1;
            //cout << " < ";
            //cout << temp1;
        }
    }
    else
    {
        //// invalid numbers
    }
    return 0;
}