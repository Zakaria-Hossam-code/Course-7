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

string TrimLeft(string S)
{
	for (int i = 0;i < S.length();i++)
	{
		if (S[i] != ' ')
		{
			return S.substr(i, S.length() - i);
		}
	}
	return "";
}

string TrimRight(string S)
{
	for (int i = S.length() - 1;i >= 0;i--)
	{
		if (S[i] != ' ')
		{
			return S.substr(0, i+1);
		}
	}
	return "";
}


int main()
{
	string S = ReadString();
	cout << "TrimLeft  : [" << TrimLeft(S) << "]" << endl;
	cout << "TrimRight : [" << TrimRight(S) << "]" << endl;
	cout << "Trim      : [" << TrimRight(TrimLeft(S)) << "]" << endl;
}
