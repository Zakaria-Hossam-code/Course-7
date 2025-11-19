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

bool IsPalindrome(int arr[3][3], int Rows, int Col)
{
	for (int i = 0; i < Rows;i++)
	{
		for (int j = 0; j < Col / 2;j++)
		{
			if (arr[i][j] != arr[i][Col-j-1])
			{
				return false;
			}
		}
	}
	return true;
}

void PrintResult(int arr[3][3])
{
	if (IsPalindrome(arr,3,3))
		cout << "YESS :-)";
	else
		cout << "NO :-(";
}

int main()
{
	srand((unsigned)time(NULL));
	
	int arr[3][3] = { {1,2,1},{5,5,5},{7,3,7} };

	cout << "Matrix 1 : " << endl;
	PrintMatrix(arr, 3, 3);

	PrintResult(arr);
}
