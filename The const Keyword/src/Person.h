/*
 * Person.h
 *
 *  Created on: Mar 4, 2018
 *      Author: Shailendra
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string name){this->name = name;};
	void toString() const { cout << "Person name :" << this-> name << endl; };
	virtual ~Person();
};

#endif /* PERSON_H_ */
