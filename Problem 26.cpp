#include <iostream>
#include <iomanip>
#include <set>
#include <string>
using namespace std;

string ReadString()
{
	string S;
	cout << "Please Enter Your String : ";
	getline(cin, S);
	return S;
}

void UPPERlower(string S)
{
	for (int i = 0;i < S.length();i++)
	{
		S[i] = towupper(S[i]);
	}
	cout << "UPPER :" << S << endl;

	for (int i = 0;i < S.length();i++)
	{
		S[i] = towlower(S[i]);
	}
	cout << "lower :" << S << endl;
}

int main()
{
	UPPERlower(ReadString());
}
