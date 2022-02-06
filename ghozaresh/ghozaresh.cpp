#include<iostream>
using namespace std;

int main()
{
    int n,k,litr=0;
    bool status;
    cin>>n;
    if(n>=1 && n<=100)
    {
        cin >> k;
        if(k>=1 && k<=100000)
        {
            int ci[n];
            for(int i=0;i<n;i++)
            {
                cin>>ci[i];
                k = k - ci[i];
                if(k<=0)
                {
                    status = true;
                    
                }
                else
                {
                    status = false;
                }
                
            }
            if(status == true)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }
        else
        {
            ///invalid number
        }
    }
    else
    {
        ///invalid number
    }
    return 0;
}