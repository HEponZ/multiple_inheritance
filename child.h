#pragma once
#include "Base.h"

template <class T1, class T2, class T3, class T4>
class child : protected Base<T1, T2>
{
private:
	T3 value3;
	T4 value4;
public:
	child(T1 val, T2 val2, T3 val3, T4 val4) : Base<T1, T2>(val, val2), value3{ val3 }, value4{ val4 } {}

	T3 get_val3() { return value3; }
	T4 get_val4() { return value4; }

	void print_child() const;
	~child() {}
};