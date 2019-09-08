

#include "Stack.h"
using namespace std;

int main()
{
	Stack st1;
	st1.Push(4); 
	st1.Push(6);
	st1.Push(9);
	Stack st2 = st1;

	wcout << st2.IsEmpty() << endl;
	wcout << st2.Top() << endl;
	st2.Pop();
	wcout << st2.Top() << endl;
	st2.Clear();
	wcout << st2.IsEmpty() << endl;

	system("pause");

}