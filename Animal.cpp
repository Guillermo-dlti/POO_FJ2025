// source file (.cpp)
// contains the specific implementation
// Here is where we define the HOW

//--------------------------
#include "Animal.h"
//#include <iostream> we already invclude <iostream> in the .h
using namespace std;
//--------------------------

Animal::Animal() : age(0), name("animal"), weight(0) {
	cout << "DEFAULT CONSTRUCTOR INVOKED";
}

Animal::Animal(string newName, int newAge, int newWeight)
	: name(newName), age(newAge), weight(newWeight) {
	cout << "NON-DEFAULT CONSTRUCTOR INVOKED!" << endl;
};

void Animal::eat() {
	cout << "YUMMY!" << endl;
};

string Animal::getName() {
	return name;
};

void Animal::setName(string newName) {
	name = newName;
};

int Animal::add(int a, int b) {
	return a + b;
};

int Animal::getAge() {
	return age;
}

void Animal::setAge(int newAge) {
	age = newAge;
}