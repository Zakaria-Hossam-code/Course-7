#include <iostream>
#include <iomanip>
using namespace std;

int RondomNumInRange(int From, int To)
{
	int Num = rand() % (To - From + 1) + From;

	return Num;
}

int main()
{
	srand((unsigned)time(NULL));

	cout << "Matrix 1 : " << endl;
	int arr[3][3];

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			arr[i][j] = RondomNumInRange(0, 10);
		}
	}

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}

	int num;
	cout << "Enter a number : ";
	cin >> num;

	bool counter = false;
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			if (arr[i][j] == num)
			{
				counter = true;
				break;
			}
		}
	}
	cout << endl;
	if (counter)
		cout << "YES ";
	else
		cout << "NO";
}
