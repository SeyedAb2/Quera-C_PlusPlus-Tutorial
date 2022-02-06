#include <iostream>

using namespace std;
int main() {
    int a,b,c,start_f,end_l,max=0,min=1000,total_pair=0;
    int vorod, khoroj,s=0;
    cin >> a >> b >> c;
    int allTimes[6];
    for(int i=0;i<3;i++){
        cin>>start_f>>end_l;
        if (end_l>max){
            max = end_l;
        }
        if(start_f<min){
            min = start_f;
        }
        allTimes[s]=start_f;
        allTimes[s+1]=end_l;
        s=s+2;
    }
    max = max + 1;
    int empty[max];
    
    for(int i=0;i<max;i++){
        empty[i]=0;
    }
    for(int i=0;i<6;i+=2){
        khoroj = allTimes[i+1];
        vorod = allTimes[i];
        for(vorod;vorod<khoroj;vorod++){
            empty[vorod]++;
        }
    }
    for(int i=0;i<max;i++){
        if(empty[i]==1){
            total_pair = total_pair + a;
        }
        if(empty[i]==2){
            total_pair = total_pair + b*2;
        }
        if(empty[i]==3){
            total_pair = total_pair + c*3;
        }
    }
    cout<<total_pair;
    return 0;
}