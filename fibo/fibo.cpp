#include <iostream>
using namespace std;

int main() {
    int num,j = 0;
    int arr[101];
    cin >> num;
    arr[0] = 1;
    arr[1] = 2;
    for (int i = 2; i <= num; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    for (int i = 1; i <= num; i++) {
        if(i == arr[j])
        {
            cout << "+";
            j++;
        }
        else
        {
            cout << "-";
        }
    }
    return 0;
}