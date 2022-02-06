#include <iostream>
using namespace std;

int temp;
int GCD(unsigned long long a,unsigned long long b);
int main() {
    unsigned long long A,B,temp_A,temp_B;
    cin >>A>>B;
    if(A>=B){
        temp_A = A;
        temp_B = B;
    }
    else{
        temp_A = B;
        temp_B = A;
    }
    cout << GCD(temp_B,temp_A);
    return 0;
}

int GCD(unsigned long long a,unsigned long long b){
    
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return GCD(a-b, b);
    else return GCD(a, b-a);
}