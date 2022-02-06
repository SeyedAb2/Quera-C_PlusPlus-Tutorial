#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string simple_tokenizer(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word) {
        return word;
        break;
    }
}
int main() {
    int n,counter=0;
    cin>>n;
    cin.ignore(1,'\n');
    string names[n];
    int moreRepeat[n];
    for(int i=0;i<n;i++){
        getline(cin,names[i]);
        names[i] = simple_tokenizer(names[i]);
    }
    
    for(int i=0;i<n;i++){
        string temp = names[i];
        for(int j=0;j<n;j++){
            if(temp == names[j]){
                counter++;
            }
        }
        moreRepeat[i] = counter;
        counter = 0;
    }
    int max = moreRepeat[0];
    for(int i=0;i<n;i++){
        if (moreRepeat[i] > max)
            max = moreRepeat[i];
    }
    cout<<max;
    return 0;
}