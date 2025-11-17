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

	int arr[3][3];
	int sum[3] = { 0,0,0 };

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			arr[i][j] = RondomNumInRange(1, 100);
		}
	}

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
			sum[i] += arr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < 3;i++)
	{
		cout << "Sum Row " << i + 1 << " : " << sum[i] << endl;
	}
}
