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
			arr[i][j] = RondomNumInRange(1, 10);
		}
	}
	int counter = 0;
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
			counter += arr[i][j];
		}
		cout << endl;
	}

	cout << "Result : " << counter <<endl;


	cout << "Matrix 2 : " << endl;
	int arr2[3][3];

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			arr2[i][j] = RondomNumInRange(1, 10);
		}
	}
	int counter2 = 0;
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout << setw(3) << arr2[i][j] << "   ";
			counter2 += arr2[i][j];
		}
		cout << endl;
	}

	cout << "Result : " << counter2 << endl;



	if (counter == counter2)
	{
		cout << "HA3 :-)";
	}
	else 
		cout << "MESH HA3 :-(";
}
