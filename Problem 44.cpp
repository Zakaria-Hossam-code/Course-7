#include <iostream>
#include <iomanip>
#include <set>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
	string S;
	cout << "Please Enter a String : ";
	getline(cin, S);
	return S;
}

string RemovePunc(string S)
{
	string S2 = "";
	for (int i = 0;i < S.length();i++)
	{
		if (!ispunct(S[i]))
		{
			S2 += S[i];
		}
	}
	return S2;
}

int main()
{
	string S = "Welcome to Jordan , Jordan is a nice country";

	cout << RemovePunc(S);
}
