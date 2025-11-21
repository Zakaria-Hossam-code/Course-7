#include <iostream>
#include <iomanip>
#include <set>
#include <string>
using namespace std;

string ReadString()
{
	string S;
	cout << "Please Enter a String : ";
	getline(cin, S);
	return S;
}

void PrintEachWord(string S)
{
	string d = " ";

	cout << "Your words are : \n";
	int pos = 0;
	string sWord;
	int counter = 0;
	
	while ((pos = S.find(d)) != std::string::npos)
	{
		sWord = S.substr(0, pos);
		
		if (sWord != " ")
		{
			counter++;
			cout << counter << '.' << sWord << endl;
		}
		S.erase(0, pos + d.length());
	}

	if (S != "")
	{
		counter++;
		cout << counter << '.' << S << endl;
	}

	cout << "Counter = " << counter;
}

int main()
{
	PrintEachWord(ReadString());
}
