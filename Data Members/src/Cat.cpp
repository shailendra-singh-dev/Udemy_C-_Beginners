/*
 * Cat.cpp
 *
 *  Created on: Feb 23, 2018
 *      Author: SS8468
 */

#include "Cat.h"
#include <iostream>

using namespace std;

void Cat::speak() {
	if (mood) {
		cout << "Meeeun !!" << endl;
	} else {
		cout << "Ssshhh !!" << endl;
	}
}

void Cat::makeHappy() {
	mood = true;
}

void Cat::makeSad() {
	mood = false;
}
