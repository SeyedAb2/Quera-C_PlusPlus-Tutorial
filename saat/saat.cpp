#include <iostream>
using namespace std;

int MirrorClock(int hh,int mm);
int main(){
    int hh,mm;
    cin >>hh>>mm;
    if(hh >= 0 && hh <= 11 && mm>= 0 && mm <= 59){
        MirrorClock(hh,mm);
    }
    else{
        //// invalid numbers
    }
    return 0;
}
int MirrorClock(int hh,int mm){
    string pattern;
    if(hh == 0 && mm == 0){
        pattern = "00:00";
        cout << pattern;
    }
    if(hh==0 && mm !=0){
        if(mm>50){
            mm = 60-mm;
            pattern = "00:0";
            cout << pattern << mm;
        }
        else{
            mm = 60-mm;
            pattern = "00:";
            cout << pattern << mm;
        }
    }
    if(hh!=0 && mm==0){
        hh = 12 - hh;
        if(hh>=10){
            pattern = ":00";
            cout << hh<<pattern;
        }
        else{
            pattern = ":00";
            cout <<"0"<< hh<<pattern;
        }
    }
    if(hh!=0 && mm!=0){
        hh = 12 - hh;
        if(hh>=10){
            if(mm>50){
                mm = 60-mm;
                pattern = ":0";
                cout <<hh<< pattern << mm;
            }
            else{
                mm = 60-mm;
                cout <<hh<<":" << mm;
            }
        }
        else{
            if(mm>50){
                mm = 60-mm;
                pattern = ":0";
                cout <<"0"<<hh<< pattern << mm;
            }
            else{
                mm = 60-mm;
                cout <<"0"<<hh<<":" << mm;
            }
        }
    }
    return 0;
}