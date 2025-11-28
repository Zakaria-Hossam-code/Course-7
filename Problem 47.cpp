#include <iostream>
#include <iomanip>
#include <set>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct strUserInfo
{
	string AccountNum;
	string PinCode;
	string Name;
	int Phone;
	int AccountBalance;
};

strUserInfo ReadUserInput()
{
	strUserInfo UserInfo;

	cout << "AccountNum : ";
	getline(cin >> ws, UserInfo.AccountNum);

	cout << "PinCode : ";
	getline(cin, UserInfo.PinCode);

	cout << "Name : ";
	getline(cin, UserInfo.Name);

	cout << "Phone : ";
	cin >> UserInfo.Phone;

	cout << "AccountBalance : ";
	cin >> UserInfo.AccountBalance;

	return UserInfo;
}

string CconvertRecordtoLine(strUserInfo UserInfo, string D = " ")
{
	string S = "";
	S += UserInfo.AccountNum + D;
	S += UserInfo.PinCode + D;
	S += UserInfo.Name + D;
	S += to_string(UserInfo.Phone) + D;
	S += to_string(UserInfo.AccountBalance) + D;

	return S;
}

fstream MakeFile(string S)
{
	fstream fRecord;
	fRecord.open("fRecord.txt", ios::out | ios::app);

	if (fRecord.is_open())
	{
		fRecord << S << endl;

		fRecord.close();
	}
	return fRecord;
}

void AddNewUser()
{
	strUserInfo UserInfo;
	UserInfo = ReadUserInput();
	MakeFile(CconvertRecordtoLine(UserInfo, "#//#"));
}

void AddUsers()
{
	char AddMore = 'Y';

	do
	{
		AddNewUser();

		cout << "Do you want to add more users ? ";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
}

int main()
{
	AddUsers();
}
