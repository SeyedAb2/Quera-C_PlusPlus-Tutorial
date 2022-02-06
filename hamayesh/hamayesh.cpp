#include <iostream>
using namespace std;

int RowStep(int r);
int ChairPlacement(int c);
int LeftOrRight(int c);
int main(){
    int r,c;
    cin >> r >> c;
    if(r>=1 && r<=10 && c>=1 && c<=20){
        LeftOrRight(c);
        RowStep(r);
        ChairPlacement(c);
    }
    else{
        ////invalid number
    }
    return 0;
}
int RowStep(int r){
    cout << (11-r) <<" ";
    return 0;
}
int ChairPlacement(int c){
    if(c>10){
        cout << 21-c;
    }
    else{
        cout << c;
    }
    return 0;
}
int LeftOrRight(int c){
    if(c<=10){
        cout << "Right ";
    }
    else{
        cout << "Left ";
    }
    return 0;
}