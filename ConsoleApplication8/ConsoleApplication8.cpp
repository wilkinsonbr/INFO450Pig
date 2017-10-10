//The point of this program is to take words (or random letters) and translate
// them into pig latin. Following a set of predefined rules.
//It does this by gathering the word in the main() function
// checking to see if the word fits the criteria given to us
// Then it sends the word to another function and that fuction
// decides what type of word it is and translates it. Then returning
//it to the main function for the user to see.

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

string translateToPigLatin(string); //This function translates the words into Pig Latin.

int main()
{
	//myLatin is the phrase that gets translated
	string myLatin;  
	char again = 'y'; //a quick variable for the while loop.

	while (again == 'y' || again == 'Y') //The while loop allows the user to continue to run the program.
{


		cout << "Please enter a phrase you would like translated" << endl;
		cin >> myLatin;

		if (myLatin.length() > 50) //Checks if the word is too long
{
			cout << "Your word is too long. Please try again" << endl;
}
		//Checks if the word starts with a number
		else if (myLatin[0] == '1' || myLatin[0] == '2' || myLatin[0] == '3' || myLatin[0] == '4' || myLatin[0] == '5' || myLatin[0] == '6' || myLatin[0] == '7' || myLatin[0] == '8' || myLatin[0] == '9' || myLatin[0] == '0')
{
			cout << "Please use letters only" << endl;
}
		else
{
			myLatin = translateToPigLatin(myLatin); //Sends the word to get translated
			cout << " Your phrase is " << endl;
			cout << myLatin << endl;
}
		//The while loop allows the user to translate multiple words
		cout << "Would you like to translate again? Y/N " << endl; 
			cin >> again;
}

    return 0;
}

string translateToPigLatin(string latinWord) //The function that translates the string
{

	string latin = "ay"; //added to every pig latin word.
	char vowel = latinWord[0]; //The first letter which if not a vowel gets moved.
	
	if (latinWord.length() <= 2) //Checks to see if the word is under 2 charactures
{
		latinWord = latinWord;
}
	//Checks to see if the first letter is a vowel. Hence the name
	else if (vowel == 'a' || vowel == 'A' || vowel == 'e' || vowel == 'E' || vowel == 'i' || vowel == 'I' || vowel == 'o' || vowel == 'O' || vowel == 'u' || vowel == 'U')
{
		latinWord = latinWord + latin;
}
	//Checks to see if the word is a common article or conjunction
	else if (latinWord=="the" || latinWord == "The" || latinWord == "and" || latinWord == "And" || latinWord == "but" || latinWord == "But" || latinWord == "for" || latinWord == "For" || latinWord == "nor" || latinWord == "Nor" || latinWord == "yet" || latinWord == "Yet")
{
		latinWord = latinWord;
}
	else //if the above conditions are false translates the word.
{
		string translate = latinWord.erase(0, 1);
		translate = translate + vowel;
		translate = translate + latin;
		latinWord = translate;
}
	
	//returns the word to the main() function.
	return latinWord;
}
