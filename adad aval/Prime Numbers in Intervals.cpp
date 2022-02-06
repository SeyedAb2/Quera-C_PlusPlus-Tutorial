# include <iostream>
using namespace std;

int prime(int x)
{
	int r;
	// if x is a prime number --> r = 1
	// if x is a composite number --> r = 0
	// if x < 2 --> r = -1
	
	if (x < 2)
	{
		r = -1;
	}
	else
	{
		int flag = 0;
		
		for (int i = 2; i < x ; i++)
		{
			if (x % i == 0)
			{
				flag = 1;
				break;
			}			
		}
		
		if (flag == 0)
		{
			r = 1;
		}
		else
		{
			r = 0;
		}		
	}
	
	return r;	
}

int main()
{
	cout << "Prime and Composite Natural Numbers \n\n";
	cout << "To exit the program, enter an integer less than 1. \n\n";
	cout << "Programmer: Mohammad Rajabpur \t\t rajabpur.blogsky.com \n\n";
	
	while (true)
	{
		int a, b;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		
		if (a < 1 || b < 1 || a == b)
		{
			cout << "The program is terminated";
			break;
		}
		
		if (b < a)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		
		int n = 0;
		
		for (int i = a + 1; i < b; i++)
		{
			if (prime(i) == 1)
			{
				cout << i;
				n += 1;
				cout << "\t";
			}
		}
		
		cout << "\n";
		cout << n;
		cout << " prime numbers exist between a & b. \n\n";
	}
}
