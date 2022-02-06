#include <iostream>
using namespace std;

int RepeatString(int n); 
int main() {
    int n;
    cin >> n;
    if(n>=1 && n<=100)
        RepeatString(n);
    return 0;
}
int RepeatString(int n){
    for (int i=0;i<n;i++)
        cout<< "man khoshghlab hastam"<<endl;
    return 0;
}