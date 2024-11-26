#include "Stack.h"

void main()
{
	Stack obj1;

	char mas_P[10] = { "12345qwer" };

	for (int i = 0; i < 10; i++)
	{
		obj1.Push(mas_P[i]);
	}

	obj1.Print();
}