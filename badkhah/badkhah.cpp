#include <iostream>
using namespace std;
 
int main()
{
    int p,d,rem,rem_p,max_period,provide = 1;
    cin >>p>>d;
    max_period = p/2;
    rem = d%p;
    rem_p = rem;
    
    int i=1;
    while(i>0){
        rem_p = (rem*i)%p;
        provide = d * i;
        if(rem_p<=max_period){            
            cout << provide;
            break;
        }
        i++;
    }
    return 0;
}