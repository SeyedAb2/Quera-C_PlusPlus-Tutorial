#include<iostream>
using namespace std;
 
int main()
{
    long int n;
    int tot=0;
    cin>>n;

    while(n>0)
    {
        tot+=(n%10);
        n/=10;
        if (n==0 && tot/10 != 0) {
            n = tot;
            tot = 0;
        }

    }
    cout<<tot<<endl;
    return 0;
}