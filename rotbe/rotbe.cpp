#include<iostream>
using namespace std;

const int Max_Num=10000000;
long long k,r[Max_Num],tree[5*Max_Num],b[Max_Num],hm[Max_Num],n;
bool mark[Max_Num];

void build(int node,int start,int en);
void update(int node,int start,int en,int idx,int val);

int main()
{
    cin>>k>>n;
    for (int i=0;i<k;i++)
    {
        cin>>r[i];
        if (r[i]<=k+1)
        {
            mark[r[i]]=true;
            hm[r[i]]++;
        }
    }
    build(1,1,k+1);
    b[0]=tree[1];
    hm[tree[1]]++;
    update(1,1,k+1,tree[1],Max_Num);
    for (int i=1;i<=k;i++)
    {
        if (r[i-1]<=k+1)
        {
            hm[r[i-1]]--;
            if (!hm[r[i-1]])
                update(1,1,k+1,r[i-1],r[i-1]);
        }
        b[i]=tree[1];
        hm[tree[1]]++;
        update(1,1,k+1,tree[1],Max_Num);
    }
    cout<<b[n%(k+1)];
    return 0;
}
void build(int node,int start,int en)
{
    if (start==en)
    {
        if (mark[start])
            tree[node]=Max_Num;
        else
            tree[node]=start;
    }
    else
    {
        int mid=(start+en)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,en);
        tree[node]=min(tree[2*node+1],tree[2*node]);
    }
    return;
}
void update(int node,int start,int en,int idx,int val)
{
    if (start==en)
        tree[node]=val;
    else
    {
        int mid=(start+en)/2;
        if (start<=idx && idx<=mid)
            update(2*node,start,mid,idx,val);
        else
            update(2*node+1,mid+1,en,idx,val);
        tree[node]=min(tree[2*node],tree[2*node+1]);
    }
    return;
}


