#include <iostream>
#include <iomanip>
#include <set>
using namespace std;

int RondomNumInRange(int From, int To)
{
	int Num = rand() % (To - From + 1) + From;

	return Num;
}

void PrintMatrix(int arr[3][3],int Rows, int Col)
{
	for (int i = 0; i < Rows;i++)
	{
		for (int j = 0; j < Col;j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}

void MaxNumberInMatrix(int arr[3][3], int Rows, int Col)
{
	int Number = 0;
	for (int i = 0; i < Rows;i++)
	{
		for (int j = 0; j < Col;j++)
		{
			if (Number <= arr[i][j])
			{
				Number = arr[i][j];
			}
		}
	}

	cout << "Max Number Is : " << Number << endl;
}

void MinNumberInMatrix(int arr[3][3], int Rows, int Col)
{
	int Number = 100;
	for (int i = 0; i < Rows;i++)
	{
		for (int j = 0; j < Col;j++)
		{
			if (Number >= arr[i][j])
			{
				Number = arr[i][j];
			}
		}
	}

	cout << "Min Number Is : " << Number;
}


int main()
{
	srand((unsigned)time(NULL));
	
	int arr[3][3] = { {77,5,12},{22,20,1},{1,0,9} };

	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr, 3, 3);

	MaxNumberInMatrix(arr, 3, 3);
	MinNumberInMatrix(arr, 3, 3);
}
