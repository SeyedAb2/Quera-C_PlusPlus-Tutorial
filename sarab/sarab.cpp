#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin >> t;
    int time[t];
    for(int i=0;i<t;i++){
        cin >> x >> y;
        if(x>=0 && y>=0){
            if(x==0 && y==0){
                time[i] = 0;
            }
            else if(x==1 && y==1){
                time[i] = 1;
            }
            else{
                if(y!=x && y!=(x-2)){
                    time[i]=-1;
                }
                else{
                    if(x==y && x%2==0){
                        time[i]=2*x;
                    }
                    else if(x==y && x%2!=0){
                        time[i]=2*x-1;
                    }
                    else if(y==(x-2) && x%2==0){
                        time[i] = 2*y +2;
                    }
                    else if(y==(x-2) && x%2!=0){
                        time[i] = 2*y + 1;
                    }
                }
            }
        }
        else{
            /// invalid number
        }
    }
    
    for(int i=0;i<t;i++){
        cout<<time[i]<<endl;
    }
    return 0;
}