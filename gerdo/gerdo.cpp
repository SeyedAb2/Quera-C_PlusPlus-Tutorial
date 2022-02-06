#include <iostream>
using namespace std;
int Wall(int n,int x,int y);
int main() {
    int n, x, y;
    cin >> n >> x >> y;
    Wall(n,x,y);
    return 0;
}
int Wall(int n,int x,int y){
    for (int i = 0; i < int(n/x+1); i++)
    {
        if (n-i*x == ((n-i*x)/y)*y) {
            cout << i << " " << (n-i*x)/y << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
