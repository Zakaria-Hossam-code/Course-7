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

string InvertString(string S)
{
	for (int i = 0;i < S.length();i++)
	{
		S[i] = isupper(S[i]) ? tolower(S[i]) : toupper(S[i]);
	}
	return S;
}


int main()
{
	cout << InvertString(ReadString());
	
}
