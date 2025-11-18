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

	bool b = true;
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
			if (i == j)
			{
				if (arr[i][j] == 0)
				{
					b = false;
				}
			}
			else
			{
				if (arr[i][j] != 0)
				{
					b = false;
				}
			}
		}
		cout << endl;
	}


	if (b == false)
	{
		cout << "False ";
	}
	else
		cout << "True ";
}

