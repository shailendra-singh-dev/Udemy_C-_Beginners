/*
 * Person.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: SS8468
 */

#include "Person.h"
#include <sstream>

Person::Person() :	name("Undefined"), age(0) {
}

Person::Person(string name) :	name(name), age(40) {
}

Person::Person(string name, int age) :	name(name), age(age) {
}

string Person::toString() {
	stringstream ss;
	ss << "[Name:" << name << ",Age:" << age << "]";
	return ss.str();
}

Person::~Person() {
}
