#include <iostream>
using namespace std;

int main()
{
    unsigned long n,Q,sum=0;
    cin>>n;
    unsigned long A[n];
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>Q;
    unsigned long k,s;
    unsigned long show[Q];
    for(int j=0;j<Q;j++)
    {
        cin>>s;
        cin>>k;
        for(s;s<=n;s+=k)
        {
            sum = sum + A[s-1];
            show[j]=sum;
        }
        sum = 0;
    }
    for(int r=0;r<Q;r++)
        cout<<show[r]<<'\n';
    return 0;
}