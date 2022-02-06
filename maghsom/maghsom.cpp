#include <iostream>
using namespace std;

int Count_Sum(int n,int count,int sum);
int main()
{
    int n;
    int sum = 0;
    int count = 0; 
    cin >> n;
    Count_Sum(n,count,sum);
    return 0;
}
int Count_Sum(int n,int count,int sum){
    int array[2];
    for (int i = 1; i <= n; i++) {
        for (int j=1;j<=i;j++){
            if (i%j==0) {
                sum+= j;
                count++;
            }
        }     
    }
    array[0] = count;
    array[1] = sum;
    cout << array[0] << " " << array[1];
}