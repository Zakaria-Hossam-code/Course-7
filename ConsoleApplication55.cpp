#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			cout << setw(3) << arr[j][i] << "   ";
		}
		cout << endl;
	}
}
