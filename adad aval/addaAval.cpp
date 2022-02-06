#include<iostream>
using namespace std;

int main(){
    int n1,n2,i,flag,temp;
    cin >> n1;
    cin >> n2;
    cout << endl;
    if(n1>=0 && n2>=0){
        if (n1>=n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        for(i=n1;i<=n2;++i) {
            if(i==0 || i == 1) continue;
            int j,flag=0;
            for(j=2;j<=i/2;++j){ 
            if(i%j==0){
                flag=1; break;
            } 
        }
            if(flag==0) cout  << i << endl; 
        }
    }
    else{
        ///// invalid input  (mines numbers)  a>1 , b<10000
    }
    return 0; 
} 