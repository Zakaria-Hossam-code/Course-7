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

vector <string> LoadRecordsFromFile()
{
	vector <string> vRecords;

	fstream fRecords;

	fRecords.open("fRecord.txt", ios::in);

	if (fRecords.is_open())
	{
		string line;

		while (getline(fRecords, line))
		{
			if (line != "")
			{
				vRecords.push_back(line);
			}
		}
		fRecords.close();
	}
	return vRecords;
}

vector <string> Split(string S, string D = "#//#")
{
	vector <string> vWords;
	string word = "";
	short pos = 0;

	while ((pos = S.find(D)) != string::npos)
	{
		word = S.substr(0, pos);

		if (word != "")
		{
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

stUserInfo ConverttoStruct(string S)
{
	stUserInfo UserInfo;

	vector <string> vWords = Split(S);

	UserInfo.AccountNum = vWords[0];
	UserInfo.PinCode = vWords[1];
	UserInfo.Name = vWords[2];
	UserInfo.Phone = vWords[3];
	UserInfo.AccountBalance = stof(vWords[4]);

	return UserInfo;
}

void PrintClientRecord(stUserInfo Client)
{
	cout << "| " << setw(15) << left << Client.AccountNum;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;
}

void PrintAllClientsData(vector <stUserInfo> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ")Client(s).";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	for (stUserInfo Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;
	}
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;

}
int main()
{
	vector <string> vRecrods = LoadRecordsFromFile();
	vector <stUserInfo> vUserInfo;

	for (string Record : vRecrods)
	{
		vUserInfo.push_back(ConverttoStruct(Record));
	}

	PrintAllClientsData(vUserInfo);
}
