#include <iostream>
using namespace std;

int main() {

    int n;
    string s;
    cin >> n;
    cin >> s;
    if(n >=0 && n<=100){
        for (int i=1;i<=n;i++){
            cout << "copy of ";
        }
        cout << s;
    }
    else{
        ///invalid number
    }
    return 0;
}
