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

	int ZeroCounter = 0;
	int NumCounter = 0;
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
			if (arr[i][j] == 0)
			{
				ZeroCounter++;
			}
			else
			{
				NumCounter++;
			}
		}
		cout << endl;
	}

	if (ZeroCounter > NumCounter)
	{
		cout << "TRUE";
	}
	else
	{
		cout << "FALSE";
	}
	
}

