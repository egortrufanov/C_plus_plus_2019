#include <iostream>;
using namespace std;
int main()
{
	int s=0, k, m;
	cin >> k >> m;
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			s += i;
	}
	cout << s;
}