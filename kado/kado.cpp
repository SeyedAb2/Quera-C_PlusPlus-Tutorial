#include <iostream>
using namespace std;
int LookAward(int height,int sibling_height);
int main()
{
    int n,m;
    string award,temp_award;
    cin>>n>>m;
    int height[n],increase_height[n];
    for(int i=0;i<n;i++){
        cin >> height[i];
    }
    cin>>award;
    for(int i=0;i<m;i++){
        temp_award = award[i];
        if(temp_award == "R"){
            for(int j=0;j<n-1;j++){
                height[j] = LookAward(height[j],height[j+1]);
            }
        }
        else if(temp_award == "L"){
            for(int j=n-1;j>0;j--){
                height[j] = LookAward(height[j],height[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout << height[i];
        }
        else{
            cout << height[i]<<" ";
        }
    }
    return 0;
}
int LookAward(int height,int sibling_height){
    int temp_height_value;
    if(height<sibling_height){
        temp_height_value = height + 1;
    }
    else{
        temp_height_value = height;
    }
    return temp_height_value; 
}