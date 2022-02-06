#include <iostream>
using namespace std;
string IS_TRIANGLE(int t1,int t2,int t3);

int main(){
    int t1,t2,t3;
    cin >>t1>>t2>>t3;
    cout << IS_TRIANGLE(t1,t2,t3);
    return 0;
}
string IS_TRIANGLE(int t1,int t2,int t3){
    if((t1 > 0 && t1 < 180) && (t2 > 0 && t2 < 180) && (t3 > 0 && t3 < 180))
    {
        if((t1+t2+t3) == 180)
            return "Yes";
        else
            return "No";
    }
    else{
        return "No";
    }
}
