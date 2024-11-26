#include "Stack.h"

Stack::Stack() : top{ EMPTY } {}

Stack::Stack(const char* mas_P)
{
	
}

void Stack::Clear()
{
	top = EMPTY;
}

bool Stack::IsEmpty()
{
	return top == EMPTY;
}

bool Stack::IsFull()
{
	return top == FULL;
}

int Stack::GetCount()
{
	return top + 1;
}

void Stack::Push(char c)
{
	if (!IsFull())
	{
		mas[++top] = c;
	}
}

void Stack::Print()
{
	cout << mas;
}

char Stack::Pop()
{
	if (!IsEmpty())
	{
		return mas[top--];
	}
	else
	{
		return 0;
	}
}