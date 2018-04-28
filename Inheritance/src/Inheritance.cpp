//============================================================================
// Name        : Inheritance.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
public:
	void speak() {
		cout << "Animal speaking" << endl;
	}
};

class Cat: public Animal {
public:
	void speak() {
		cout << "Cat speaking" << endl;
	}
	void walk() {
		cout << "Cat walking" << endl;
	}
};

class Tiger: public Cat {
public:
	void speak() {
		cout << "Tiger speaking" << endl;
	}
	void attack() {
		cout << "Tiger attacking" << endl;
	}
};

int main() {
	Animal animal;
	animal.speak();

	Cat cat;
	cat.speak();
	cat.walk();

	Tiger tiger;
	tiger.speak();
	tiger.walk();
	tiger.attack();

	return 0;
}
