#include <iostream>
#include <iomanip>
#include <set>
#include <string>
using namespace std;


char ReadChar()
{
	char C;
	cout << "Please Enter a letter : ";
	cin >> C;
	return C;
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

int main()
{
	if (IsVowel(ReadChar()))
	{
		cout << "The Letter is vowel ";
	}
	else
	{
		cout << "The Letter is NOT vowel ";
	}
}
