#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	print:
	cout << n << " ";
	if(n == 1)
	{
		cout<<endl;
		return 0;
	}
	else if(n % 2 == 1)
		n = 3 * n + 1;
	else if(n % 2 == 0)
		n = n / 2;
	goto print;

	return 0;
}
