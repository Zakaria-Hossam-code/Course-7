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

bool IsVowel(char c)
{
	char arr[5] = { 'a','e','i','o','u' };
	c = tolower(c);

	for (int i = 0;i < 5;i++)
	{
		if (c == arr[i])
		{
			return true;
		}
	}
	return false;
}

void CountVowelInString(string S)
{
	int counter = 0;
	for (int i = 0; i < S.length();i++)
	{
		if (IsVowel(S[i]))
		{
			counter++;
		}
	}
	cout << "Nunber of vowels = " << counter << endl;
}

int main()
{
	CountVowelInString(ReadString());
}
