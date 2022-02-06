#include <iostream>
using namespace std;

int TermCounter(int i,int sum,int k,int n);
int main() {
    int n;
    int k;
    int sum = 0;
    int i = 1;
    cin >> n;
    cin >> k;
    if(k>=1&&k<=n&&n<=1000){
        if (n == 1 || n == k){
            cout << 1;
        }else {
            int term;
            i = i + k;
            sum = sum + 1;
            term = TermCounter(i,sum,k,n);
            cout << term;
        }
    }
    else{
        ///// invalid number
    }
    return 0;
}
int TermCounter(int i,int sum,int k,int n){
    while (i != 1){
        i = i + k;
        if (i == 1){
            break;
        }
        if ( i > n){
            i = i - n;
        }
        sum++;
    }
    return sum;
}