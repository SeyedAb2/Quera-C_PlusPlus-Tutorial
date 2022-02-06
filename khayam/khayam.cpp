#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int Template, n, s;
    cin>>n;
    int numbers [n+1]={0};
    s=n-1;
    numbers[s] = 1;
    for( int i=0; i<n; i++){
        cout<<"\n";   
        for( int j=0; j<=i; j++){
            Template = numbers[s+j] + numbers[s+j+1];
            cout<<Template<<setw(4);
            numbers[s+j] = Template;
        }
        s--;
    }
    return 0;
}
