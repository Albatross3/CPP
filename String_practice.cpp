#include <iostream>
#include <string>
using namespace std;

bool isAnagrams(const string& s1, const string& s2);
string makeLower(const string& s);
int main()
{
	string line1, line2;
	cout << "Enter two strings.\n";
	getline(cin, line1);
	getline(cin, line2);
	if (isAnagrams(line1, line2))
		cout << "They are anagrams!";
	else
		cout << "They are not anagrams";
	
}
bool isAnagrams(const string& s1, const string& s2)
{
	string criteria = "abcdefghijklmnopqrstuvwxyz";
	int array1[26];
	int array2[26];
	for (int i = 0; i < 26; i++)
	{
		array1[i] = 0;
		array2[i] = 0;
	}
	for (int i = 0; i < s1.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (criteria[j] == makeLower(s1)[i])
				array1[j] += 1;
			if (criteria[j] == makeLower(s2)[i])
				array2[j] += 1;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (array1[i] != array2[i])
			return 0;
	}
	return 1;
	
}
string makeLower(const string& s)
{
	string temp(s);
	for (int i = 0; i < s.length(); i++)
		temp[i] = tolower(s[i]);
	return temp;
}