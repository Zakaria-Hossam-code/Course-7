#include <iostream>
#include <iomanip>
#include <set>
using namespace std;

void FibonacciUsingRecurssion(int N, int Number1 , int Number2)
{
	cout << Number2 << " ";
	Number2 += Number1;
	Number1 = Number2 - Number1;
	if (N > 2)
	{
		FibonacciUsingRecurssion(N - 1, Number1, Number2);
	}
}

int main()
{
	int N;
	cout << "Enter a Number : ";
	cin >> N;

	int Number1 = 1;
	int Number2 = 1;
	cout << Number1 << " ";
	FibonacciUsingRecurssion(N, Number1, Number2);
}
