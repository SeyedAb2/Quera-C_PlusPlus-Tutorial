#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int renameMovie(string film){
    for(int i=0;i<film.length();i++){
        if(i==0 && char(film[0]) != ' '){
            cout << char(toupper(film[0]));
        }
        if(film[i] == ' '){
            cout << char(film[i]);
            cout << char(toupper(film[i+1]));
        }else if(film[i] != ' ' && film[i-1] == ' '){
            cout << "";
        }
        else{
            if(i==0){
                cout << "";
            }
            else{
                cout << char(tolower(film[i]));
            }
        }
    }
}
int main() {
    int n;
    cin >>n;
    cin.ignore(1,'\n');
    string temp[n];
    string film;
    for(int j=0;j<n;j++){
        getline(cin,film);
        temp[j] = film;
    }  
    for(int k=0;k<n;k++){
        renameMovie(temp[k]);
        cout<<endl;
    }
    
    return 0;
}

