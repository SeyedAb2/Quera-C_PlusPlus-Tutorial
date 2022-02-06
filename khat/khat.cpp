#include <iostream>
using namespace std;
int x1,y1,x2,y2;
string BossVSemployer(int x1,int y1,int x2,int y2){
    if(x1 == x2){
        return "Vertical";
    }
    else if(y1 == y2){
        return "Horizontal";
    }
    else{
        return "Try again";
    }
}
int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    cout<<BossVSemployer(x1,y1,x2,y2);
    return 0;
}
