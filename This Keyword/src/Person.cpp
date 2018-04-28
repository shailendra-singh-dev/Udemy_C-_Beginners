/*
 * Person.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: SS8468
 */

#include "Person.h"

Person::Person() {
	this -> name = "Undefined";
	this -> age = 60;
	cout << "Address of object :" << this << " in Person() " << endl;
}

Person::Person(string name) {
	this -> name = name;
	this -> age = 0;
	cout << "Address of object :" << this << " in Person(string name) " << endl;
}

Person::Person(string name, int age) {
	this -> name = name;
	this ->age = age;
	cout << "Address of object :" << this << " in Person(string name, int age) " << endl;
}

Person::~Person() {
	this -> name = "";
	this -> age = 0;
}
