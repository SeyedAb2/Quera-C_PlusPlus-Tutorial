#include<iostream>
using namespace std;
int main()
{
	int x, n, m, r, y = 1, z, s, h = 0, p = 1;
	cin >> x >> n;
	cin >> m;
	z = x;
	if (n!=10)
	{
		z = 0;
		while (x!=0)
		{
			r = x % 10;
			x = x / 10;
			z = z + y*r;
			y = y*n;
		}
	}
	while (z!=0)
	{
		r = z%m;
		z = z / m;
		h = h + p*r;
		p = p * 10;
	}
	int real = h;
	int realNumber = real;
	int reverse = 0;
	int rem , mines;
	while(real !=0)
    {
        rem=real%10;    
        reverse=reverse*10+rem;    
        real/=10;  
    }
    mines = reverse-realNumber;
	
    if(mines == 0)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
	return 0;
}

