#include "child.h"

template <class T1, class T2, class T3, class T4>
void child<T1,T2,T3,T4>::print_child() const
{
	Base<T1, T2>::print_base();
	cout << "\n�������� 3: " << value3 << "\n�������� 4: " << value4;
}