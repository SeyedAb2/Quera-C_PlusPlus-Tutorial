#include <iostream>
using namespace std;

int main(){
    int a[3],b[3],counter = 0;
    for(int i=0;i<3;i++){
        cin>>a[i]>>b[i];
        if(a[i]>=b[i]){
            counter = counter + b[i];
        }
        else{
            counter = counter + a[i];
        }
    }
    cout << counter;
    return 0;
}
