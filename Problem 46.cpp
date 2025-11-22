#include <iostream>
#include <iomanip>
#include <set>
#include <string>
#include <vector>
using namespace std;

struct strUserInfo
{
	string AccountNum;
	string PinCode;
	string Name;
	string Phone;
	string AccountBalance;
};

vector<string> Split(string S , string D)
{
	vector<string> vString;
	int pos = 0;
	string sWord;

	while ((pos = S.find(D)) != std::string::npos)
	{
		sWord = S.substr(0, pos);
		if (sWord != "")
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

strUserInfo ConvertLinetoRecord(string S, string D = "#//#")
{
	strUserInfo UserInfo;
	vector<string> vString = Split(S, D);

	UserInfo.AccountNum = vString[0];
	UserInfo.PinCode = vString[1];
	UserInfo.Name = vString[2];
	UserInfo.Phone = vString[3];
	UserInfo.AccountBalance = vString[4];

	return UserInfo;
}

void PrintResults(strUserInfo UserInfo)
{
	cout << "AccountNum : " << UserInfo.AccountNum << endl;

	cout << "PinCode : " << UserInfo.PinCode << endl;

	cout << "Name : " << UserInfo.Name << endl;

	cout << "Phone : " << UserInfo.Phone << endl;

	cout << "AccountBalance : " << UserInfo.AccountBalance << endl;
}

int main()
{
	string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";

	cout << "\nLine Record is:\n";  
	cout << stLine << endl;

	strUserInfo UserInfo = ConvertLinetoRecord(stLine);

	PrintResults(UserInfo);
}
