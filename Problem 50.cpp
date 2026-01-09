#include <iostream>
#include <iomanip>
#include <set>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct stUserInfo
{
	string AccountNum;
	string PinCode;
	string Name;
	string Phone;
	float AccountBalance;
};

string ReadAccountNum()
{
	string ReadAccountNum = "";
	cout << "Enter AccountNum : ";
	cin >> ReadAccountNum;

	return ReadAccountNum;
}

vector <string> Split(string S, string D = " ")
{
	vector <string> vWords;

	string word;
	short pos = 0;

	while ((pos = S.find(D)) != string::npos)
	{
		if (D != "")
		{
			word = S.substr(0, pos);
			vWords.push_back(word);
		}
		S.erase(0, pos + D.length());
	}
	if (S != "")
	{
		vWords.push_back(S);
	}
	return vWords;
}

stUserInfo ConvertLinetoStruct(string line, string D = "#//#")
{
	stUserInfo stUserInfo;
	vector <string> vRecords = Split(line, D);

	stUserInfo.AccountNum = vRecords[0];
	stUserInfo.PinCode = vRecords[1];
	stUserInfo.Name = vRecords[2];
	stUserInfo.Phone = vRecords[3];
	stUserInfo.AccountBalance = stof(vRecords[4]);

	return stUserInfo;
}

string ConvertStructtoLine(stUserInfo stUserInfo, string D = "#//#")
{
	string S = "";
	S = stUserInfo.AccountNum + D;
	S += stUserInfo.PinCode + D;
	S += stUserInfo.Name + D;
	S += stUserInfo.Phone + D;
	S += to_string(stUserInfo.AccountBalance);

	return S;
}

vector <stUserInfo> LoadRecordsfromFile(string FileName)
{
	vector <stUserInfo> vRecords;

	fstream fRecords;
	fRecords.open("fRecord.txt", ios::in);
	if (fRecords.is_open())
	{
		string line;
		stUserInfo Client;

		while (getline(fRecords, line))
		{
			if (line != "")
			{
				Client = ConvertLinetoStruct(line);
				vRecords.push_back(Client);
			}
		}

		fRecords.close();
	}
	return vRecords;
}

bool FindAccountNum(string AccountNum, stUserInfo& Client)
{
	vector <stUserInfo> vClients = LoadRecordsfromFile("fRecord.txt");

	for (stUserInfo C : vClients)
	{
		if (C.AccountNum == AccountNum)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

void SaveCleintsDataToFile(vector <stUserInfo> vClients)
{
	fstream fRecords;
	fRecords.open("fRecord.txt", ios::out);

	if (fRecords.is_open())
	{
		string line;
		for (stUserInfo C : vClients)
		{
			line = ConvertStructtoLine(C);
			fRecords << line << endl;
		}

		fRecords.close();
	}
}

void DeleteClient(stUserInfo Client)
{
	vector <stUserInfo> Clients = LoadRecordsfromFile("fRecord.txt");
	vector <stUserInfo> newClients;

	char c = ' ';
	cout << "Are you sure you want to delete client (y/n) ?";
	cin >> c;

	if (c == 'y')
	{
		for (stUserInfo C : Clients)
		{
			if (C.AccountNum != Client.AccountNum)
			{
				newClients.push_back(C);
			}
		}
		SaveCleintsDataToFile(newClients);
	}

	cout << "Client deleted successfully" << endl;
}

void PrintClientCard(stUserInfo Client)
{
	cout << "\nThe following are the client details:\n";
	cout << "\nAccout Number: " << Client.AccountNum;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;

	DeleteClient(Client);
}

int main()
{
	stUserInfo User;
	string AccountNum = ReadAccountNum();

	if (FindAccountNum(AccountNum, User))
	{
		PrintClientCard(User);
	}
	else
	{
		cout << "\nClient with Account Number (" << AccountNum << ") is Not Found!";
	}
}
