#include <iostream>
using namespace std;
 
int main()
{
    int N,M,xk,yk,pair=0;
    cin >> N >> M;
    int A[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> A[i][j];
        }
    }
    for(int k=0;k<M;k++){
        cin >> xk >> yk;
        pair += A[xk-1][yk-1];
    }
    cout << pair;
    return 0;
}