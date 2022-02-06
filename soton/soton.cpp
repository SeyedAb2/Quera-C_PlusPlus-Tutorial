#include <iostream>
using namespace std;

int main() {
    int n,avg,sum=0,count=0,mines=0;
    cin >> n;
    int coin_array[n];
    for(int i=0;i<n;i++){
        cin>>coin_array[i];
        sum = sum + coin_array[i];
    }
    avg = sum / n;
    for(int i=0;i<n;i++){
        mines = 0;
        if(coin_array[i]<avg){
            mines = avg - coin_array[i];
            count += mines;
        }
    }
    cout << count;
    return 0;
}