#include <iostream>
#include <iomanip>
#include <set>
using namespace std;



int main()
{
	int N;
	cout << "Enter a Number : ";
	cin >> N;

	int Number1 = 1;
	int Number2 = 1;
	cout << Number1 << " ";
	for (int i = 0; i < N-1;i++)
	{
		cout << Number2 << " ";
		Number2 += Number1;
		Number1 = Number2 - Number1;
	}
}
