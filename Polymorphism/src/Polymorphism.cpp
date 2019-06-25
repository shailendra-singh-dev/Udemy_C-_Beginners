//============================================================================
// Name        : Polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base {
public:
	virtual void show() {
		cout << "Base:show()" << endl;
	}
	void print() {
		cout << "Base:print()" << endl;
	}

	void fun_1() {
		cout << "Base:fun_1()" << endl;
	}
	virtual void fun_2() {
		cout << "Base:fun_2()" << endl;
	}
	virtual void fun_3() {
		cout << "Base:fun_3()" << endl;
	}
	virtual void fun_4() {
		cout << "Base:fun_4()" << endl;
	}

};

class Derived: public Base {
public:
	void show() {
		cout << "Derived:show()" << endl;
	}
	void print() {
		cout << "Derived:print()" << endl;
	}

	void fun_1() {
		cout << "Derived:fun_1()" << endl;
	}
	void fun_2() {
		cout << "Derived:fun_2()" << endl;
	}
	void fun_4(int x) {
		cout << "Derived:fun_4()" << endl;
	}
};

int main() {
	Base* base = new Derived();
	base->show(); //
	base->print();

//	Base* base;
//	Derived derived;
//	base = &derived;

	base->show(); // late binding.
	base->print(); // early binding.
	base->fun_1(); // early binding.
	base->fun_2(); // late binding.
	base->fun_3(); // late binding.
	base->fun_4(); // late binding.

	// Early binding but this function call is
	// illegal(produces error) because pointer
	// is of base type and function is of
	// derived class
	// base->fun_4(10);

	return 0;
}
