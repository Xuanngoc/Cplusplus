#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n)
{
	for(int i=2; i<= sqrt(n); i++)
	{
		if ( n % i == 0)
			return 0;
	}
	return 1;	
}

int fac(int n)
{
	if(n==1)
		return 1;
	return (n * fac(n-1));
}

void binary(int n)
{
	if( n < 1 )
		return;
	binary(n/2);
	cout<<(n%2);
}

int main()
{
	int n;
	cin >> n;
	cout<<isprime(n)<<"\n";
	cout<<"Factorial "<<n<<"= ";
	cout<<fac (n)<<"\n";
	cout<<n<<" to "<<"Binary= ";
	binary(n);
	cout<<"\n";
}