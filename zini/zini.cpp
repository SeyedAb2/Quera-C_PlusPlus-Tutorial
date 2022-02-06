#include <iostream>
using namespace std;

int main(){
    int m,n,sum=0;
    int up,down,left,right,temp;
    cin >> n >> m;
    int array_2D[n][m];
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cin>>array_2D[i][j];
        }
    }
    for(int i=1;i<n-1;i++){
        for (int j = 1; j < m-1; j++)
        {
            up = array_2D[i-1][j];
            down = array_2D[i+1][j];
            left = array_2D[i][j-1];
            right = array_2D[i][j+1];
            temp = array_2D[i][j];
            //cout << up << down << left << right;
            // if(((temp > up && temp > down) && (temp < up && temp < down)) || ((temp < up && temp < down) && (temp > up && temp > down))){
            //     sum+=1;
            // }
            if(temp < up && temp < down && temp >left && temp>right){
                sum+=1;
            }
            else if(temp > up && temp > down && temp < left && temp < right){
                sum+=1;
            }
        }
    }
    cout << sum;
    return 0;
}