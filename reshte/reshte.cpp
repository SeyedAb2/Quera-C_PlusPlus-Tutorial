#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num >=1 && num <=100)
    {
        string sentence[num];
        for(int i=0;i<num;i++)
        {
            cin >> sentence[i];
        }
        for (int j=num;j>0;j--)
        {
            cout << sentence[j-1] << " ";
        }
    }
    else
    {
        ///invalid number
    }
    return 0;
}