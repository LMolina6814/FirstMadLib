//Lizeth Molina Hernandez
//Beginners Program 2023
// Creating my first madlib

#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName, adverb, noun, verb, noun2, verb2;
	int number;

	cout << "Enter your firstname: ";
	getline(cin, firstName);
	cout << "Enter an adverb: ";
	getline(cin, adverb);
	cout << "Enter a noun:  ";
	getline(cin, noun);
	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter a verb: ";
	cin.ignore();
	getline(cin, verb);
	cout << "Enter a noun: ";
	getline(cin, noun2);
	cout << "Enter a verb: ";
	getline(cin, verb2);

	cout << endl; 
	




	cout << "My name is " << firstName
		<< ". The sun was shining " << adverb << " and there was a "
		<< noun << " in the air. I saw " << number << " dogs, they were acting "
		<< verb << " I also went to my favorite mall ";
	cout << "and got a " << noun2 << " . Can you believe how "
		<< verb2 << " the day was. ";

		
		


	return 0;

}

