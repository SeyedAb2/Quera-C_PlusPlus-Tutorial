#include <iostream>
using namespace std;

int main() {
    int k;
    cin>>k;
    if(k>=1 && k<=100){
        if(k%2==0){
            cout << "Bala Barare";
        }
        else{
            cout << "Payin Barare";
        }
    }
    else{
        ///invalid number
    }
    return 0;
}