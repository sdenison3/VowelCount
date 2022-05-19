#include<iostream>
#include<string>

using namespace std;

int vowels(int, int, string);
bool isVowel(char);

int main()
{

	cout << "WELCOME TO VOWEL COUNTER 2022" << endl;
	cout << "Please type the word, phrase, or block of text to have its vowels counted :" << endl;
	
	int length;
	string str;
	
	getline(cin, str);
	
	length = str.length();

	int Total = 0;
	Total = vowels(Total, length, str);
	
	return 0;
}
int vowels(int total, int length, string str)
{ 
	if(length == 0)
	{
	    cout << endl << "The total number of vowels in your string is : " << total << endl;
		return total;
	}
    else if (isVowel(str[length]) == true) 
	{
		total++;
		vowels(total, length - 1, str);
	}
	else if (isVowel(str[length]) == false)
	{
	    vowels(total, length - 1, str);
	}
	return total;
}
bool isVowel(char letter)
{
	if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') return true;
	else if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') return true;
	else return false;
}
