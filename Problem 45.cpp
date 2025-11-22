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
	int Phone;
	int AccountBalance;
};

strUserInfo UserInput()
{
	strUserInfo UserInfo;

	cout << "AccountNum : ";
	getline(cin, UserInfo.AccountNum);

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

void PrintResult(strUserInfo UserInfo , string D = " ")
{
	cout << UserInfo.AccountNum << D << UserInfo.PinCode << D << UserInfo.Name << D << UserInfo.Phone << D << UserInfo.AccountBalance;
}

int main()
{
	PrintResult(UserInput(), "#//#");
}
