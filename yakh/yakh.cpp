#include <iostream>
using namespace std;

int H2O_STATUS(int T);
int main()
{
    int T;
    cin>> T;
    if(T>-273 && T<=6000)
    {
        H2O_STATUS(T);
    }
    else{
        ////invalid number
    }
    return 0;
}
int H2O_STATUS(int T){
    if(T<0){
        cout << "Ice";
    }
    else if(T>100){
        cout << "Steam";
    }
    else{
        cout << "Water";
    }
}