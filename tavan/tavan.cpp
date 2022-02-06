#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin >> n;
    if(n >=1 && n<=pow(10,9))
    {
        for(int i = 1;i<=n;i++)
        {
            if(pow(2, i)>n){
                cout << int(pow(2, i)) <<endl;
                break;
            }
        }
    }
    else{
        //// invalid
    }
    return 0;
}