#include <iostream>
using namespace std;

int main(){
    int n  , factoriel = 1;
    cin >> n;
    // while(i<=n){
    //     factoriel *= i;
    //     i++;
    // }  
    for (int i=1;i<=n;i++)
    { 
        factoriel *= i;
    }  
    cout << factoriel;
    return 0;
}