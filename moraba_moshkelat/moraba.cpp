#include <iostream>
using namespace std;

int main() {
    int n,k,count,max_volume,per_volume,opacity=0;    
    cin>>n>>k;
    max_volume = n * k;
    for(int i=0;i<n;i++){
        cin >> per_volume;
        opacity += per_volume;
    }
   
    count = (max_volume-opacity)/k;
    cout << count;
    return 0;
}