#include <iostream>
using namespace std;

int main() {
    int n,positionX,positionY;
    cin>>n;
    int statusOfN = n%2;
    if(statusOfN != 0){
        positionX = 0;
        positionY = 0;
        statusOfN = n%4;
        if(statusOfN == 1){
            positionX = -(n-1)/4;
            positionY = -(n-1)/4;
        }
        else{
            positionX = (n-1)/4;
            positionY = (n-1)/4;
        }
    }
    else{
        positionX = 0;
        positionY = 0;
        statusOfN = n%4;
        if(statusOfN == 0){
            positionX = -n/4;
            positionY = n/4;
        }
        else{
            positionX = (n+2)/4;
            positionY = -(n-2)/4;
        }
    }
    cout<<positionX<<" "<<positionY; 
    return 0;
}
