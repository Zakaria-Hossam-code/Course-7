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

string Reverse(vector <string> vString, string D = " ")
{
	string S = "";
	
	vector <string>::iterator iter = vString.end();
	while (iter != vString.begin())
	{
		--iter;
		S += *iter + D;
	}

	return S.substr(0, S.length() - D.length());
}

int main()
{
	vector <string> vString;
	vString = Split(ReadString());

	cout << Reverse(vString);
}
