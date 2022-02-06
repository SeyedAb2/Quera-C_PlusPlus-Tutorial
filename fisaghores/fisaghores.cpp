#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a , b , c , vatarLength,horizenLength,verticalLength,sum2length,vatarSqrt;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>0 && b>0 && c>0){
        if(a>b && a>c) {
            vatarLength = a; 
            horizenLength = b;
            verticalLength = c;
        }
        if(b>a && b>c) {
            vatarLength = b; 
            horizenLength = a;
            verticalLength = c;
        }
        if(c>a && c>b) {
            vatarLength = c; 
            horizenLength = a;
            verticalLength = b;
        }
        vatarSqrt = pow(vatarLength,2);
        sum2length = pow(horizenLength,2) + pow(verticalLength,2);
        if(vatarSqrt == sum2length)
        {
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        ////invalid number
    }
    return 0;
}
