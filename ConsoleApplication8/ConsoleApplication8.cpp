// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string translateToPigLatin(string);

int main()
{
	string myLatin;
	char latin = 'ay';
	char again = 'y';

	while (again == 'y' || again == 'Y') {


		cout << "Please enter a phrase you would like translated" << endl;
		cin >> myLatin;

		if (myLatin.length() > 50)
		{
			cout << "Your word is too long. Please try again" << endl;
		}
		else if (myLatin[0] == '1' || myLatin[0] == '2' || myLatin[0] == '3' || myLatin[0] == '4' || myLatin[0] == '5' || myLatin[0] == '6' || myLatin[0] == '7' || myLatin[0] == '8' || myLatin[0] == '9' || myLatin[0] == '0')
		{
			cout << "Please use letters only" << endl;
		}
		else
		{
			myLatin = translateToPigLatin(myLatin);
			cout << " Your phrase is " << endl;
			cout << myLatin << endl;
		}
		cout << "Would you like to translate again? Y/N " << endl;
			cin >> again;
	}

    return 0;
}

string translateToPigLatin(string latinWord)
{

	string latin = "ay";
	char vowel = latinWord[0];
	string translate = latinWord;
	
	if (latinWord.length() <= 2)
	{
		latinWord = latinWord;
	}
	else if (vowel == 'a' || vowel == 'A' || vowel == 'e' || vowel == 'E' || vowel == 'i' || vowel == 'I' || vowel == 'o' || vowel == 'O' || vowel == 'u' || vowel == 'U')
	{
		latinWord = latinWord + latin;
	}
	else if (latinWord=="the" || latinWord == "The" || latinWord == "and" || latinWord == "And" || latinWord == "but" || latinWord == "But" || latinWord == "for" || latinWord == "For" || latinWord == "nor" || latinWord == "Nor" || latinWord == "yet" || latinWord == "Yet")
	{
		latinWord = latinWord;
	}
	else 
	{
		string translate = latinWord.erase(0, 1);
		translate = translate + vowel;
		translate = translate + latin;
		latinWord = translate;
	}
	

	return latinWord;
}
