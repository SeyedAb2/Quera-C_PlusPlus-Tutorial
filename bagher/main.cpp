#include<iostream>
 using namespace std;

int main(){
int n,d,distance,redLight,greenLight,lightDistance=0,time=0,allTime=0;
cin>>n>>d;
int i = 0;
    while (i < n)
    {
        cin>>distance>>redLight>>greenLight;
        time+=distance-lightDistance;
        lightDistance=distance;
        while(time%(redLight+greenLight)<redLight){
            time++;
        }
        i++;
    }
    time+=d-lightDistance;
    lightDistance=d;
    if(time>0){
        cout<<time;
    }
    else{
        cout << 0;
    }
    
    
    return 0;     
}
