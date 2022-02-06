#include <iostream>
using namespace std;
int main(){
 string s;
    char c;
    cin>>s;
    int i=0;
    c=s[i] ;
    while(c){
        if(c=='0') cout << "0: \n";
        if(c=='1') cout << "1: 1\n";
        if(c=='2') cout << "2: 22\n";
        if(c=='3') cout << "3: 333\n";
        if(c=='4') cout << "4: 4444\n";
        if(c=='5') cout << "5: 55555\n";
        if(c=='6') cout << "6: 666666\n";
        if(c=='7') cout << "7: 7777777\n";
        if(c=='8') cout << "8: 88888888\n";
        if(c=='9') cout << "9: 999999999\n";
        i++;
        c=s[i] ;
    }
    return 0;
}