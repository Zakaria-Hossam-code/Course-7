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

vector <string> Split(string S, string D = " ")
{
	vector <string> vString;
	int pos = 0;
	string sWord;

	while ((pos = S.find(D)) != std::string::npos)
	{
		sWord = S.substr(0, pos);

		if (sWord != " ")
		{
			vString.push_back(sWord);
		}
		S.erase(0, pos + D.length());
	}

	if (S != "")
	{
		vString.push_back(S);
	}


	return vString;
}

void ReplaceString(vector <string> vString ,string from ,string to)
{
	for (string& word : vString)
	{
		if (word == from)
		{
			word = to;
		}
		cout << word << " ";
	}
	cout << endl;
}


void ReplaceStringNoMachCase(vector <string> vString, string from, string to)
{
	string S = "";
	for (string& word : vString)
	{
		for (int i = 0;i < word.length();i++)
		{
			if (toupper(word[i]) == toupper(from[i]))
			{
				word = to;
			}
		}
		cout << word << " ";
	}
}

int main()
{
	string S = "Welcome to Jordan , Jordan is a nice country";

	ReplaceString(Split(S), "jordan", "USA");

	ReplaceStringNoMachCase(Split(S), "jordan", "USA");
}
