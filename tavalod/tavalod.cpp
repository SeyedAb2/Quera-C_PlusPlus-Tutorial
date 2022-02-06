#include <iostream>
using namespace std;

int main(){
    string date,maah,saal;
    cin >> date; // example : 7807
    saal = date.substr(0,2); // slice string date (0,2) => saal : 78
    maah = date.substr(2,4); // slice string date (2,4) => maah : 07
    cout <<"saal:" + saal<<endl<<"maah:" + maah<<endl;
    return 0;
}