
#include <iostream>


using namespace std;

int main()
{
	int number;
	cin >> number;
    int count = 0;

   for (int i = 1; i <= number / 2;i++)
	if(number % i == 0)
		count += i;

	if(count == number)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
