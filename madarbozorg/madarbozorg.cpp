#include <iostream>
#include <cmath>

using namespace std ;
const long long MAXN = 2e5 + 69 , MOD = pow(10,9) + 7 ; 

long long n , q , arr[MAXN] , seg[MAXN << 2] , mark[MAXN << 2] , lazy[MAXN << 2] ;
long long mod(long long val) {
	if ( val < 0 )
		val += MOD ;
	return val % MOD ;
}
long long sum(long long l , long long r) {
	l ++ , r ++ ;
	long long R = mod(r * (r - 1) >> 1LL) ;
	long long L = mod(l * (l - 1) >> 1LL) ;
	return mod(R - L) ;
}
void build(long long l = 0 , long long r = n , long long id = 1) {
	if ( r - l == 1 ) {
		seg[id] = mod(arr[l]) ;
		return ;
	}
	long long mid = (l + r) >> 1 ;
	build(l , mid , id << 1 | 0) ;
	build(mid , r , id << 1 | 1) ;
	seg[id] = mod(seg[id << 1 | 0] + seg[id << 1 | 1]) ;
}
void bang(long long l , long long r , long long id) {
	long long mid = (l + r) >> 1 ;
	
	seg[id << 1 | 0] = mod(seg[id << 1 | 0] + mod((mid - l) * lazy[id])) ;
	seg[id << 1 | 1] = mod(seg[id << 1 | 1] + mod((r - mid) * lazy[id])) ;
	lazy[id << 1 | 0] = mod(lazy[id << 1 | 0] + lazy[id]) ;
	lazy[id << 1 | 1] = mod(lazy[id << 1 | 1] + lazy[id]) ;
	lazy[id] = 0 ;

	seg[id << 1 | 0] = mod(seg[id << 1 | 0] + mod(mark[id] * sum(l , mid))) ;
	seg[id << 1 | 1] = mod(seg[id << 1 | 1] + mod(mark[id] * sum(mid , r))) ;
	mark[id << 1 | 0] = mod(mark[id << 1 | 0] + mark[id]) ;
	mark[id << 1 | 1] = mod(mark[id << 1 | 1] + mark[id]) ;
	mark[id] = 0 ;
	
	return ;
}
void update(long long st , long long en , long long val , long long l = 0 , long long r = n , long long id = 1) {
	if ( l >= en or r <= st )
		return ;
	if ( l >= st and r <= en ) {
		seg[id] = mod(seg[id] + mod((r - l) * val)) ;
		lazy[id] = mod(lazy[id] + val) ;
		
		seg[id] = mod(seg[id] + sum(l , r)) ;
		mark[id] = mod(mark[id] + 1) ;
		
		return ;
	}
	long long mid = (l + r) >> 1 ;
	bang(l , r , id) ;
	update(st , en , val , l , mid , id << 1 | 0) ;
	update(st , en , val , mid , r , id << 1 | 1) ;
	seg[id] = mod(seg[id << 1 | 0] + seg[id << 1 | 1]) ;
}
long long get(long long st , long long en , long long l = 0 , long long r = n , long long id = 1) {
	if ( l >= en or r <= st )
		return 0 ;
	if ( l >= st and r <= en )
		return seg[id] ;
	long long mid = (l + r) >> 1 ;
	bang(l , r , id) ;
	return mod(get(st , en , l , mid , id << 1 | 0) + get(st , en , mid , r , id << 1 | 1));
}
int32_t main() {

	cin >> n >> q ;
	for ( int i = 0 ; i < n ; i ++ )
		cin >> arr[i] ;
	build() ;
	string type ; int l , r ;
	for ( int it = 1 ; it <= q ; it ++ ) {
		cin >> type >> l >> r ;
		if ( type == "add" )
			update(l - 1 , r , mod(-l + 1)) ;
		else
			cout << get(l - 1 , r) << "\n" ;
	}
}
