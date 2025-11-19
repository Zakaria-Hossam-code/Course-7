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

bool IsNumberInMatrix(int arr[3][3], int Rows, int Col,int Number)
{
	for (int i = 0; i < Rows;i++)
	{
		for (int j = 0; j < Col;j++)
		{
			if (Number == arr[i][j])
			{
				return true;
			}
		}
	}
	return false;
}

void PrintMatualNumbers(int arr[3][3], int arr2[3][3], int Rows, int Col )
{
	int Number;
	for (int i = 0; i < Rows;i++)
	{
		for (int j = 0; j < Col;j++)
		{
			Number = arr[i][j];
			if (IsNumberInMatrix(arr2, 3, 3, Number))
			{
				cout << setw(3) << Number << "   ";
			}
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	
	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	int Matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };


	cout << "Matrix 1 : " << endl;
	PrintMatrix(Matrix1, 3, 3);
	
	cout << "Matrix 2 : " << endl;
	PrintMatrix(Matrix2, 3, 3);

	cout << "\nIntersected Numbers are: \n\n";
	PrintMatualNumbers(Matrix1, Matrix2, 3, 3);
}
