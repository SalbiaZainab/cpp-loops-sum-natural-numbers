#include <iostream>
using namespace std;
int main()
{
	int N , sum;
	cout << "Please enter N: ";
	cin >> N;
	for(int i = 0; i <= N; i++)
	{
		sum += i;
	}
	cout << "Sum of first " << N << " numbers is : " << sum << endl;
}
