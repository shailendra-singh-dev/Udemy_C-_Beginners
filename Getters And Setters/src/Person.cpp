/*
 * Person.cpp
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#include "Person.h"

#include <iostream>

using namespace std;

string Person::toString() {
	return "Person name is " + name;
}

string Person::getName() {
	return name;
}

void Person::setName(string newName) {
	name = newName;
}
