#pragma once
#include <iostream>

using namespace std;

template <class T1, class T2>
class Base
{
private:
	T1 value1;
	T2 value2;
public:
	Base(T1 val, T2 val2) : value1{ val }, value2{ val2 } {}

	T1 get_val1() { return value1; }
	T2 get_val2() { return value2; }

	void print_base() const;

	~Base() {}
};