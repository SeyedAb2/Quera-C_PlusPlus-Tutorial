#include <iostream>
using namespace std;

int main() {
    int counter=0,k,returnVal;
    string pass,temp;
    cin >> k >> pass;
    for(int i=0;i<k;i++){
        cin >> temp;
        char pass_number = pass[i];
        int ccw=0,cw=1;
        char tempCCW,tempCW;
        for (int j=0;j<9;j++){
            tempCCW = temp[j];
            if(tempCCW != pass_number){
                ccw ++ ;
            }
            else{
                break;
            }
        }
        for(int k=8;k>=0;k--){
            tempCW = temp[k];
            if(tempCW != pass_number){
                cw ++ ;
            }
            else{
                break;
            }
        }
        if(ccw>cw){
            counter = counter +  cw;
        }
        else{
            counter = counter +  ccw;
        }
    }
    cout << counter;
    return 0;
}