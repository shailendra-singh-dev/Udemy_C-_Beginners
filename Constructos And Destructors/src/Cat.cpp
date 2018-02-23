/*
 * Cat.cpp
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#include "Cat.h"
#include <iostream>

using namespace std;

void Cat::setIsHappy(bool flag) {
	isHappy = flag;
}

bool Cat::getIsHappy() {
	return isHappy;
}

void Cat::speak() {
	bool isHappy = getIsHappy();
	if (isHappy) {
		cout << "Meeeun !!!" << endl;
	} else {
		cout << "Sssshhhh !!!" << endl;
	}
}

Cat::Cat() {
	cout << "Creating Cat object !!!" << endl;
}

Cat::~Cat() {
	cout << "Destroying Cat object !!!" << endl;
}
