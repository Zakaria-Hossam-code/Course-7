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

string JoinString(vector < string> vString , string D =" ")
{
	string S = "";
	for (string& word : vString)
	{
		S += word + D;
	}
	return S.substr(0, S.length() - D.length());
}

int main()
{
	vector < string> vString = { "ZE","KO","HO","SS" };

	cout << JoinString(vString);
}
