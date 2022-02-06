#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    string a[5];
    for (int i = 1; i <= 5; i++) {
        cin >> a[i-1];
    }
    
    for (int i = 1; i <= 5; i++) {
        if (a[i-1].find("MOLANA") != std::string::npos || a[i-1].find("HAFEZ") != std::string::npos) {
            cout << i << " ";
            counter = counter + 1;
        }
    }
    
    if (counter == 0){
        cout << "NOT FOUND!";        
    }
    else{
        
    }
    return 0;
}