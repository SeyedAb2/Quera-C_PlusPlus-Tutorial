#include<iostream>
 
using namespace std;
const int maxn = 1000000;
 
int n,m[maxn],answer,a[maxn],j[maxn],z,save;
 
int main()
{
 
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m[n-1]=a[n-1];
    j[n-1]=n-1;
    for (int i=n-2;i>=0;i--)
    {
        m[i]=m[i+1];
        j[i]=j[i+1];
        if (a[i]>m[i+1])
        {
            m[i]=a[i];
            j[i]=i;
        }
    }
    while (z!=n-1)
    {
        if (m[z+1]<a[z])
        {
            for (int i=z+1;i<j[z+1];i++)
                answer+=(m[z+1]-a[i]);
            z=j[z+1];
        }
        else
        {
            for (int i=z+1;i<n;i++)
            {
                if (a[i]>=a[z])
                {
                    save=i;
                    break;
                }
            }
            for (int i=z+1;i<save;i++)
                answer+=(a[z]-a[i]);
            z=save;
        }
    }
    cout<<answer;
     
    return 0;
}