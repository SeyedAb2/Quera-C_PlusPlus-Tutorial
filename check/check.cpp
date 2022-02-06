#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define F first
#define S second
#define mk make_pair
#define pii pair < int , int >
const ll mod = 1000000000 + 7;
const int maxn = 50000 + 100;
const ll inf = 100000;

vector < pii > g[maxn];
vector < int > w[maxn];
set < pii > q;
int dist[maxn] , a[maxn] , n , m , k , t , ans;

bool mark[maxn];
void distenition (int v , int u , int w);
void space_3D(int root);

int main() {
	   cin >> n >> m >> t >> k;
       int answer[t];
	   for (int i = 0 , v , u , w1; i < m; i++)
			 cin >> v >> u >> w1 , distenition(v , u , w1);
	   ans = n;
	   memset(dist, 63, sizeof dist);
	   for (int i = 0; i < t; i++){
            cin >> a[i];
            space_3D(a[i]);
            answer[i] = ans;
	   }
       for(int i=0;i<t;i++){
           cout << answer[i] << "\n";
       }
	   return 0;
}


void space_3D(int root){
	   if (dist[root] >= k)
			 ans --;
	   dist[root] = 0;
	   set< pii > s;
	   s.insert({0 , root});
	   while(!s.empty()){
			 pii P = *s.begin();
			 s.erase(*s.begin());
			 for (auto u : g[P.S]){
				    if(dist[u.F] > P.F + u.S && P.F + u.S < k){
                        if (dist[u.F] >= k)
                            ans --;
                        s.erase({dist[u.F], u.F});
                        dist[u.F] = P.F + u.S;
                        s.insert({dist[u.F], u.F});
				    }
			 }
	   }
}
void distenition (int v , int u , int w){
    g[v].pb(mk(u , w)) , g[u].pb(mk(v , w));
}
