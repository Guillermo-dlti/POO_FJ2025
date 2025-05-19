// Header file
// contains the definition of the class with NO implementation (unless its inline)
// We define the WHAT not the HOW

// pragma once - means only hae a single copy of this line file running
#pragma once // everything tht starts with # is a preprocesor directive
#include <string>
#include <iostream>
using namespace std;

//NOTES:
// No sopaces while naming 
// Classes should be name with PascalCase
// variables and objects use camelCase
// constants and enums use UPPER_CASE

// In a class we define a contract
class Animal
{
	// Inside a class  we define memebers!
	// We have 2 categories: attributes and methods
	// Access modifiers - keywords that specify who can acces a member (private, protected, public)
private:
	int age;
	string name;
	int weight;

public:
	// Constructor - method that is invoked when creating an obect
	// Default constructor
	Animal();
	// I can have as many constructors as I need
	Animal(string name, int age, int weight);
	
	// Methods - returnType name(parameterList)
	// This is called a signature
	void eat();
	string getName();
	string setName(string name);
	int add(int first, int second);
};

