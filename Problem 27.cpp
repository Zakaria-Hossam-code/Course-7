#include <iostream>
#include <iomanip>
#include <set>
#include <string>
using namespace std;

char ReadString()
{
	char S;
	cout << "Please Enter Your String : ";
	cin >> S;
	return S;
}

char UPPERlower(char S)
{
	return isupper(S) ? tolower(S) : toupper(S);
}
int main()
{
	cout << UPPERlower(ReadString());
	
}
