//============================================================================
// Name        : Delete_This.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class A {
public:
	void call_delete_this() {
		cout <<"A:call_delete_this()"<<endl;
		delete this;
	}
};
int main() {
	// pointer is created via new keyword.
	A* a = new A();
	a->call_delete_this();
	a = NULL;

	A b;
	b.call_delete_this();

	return 0;
}
