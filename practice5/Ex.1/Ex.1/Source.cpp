#include <iostream>;
using namespace std;
int main()
{
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << "Summa: " << s << " Sr. znach.: " << (double)s / n << endl;
	int sum_neg = 0, sum_pos = 0, sum_nech = 0, sum_ch = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
			sum_neg += mas[i];
		else if (mas[i] > 0)
			sum_pos += mas[i];
	}
	cout << "Summa otricatel'nyh: " << sum_neg << endl;
	cout << "Summa polozhitel'nyh: " << sum_pos << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			sum_ch += mas[i];
		else if (i % 2 != 0)
			sum_nech += mas[i];
	}
	cout << "Summa elementov s nechetnym nomerom: " << sum_nech << endl;
	cout << "Summa elementov s chetnym nomerom: " << sum_ch << endl;
}