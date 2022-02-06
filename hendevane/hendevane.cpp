#include <iostream>
using namespace std;

int main() {
    int n,f_temp,s_temp;
    cin>>n;
    if(n>=1 && n<=100){
        int w[n];
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        int indexToReturn = 0;
        int indexValue = 0;
        int newValue = 0;
        for (int i = 0; i < n; i++) {
            newValue = w[i];
            if (newValue >= indexValue) {
                indexToReturn = i+1;
                indexValue = newValue;
            }
        }
        cout << indexToReturn;
    }
    else{
        //// invalid number
    }
    return 0;
}