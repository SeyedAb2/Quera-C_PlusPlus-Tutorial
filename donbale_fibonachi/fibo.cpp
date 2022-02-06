#include <iostream>
using namespace std;

void ShowFibNth(long int n, long int z);
int main() {
    int x,y;
    cin >> x >> y;
    ShowFibNth(x,y);
    return 0;
}
void ShowFibNth(long int n, long int z){
    if(z==1){
        cout<< 1 << endl ;
    }
    else{
        if(z == 2){
            cout<< 1 << endl  ;
        }   
        else{
            cout<< n <<endl ;
        }     
        ShowFibNth(z-n,n);
   }
}